/*
 * XREFs of MiUnlockVadRange @ 0x140A06150
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 */

void __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *FirstVad; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 NextVad; // r14
  unsigned __int64 v12; // r15

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    FirstVad = (struct _LIST_ENTRY *)MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(a2);
  v9 = (unsigned __int64)FirstVad;
  while ( a3 )
  {
    NextVad = MiGetNextVad(v9);
    if ( a3 == 1 )
    {
      MiUnlockVad((__int64)CurrentThread, v10);
      break;
    }
    v12 = v10 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    KeAbPostRelease(v12);
    v9 = NextVad;
    --a3;
  }
  if ( a4 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  else
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
