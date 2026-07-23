/*
 * XREFs of MiAllocateDataVad @ 0x140995980
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateDataVad(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v6; // rbx
  _DWORD *v7; // r14
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // r15
  void *v15; // r15
  int PlaceholderStorage; // r15d
  unsigned int v18; // eax
  int v19; // ebp

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 88);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x90uLL, 543449430, CurrentProcessorColor | 0x80000000);
  v6 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *(_QWORD *)(MiInitializeQuotaTracker(PoolMm + 68, v3, 0LL) + 16) = -2LL;
  v7 = (_DWORD *)(v1 + 40);
  v8 = 0;
  *(_QWORD *)(v6 + 88) = a1[9];
  v9 = 4;
  *(_QWORD *)(v6 + 80) = a1[10];
  if ( *((_DWORD *)a1 + 29) != 1 )
    v9 = 0;
  v10 = *(_DWORD *)(v6 + 48) ^ ((unsigned __int16)*(_DWORD *)(v6 + 48) ^ (unsigned __int16)(32 * *((_DWORD *)a1 + 8))) & 0x3E0;
  *(_DWORD *)(v6 + 48) = v10;
  *(_DWORD *)(v6 + 48) = v10 ^ (v10 ^ (*(_DWORD *)(v1 + 48) << 10)) & 0x1FC00;
  v11 = a1[3];
  if ( *(_QWORD *)(v11 + 64) && (*v7 & 0x20002000) == 0 )
    v9 |= 2u;
  *((_DWORD *)a1 + 28) = v9;
  *(_QWORD *)(v6 + 40) = 0LL;
  if ( (*(_DWORD *)(v1 + 60) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(*(_QWORD *)(v1 + 88));
    if ( PlaceholderStorage < 0 )
    {
      ExFreePoolWithTag((PVOID)v6, 0);
      return (unsigned int)PlaceholderStorage;
    }
  }
  v12 = a1[1];
  a1[13] = v6;
  v13 = (__int64 *)a1[10];
  v14 = *(_QWORD *)(v12 + 40);
  if ( (v14 & 3) != 0 )
  {
    v15 = (void *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObjectWithTag(v15, 0x63536D4Du);
  }
  else
  {
    v15 = 0LL;
  }
  *(_QWORD *)(v6 + 136) = v15;
  if ( (*v7 & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)(v11 + 64) )
    {
      v18 = MiIncrementLargeSubsections(v13, a1[12]);
      if ( v18 > 1 )
        return 3221226016LL;
      *((_DWORD *)a1 + 14) |= 2u;
      LOBYTE(v8) = v18 != 1;
      v19 = v8 + 2;
    }
    else
    {
      v19 = 2;
    }
    *(_DWORD *)(v6 + 48) = (v19 << 17) | *(_DWORD *)(v6 + 48) & 0xFFF9FFFF;
  }
  if ( *(_DWORD *)(v1 + 48) )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 1040LL) + 1188LL) = 1;
  return 0LL;
}
