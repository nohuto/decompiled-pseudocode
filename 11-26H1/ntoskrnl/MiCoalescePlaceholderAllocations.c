/*
 * XREFs of MiCoalescePlaceholderAllocations @ 0x140A05828
 * Callers:
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiDecrementVadsBeingDeleted @ 0x14043B970 (MiDecrementVadsBeingDeleted.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MiReturnVadDeleted @ 0x14049D1A0 (MiReturnVadDeleted.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MiUnlockVadRange @ 0x140A06150 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 */

__int64 __fastcall MiCoalescePlaceholderAllocations(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // r13
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 NextVad; // rdi
  unsigned __int64 v10; // r14
  unsigned int i; // r12d
  _QWORD *v12; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  _QWORD *v17; // rbx
  ULONG_PTR v18; // rdi
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // r14
  _QWORD *v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  int v29; // ebx
  ULONG_PTR v30; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v6 = MiLockVadRange(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1LL);
  if ( v6 < 2 )
    goto LABEL_16;
  Address = MiLocateAddress(a2);
  v8 = (unsigned __int64)Address;
  if ( (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) << 12 != a2 )
    goto LABEL_16;
  NextVad = (unsigned __int64)Address;
  v10 = (unsigned __int64)Address;
  for ( i = 0; i < v6; ++i )
  {
    if ( (*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) != 0x7FFFFFFFDLL )
      goto LABEL_16;
    if ( (MiReadVadFlags(NextVad) & 2) != 0 )
    {
      v29 = MiCheckSecuredVad(
              NextVad,
              (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12,
              ((*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32))
             - (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32))
             + 1) << 12,
              0x55u,
              a4,
              0LL);
      if ( v29 < 0 )
        goto LABEL_17;
    }
    v10 = NextVad;
    NextVad = MiGetNextVad(NextVad);
  }
  if ( (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) == a3 )
  {
    v12 = (_QWORD *)MiGetNextVad(v8);
    v13 = MiGetNextVad((unsigned __int64)v12);
    MiReferenceVad((ULONG_PTR)v12);
    MiRemoveVad((ULONG_PTR)v12, 2, v8);
    MiSetVadDeleted((__int64)v12, v14, v15, v16);
    *v12 = 0LL;
    if ( v12 != (_QWORD *)v10 )
    {
      do
      {
        v17 = (_QWORD *)v13;
        v18 = v13;
        v19 = MiGetNextVad(v13);
        v20 = v13;
        v13 = v19;
        MiReferenceVad(v20);
        MiRemoveVad(v18, 2, v8);
        MiSetVadDeleted(v18, v21, v22, v23);
        *v17 = v12;
        v12 = (_QWORD *)v18;
      }
      while ( v18 != v10 );
    }
    v24 = *(_QWORD *)(a1 + 1040);
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 1128));
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    v25 = v12;
    while ( v25 )
    {
      v26 = v25;
      v25 = (_QWORD *)*v25;
      if ( (_InterlockedExchangeAdd64(v26 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v26 + 5);
      KeAbPostRelease((unsigned __int64)(v26 + 5));
    }
    MiUnlockVad((__int64)CurrentThread, v8);
    while ( v12 )
    {
      v30 = (ULONG_PTR)v12;
      v12 = (_QWORD *)*v12;
      MiLockVad((__int64)CurrentThread, v30, v27, v28);
      MiDeleteVad(v30, 0LL, 0);
      MiReturnVadDeleted(a1);
    }
    MiDecrementVadsBeingDeleted(v24 + 896);
    return 0;
  }
  else
  {
LABEL_16:
    v29 = -1073741800;
LABEL_17:
    MiUnlockVadRange(a1, a2, v6, 1LL);
  }
  return (unsigned int)v29;
}
