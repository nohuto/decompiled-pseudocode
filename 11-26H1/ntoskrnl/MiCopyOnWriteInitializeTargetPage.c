/*
 * XREFs of MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiLockWorkingSetCoreShared @ 0x1402CFF20 (MiLockWorkingSetCoreShared.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiSetWsleProtection @ 0x14036DE30 (MiSetWsleProtection.c)
 *     MiUnlockWorkingSetCoreShared @ 0x14036E020 (MiUnlockWorkingSetCoreShared.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCopyOnWriteInitializeTargetPage(unsigned int *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 ContainingPageTable; // rax
  signed __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  signed __int64 i; // rax
  int v18; // ebx
  int v19; // r8d
  unsigned int v20; // edx
  __int64 result; // rax
  _DWORD *v22; // rax
  _DWORD *SubsectionFromPte; // rax
  __int64 v24; // rdx
  int v25; // [rsp+30h] [rbp-40h] BYREF
  __int128 v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h]
  _QWORD v28[2]; // [rsp+58h] [rbp-18h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a1 + 2);
  v26 = 0LL;
  v27 = 0LL;
  v5 = 48 * a2 - 0x220000000000LL;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(a1[29]);
  if ( (a1[28] & 0xF) != 0xA )
  {
    v8 = *((_QWORD *)a1 + 9);
    v9 = *((_QWORD *)a1 + 1);
    MiLockWorkingSetCoreShared(v8, v6, v7);
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 160));
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 144));
    MiUnlockWorkingSetCoreShared(v8, v10, v11);
    MiSetWsleProtection(v12, v9, 0LL);
    *((_QWORD *)a1 + 3) = *v2;
  }
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v2);
  v14 = *(_QWORD *)(v5 + 40);
  v15 = ContainingPageTable;
  v16 = ContainingPageTable ^ (v14 ^ ContainingPageTable) & 0xFFFFFF0000000000uLL;
  for ( i = v14; ; v16 = v15 ^ (i ^ v15) & 0xFFFFFF0000000000uLL )
  {
    i = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 40), v16, i);
    if ( v14 == i )
      break;
    v14 = i;
  }
  a1[30] = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    *a1 |= 4u;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFFF0000 | 1;
  if ( (*a1 & 0x10) != 0 )
    *(_QWORD *)v5 |= 1uLL;
  v18 = *(_DWORD *)(v5 + 32);
  v19 = 1024;
  if ( *(__int64 *)(v5 + 40) < 0 && (*(_QWORD *)(v5 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v5 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, v5, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v5 + 40) < 0
    && (*(_DWORD *)(v5 + 16) & v19) != 0
    && (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) == 0 )
  {
    v22 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v5 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v22 + 56LL) & 0x20) == 0 && (v22[38] & 1) == 0 )
      MiSetSubsectionModified(v22, 0LL);
  }
  if ( (v18 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(v5)
    && (*(_QWORD *)(v5 + 16) & 8LL) != 0
    && (v18 & 0x100000) == 0 )
  {
    *(_QWORD *)(v5 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v5 + 32) = v18 | 0x100000;
  v20 = (*(_DWORD *)(*((_QWORD *)a1 + 5) + 32LL) >> 22) & 3;
  if ( ((*(_DWORD *)(v5 + 32) >> 22) & 3) != v20 )
    MiChangePageAttribute(v5, v20);
  MiSetPfnTbFlushStamp(v5, 0LL, 1LL);
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
  if ( (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v5 + 32) = ((char)a1[30] << 24) ^ (((char)a1[30] << 24) ^ *(_DWORD *)(v5 + 32)) & 0xF8FFFFFF;
  *(_QWORD *)(v5 + 8) = v2;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFF8FFFF | 0x60000;
  if ( a1[20] || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 32LL) & 0x8000000) == 0 || (a1[31] & 1) != 0 )
    *(_BYTE *)(v5 + 35) &= ~8u;
  else
    *(_BYTE *)(v5 + 35) |= 8u;
  if ( (*a1 & 4) != 0 )
  {
    if ( a1[20] == 1 )
      v24 = *((_QWORD *)a1 + 8);
    else
      v24 = 0LL;
    MiIdentifyPfn(a2, v24, (unsigned __int64 *)&v26);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = *a1;
  if ( (result & 4) != 0 )
  {
    *((_QWORD *)&v27 + 1) |= 8uLL;
    v28[0] = &v26;
    v28[1] = 32LL;
    return EtwTraceKernelEvent((int)v28, 1, 0x28000001u, 642, 290462468);
  }
  return result;
}
