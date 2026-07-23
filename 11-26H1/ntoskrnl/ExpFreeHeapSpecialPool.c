/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x140347BA8
 * Callers:
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExpPoolTrackerReturnLimit @ 0x140347070 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140C4C9BC (ViFreeTrackedPool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  ULONG_PTR v9; // r14
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // r9
  _BYTE *i; // r8
  _BYTE *j; // r8
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // edx
  int StackBase; // r10d
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // edx
  unsigned int v22; // r11d
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // r9
  char v27; // [rsp+68h] [rbp+10h] BYREF
  char v28; // [rsp+70h] [rbp+18h] BYREF
  int v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = MmDeterminePoolType(a2);
  v6 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v7 = 16LL;
  v8 = v4;
  if ( (*(_DWORD *)(v5 & 0xFFFFFFFFFFFFF000uLL) & 0x2000) != 0 )
    v7 = (unsigned int)ExpCacheLineSize;
  v9 = 4096 - (unsigned int)(v5 & 0xFFF);
  if ( byte_140FC8BD8 )
    KasanMarkAddressValidNoInline((ULONG_PTR)v6, 0x1000uLL);
  ExpFreePoolChecks(a2, v6[1], v9, 128, a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - ((v8 & 0x100) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, a2, 0x31uLL);
  v11 = *(_WORD *)v6 & 0x1FFF;
  if ( ((v11 + (unsigned int)v7 - 1LL) & ~(v7 - 1)) != v9 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)v6 & 0x1FFF, v9, 0x21uLL);
  v12 = *v6;
  for ( i = (char *)v6 + ((*v6 & 0x4000) != 0 ? 24LL : 16LL); (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *((_BYTE *)v6 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, v12, 0x23uLL);
  }
  for ( j = (_BYTE *)(v11 + a2); (unsigned __int64)j < ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
  {
    if ( *j != *((_BYTE *)v6 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)j, v12, 0x24uLL);
  }
  if ( (*v6 & 0x4000) != 0 )
    ViFreeTrackedPool(a2, v11);
  v15 = v6[1];
  v29 = 0;
  v27 = 0;
  v28 = 0;
  if ( (_DWORD)v15 == PoolHitTag )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v16 = ExpPoolFlagsToPoolType(v8, v8 & 0x10, (unsigned int)&v29, (unsigned int)&v27, (__int64)&v28);
    if ( (int)v16 >= 0 )
    {
      v17 = v29;
      if ( v27 )
        v17 = v29 | 8;
      v16 = EtwTracePool(3618, v17, v15, a2, v9);
    }
  }
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFF2C0.StackBase;
  v19 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
  v20 = *(&stru_140EFF2C0.ThreadLock + v16);
  v21 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v15) ^ ((unsigned __int64)(40543 * v15) >> 32));
  v22 = v21;
  while ( 1 )
  {
    v23 = v20 + 80LL * v21;
    if ( *(_DWORD *)v23 == (_DWORD)v15 )
      break;
    if ( *(_DWORD *)v23 || (v24 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v21)) == 0 )
    {
      v21 = StackBase & (v21 + 1);
      if ( v21 == v22 )
      {
        ExpRemovePoolTrackerExpansion(v15, v9, v19);
        return RtlpHpFreeHeap(a1, v6);
      }
    }
    else
    {
      *(_DWORD *)v23 = v24;
      v25 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v21 + 72);
      if ( v25 )
        *(_QWORD *)(v23 + 72) = v25;
    }
  }
  ExpPoolTrackerReturnLimit((v19 & 0x100) == 0, v9, v23);
  return RtlpHpFreeHeap(a1, v6);
}
