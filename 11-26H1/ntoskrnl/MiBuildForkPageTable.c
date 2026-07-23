/*
 * XREFs of MiBuildForkPageTable @ 0x1402EFCDC
 * Callers:
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall MiBuildForkPageTable(
        ULONG_PTR a1,
        __int64 a2,
        ULONG_PTR a3,
        $241382875694CED3D471BC5892DE3337 *a4,
        __int64 a5,
        int a6)
{
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  KIRQL CurrentIrql; // r12
  int v15; // ebx
  __int64 v16; // r8
  ULONG_PTR v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rax
  unsigned __int64 TransitionPte; // rbx
  __int64 v23; // rdx
  $241382875694CED3D471BC5892DE3337 *result; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // si
  __int64 v30; // rdx
  _DWORD *v31; // rax
  _DWORD *SubsectionFromPte; // rax
  int v33; // [rsp+40h] [rbp-A8h] BYREF
  ULONG_PTR v34; // [rsp+48h] [rbp-A0h]
  __int64 v35; // [rsp+50h] [rbp-98h]
  unsigned __int64 v36; // [rsp+58h] [rbp-90h]
  struct _LIST_ENTRY **p_Blink; // [rsp+60h] [rbp-88h]
  $241382875694CED3D471BC5892DE3337 *v38; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-78h]
  _OWORD v40[3]; // [rsp+78h] [rbp-70h] BYREF

  v35 = a2;
  v38 = a4;
  v34 = a3;
  BugCheckParameter1 = a1;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a5 - 0x220000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v7 + 16) = DemandZeroPte;
  v10 = DemandZeroPte;
  MiSetPfnContainingFrame(v7, v11);
  if ( a6 == 3 )
  {
    p_Blink = 0LL;
    v36 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
    }
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v36 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    CurrentIrql = MiLockWorkingSetShared((__int64)p_Blink, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
    MiMakeSystemAddressValid(v34, 0, CurrentIrql, 0);
  }
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  v15 = *(_DWORD *)(v7 + 32);
  v16 = 1024LL;
  if ( *(__int64 *)(v7 + 40) < 0 && (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v7 + 40) < 0
    && (*(_DWORD *)(v7 + 16) & (unsigned int)v16) != 0
    && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
  {
    v31 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v31 + 56LL) & 0x20) == 0 && (v31[38] & 1) == 0 )
      MiSetSubsectionModified(v31, 0LL);
  }
  if ( (v15 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
    && (*(_QWORD *)(v7 + 16) & 8LL) != 0
    && (v15 & 0x100000) == 0 )
  {
    *(_QWORD *)(v7 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v7 + 32) = v15 | 0x100000;
  if ( (*(_DWORD *)(v7 + 32) & 0xC00000) != 0x400000 )
    MiChangePageAttribute(v7, 1u);
  v17 = v34;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFF0000 | 1;
  *(_QWORD *)(v7 + 8) = v17;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFF8FFFF | 0x60000;
  MiAddLockedPageCharge(v7, 1, v16, v13);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v18 = *(_QWORD *)(v8 + 24);
  v19 = v18 + 1;
  v20 = (v18 ^ (v18 + 1)) & 0xC000000000000000uLL;
  v21 = v38;
  *(_QWORD *)(v8 + 24) = v19 ^ v20;
  *v21 = v10;
  if ( a6 == 3 || (MiIncreaseUsedPtesInPfn(v8, 1), a6 != 1) )
  {
    TransitionPte = MiMakeValidPte(v17, v35, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0x1800000) != 0 && *(_BYTE *)(BugCheckParameter1 + 352) != 1 )
    {
      *(_QWORD *)((v34 & 0xFFF) + *(_QWORD *)(BugCheckParameter1 + 1288)) = TransitionPte;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  else
  {
    TransitionPte = MiMakeTransitionPte(v35, 4);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a6 == 3 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v36);
    LOBYTE(v23) = CurrentIrql;
    MiUnlockWorkingSetShared((__int64)p_Blink, v23);
    if ( a6 == 1 )
    {
      result = v38;
      v38->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)TransitionPte;
      return result;
    }
  }
  memset(v40, 0, sizeof(v40));
  v25 = BugCheckParameter1 + 1024;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v40);
  v26 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = MiLockWorkingSetShared(v25, v27, v28);
  MiLockPageTableInternal(v25, v26, 0LL);
  MiAllocateWsle(v25, (signed __int64 *)v34, (_QWORD *)v7, 0, TransitionPte, 0, 0LL);
  MiUnlockPageTableInternal(v25, v26);
  LOBYTE(v30) = v29;
  MiUnlockWorkingSetShared(v25, v30);
  return KiUnstackDetachProcess((__int64)v40, 0);
}
