/*
 * XREFs of MiFinishLastForkPageTable @ 0x1404CA0CC
 * Callers:
 *     MiFreeForkMaps @ 0x140A07F00 (MiFreeForkMaps.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  BOOL v4; // ebx
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // si
  __int64 v19; // rdx
  int v20; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v21[3]; // [rsp+48h] [rbp-60h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = 1;
  v5 = 48 * a2 - 0x220000000000LL;
  v6 = 0xFFFFF68000000000uLL;
  v7 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
  v8 = (__int64)(v7 << 25) >> 16 << 25 >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL )
    v4 = v8 > 0xFFFFF6FFFFFFFFFFuLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, v6);
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  MiRemoveLockedPageChargeAndDecRef(v5);
  if ( !v4 )
    goto LABEL_17;
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
      MiBadShareCount(v5);
    v10 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 24) = ((v10 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v10 ^ ((v10 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
    if ( (v10 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v5, 0LL);
LABEL_17:
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    return result;
  }
  v12 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000) + 8 * ((v7 >> 3) & 0x1FF);
  v13 = *(_QWORD *)v12;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( (v13 & 1) == 0 )
  {
    ValidPte = MiMakeValidPte(v7, a2, -2147483644);
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v21);
    v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = MiLockWorkingSetShared((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v16, v17);
    MiLockPageTableInternal((signed __int64)&BugCheckParameter1[2].ReadyListHead.Blink, v15, 0);
    MiAllocateWsle(
      (__int64)&BugCheckParameter1[2].ReadyListHead.Blink,
      (signed __int64 *)v7,
      (_QWORD *)v5,
      0,
      ValidPte,
      0,
      0LL);
    MiUnlockPageTableInternal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v15);
    LOBYTE(v19) = v18;
    MiUnlockWorkingSetShared((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v19);
    return (__int64)KiUnstackDetachProcess((__int64)v21, 0);
  }
  return result;
}
