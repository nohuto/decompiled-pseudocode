/*
 * XREFs of MiMarkMdlComplete @ 0x1403C5184
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

LONG __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  __int64 LockedVadEvent; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // r14d
  unsigned __int64 v10; // r13
  ULONG_PTR v11; // rdi
  int v12; // ebx
  LONG result; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _DWORD *SubsectionFromPte; // rax
  int v17; // [rsp+60h] [rbp+8h] BYREF

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8LL);
  v5 = (_QWORD *)(v4 + 48);
  v6 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v7 = *(_QWORD *)(LockedVadEvent + 24);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
  }
  if ( v6 )
  {
    v9 = 1;
    do
    {
      v10 = v9;
      v11 = 48LL * *v5 - 0x220000000000LL;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      v12 = *(_DWORD *)(v11 + 32);
      if ( *(__int64 *)(v11 + 40) < 0 && (*(_QWORD *)(v11 + 16) & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v11 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v11, 0LL, 1uLL);
      }
      if ( *(__int64 *)(v11 + 40) < 0
        && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
      {
        v15 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v11 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x20) == 0 && (v15[38] & 1) == 0 )
          MiSetSubsectionModified(v15, 0LL);
      }
      if ( (v12 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v11)
        && (v12 & 0x100000) == 0
        && (*(_DWORD *)(v11 + 16) & 8) != 0 )
      {
        *(_QWORD *)(v11 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v11 + 32) = v12 | 0x100000;
      *(_DWORD *)(v11 + 32) &= ~0x200000u;
      *(_QWORD *)v11 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v9 & 0x3F) == 0 && v9 != v6 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v14 = KeGetCurrentIrql();
        if ( (_BYTE)v14 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v14, 2LL);
      }
      ++v5;
      ++v9;
    }
    while ( v10 < v6 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  *(_DWORD *)(v7 + 80) = -1073741670;
  *(_QWORD *)(v7 + 88) = 0LL;
  result = *(_DWORD *)(v7 + 176);
  if ( result > 1 )
    return KeSetEvent((PRKEVENT)(v7 + 56), 0, 0);
  return result;
}
