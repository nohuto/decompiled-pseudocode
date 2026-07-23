/*
 * XREFs of KeRequestTerminationThread @ 0x1403107F4
 * Callers:
 *     KeRequestTerminationProcess @ 0x1407BCFA8 (KeRequestTerminationProcess.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1403108E0 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     VslRequestSecureThreadExit @ 0x1405C6718 (VslRequestSecureThreadExit.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 368) & 1) != 0 )
    VslRequestSecureThreadExit();
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    KiAcquireThreadLockRaiseToDpc(a1, &v6);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = v6;
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, v5, 0);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v5);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      KeForceResumeThread(a1);
    }
  }
}
