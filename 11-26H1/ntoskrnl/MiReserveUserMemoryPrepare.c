/*
 * XREFs of MiReserveUserMemoryPrepare @ 0x140A010AC
 * Callers:
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiCreateWriteWatchView @ 0x1409A07F8 (MiCreateWriteWatchView.c)
 *     MiCreateRotateView @ 0x1409A097C (MiCreateRotateView.c)
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 */

__int64 __fastcall MiReserveUserMemoryPrepare(__int64 *a1)
{
  _WORD **v1; // r12
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v5; // rbp
  __int64 v6; // r13
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  _WORD *ProcessPartition; // rax
  _WORD *v16; // r8
  int v17; // r9d
  int v18; // ebp
  int v19; // ecx
  unsigned __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // ecx
  __int64 result; // rax
  int v24; // ecx

  v1 = (_WORD **)a1[1];
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 4);
  if ( v1 == (_WORD **)1 )
    return 3221225485LL;
  a1[3] = *(_QWORD *)(*(_QWORD *)(v3 + 88) + 1040LL) + 896LL;
  if ( *(_QWORD *)(v3 + 8) - *(_QWORD *)v3 + 1LL == *(_QWORD *)(v3 + 24) )
    *((_DWORD *)a1 + 5) |= 8u;
  if ( (*(_DWORD *)(v3 + 44) & 0x88) != 0 )
    return 3221225541LL;
  if ( ((*(_DWORD *)(v3 + 60) & 0x20000000) == 0 || (MiFlags & 0x200000) != 0) && (v4 & 2) != 0 )
  {
    result = MiArbitraryCodeBlocked(*(_QWORD *)(v3 + 96));
    if ( (int)result < 0 )
      return result;
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = (*(_QWORD *)(v3 + 24) >> 12) + ((*(_QWORD *)(v3 + 24) & 0xFFFLL) != 0);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1399087446, CurrentProcessorColor | 0x80000000);
  v9 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), v5, 0);
  a1[4] = v10;
  v11 = *(_DWORD *)(v10 + 48) | 0x80000;
  *(_QWORD *)(v10 + 16) = -2LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(32 * v4)) & 0x3E0;
  *(_DWORD *)(v10 + 48) = v12;
  if ( (*(_DWORD *)(v3 + 112) & 0x100LL) != 0 )
  {
    v12 |= 0x8000000u;
    *(_DWORD *)(v9 + 48) = v12;
  }
  *(_DWORD *)(v9 + 48) = v12 ^ (v12 ^ (*(_DWORD *)(v3 + 48) << 10)) & 0x1FC00;
  if ( *(_DWORD *)(v3 + 48) )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 1040LL) + 1188LL) = 1;
  if ( (*(_DWORD *)(v3 + 40) & 0x1000) != 0 )
  {
    *(_DWORD *)(v9 + 48) |= 0x400000u;
    v13 = v6;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (*(_DWORD *)(v3 + 60) & 0x40000000) != 0 )
    *(_DWORD *)(v9 + 48) |= 0x1000000u;
  v14 = *(_DWORD *)(v3 + 60);
  if ( (v14 & 1) != 0 )
  {
    v13 = 0x7FFFFFFFELL;
  }
  else if ( (v14 & 0x8000000) != 0 )
  {
    v13 = 0x7FFFFFFFDLL;
  }
  *(_DWORD *)(v9 + 52) = v13;
  *(_BYTE *)(v9 + 34) = BYTE4(v13);
  ProcessPartition = (_WORD *)MiGetProcessPartition(*(_QWORD *)(v3 + 88));
  v18 = 0;
  *v16 = *ProcessPartition;
  v19 = *(_DWORD *)(v3 + 40);
  v20 = *(_QWORD *)(v3 + 112);
  v21 = v19 & 0x20400000;
  if ( (v19 & 0x20400000) != 0x20000000 )
  {
    if ( v21 == 541065216 )
    {
      v18 = 1;
      if ( (v20 & 2) != 0 )
        *((_DWORD *)a1 + 5) |= 0x10u;
      goto LABEL_23;
    }
    if ( v21 != v17 )
    {
      if ( (v19 & 0x800000) != 0 )
      {
        result = MiCreateRotateView(*(_QWORD *)(v3 + 88), v9);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v9 + 48) = *(_DWORD *)(v9 + 48) & 0xFFFFFFE3 | 0x10;
      }
      goto LABEL_23;
    }
    v24 = v4 & 7;
    if ( (v4 & 0xFFFFFFF8) != 0x10 && (v24 == 4 || v24 == 1) )
    {
      if ( MiCreateUserPhysicalView(*(_KPROCESS **)(v3 + 88), v9, v4, (_QWORD *)v3, v16) >= 0 )
      {
        *(_DWORD *)(v9 + 48) = *(_DWORD *)(v9 + 48) & 0xFF7FFFE3 | 0xC;
        *(_DWORD *)(v3 + 60) |= 4u;
        goto LABEL_23;
      }
      return 3221225626LL;
    }
    return 3221225541LL;
  }
  *((_DWORD *)a1 + 5) |= 0x10u;
  v18 = (v20 >> 4) & 1 | 2;
LABEL_23:
  if ( (*((_DWORD *)a1 + 5) & 0x10) != 0 )
  {
    result = MiCreateLargePageEvent(*(_QWORD *)(v3 + 88));
    if ( (int)result < 0 )
      return result;
    if ( v1 )
      *((_WORD *)a1 + 32) = **v1;
    if ( (v20 & 0x1A) != 0 )
      *(_DWORD *)(v9 + 48) |= 0x200000u;
  }
  v22 = (v18 << 17) | *(_DWORD *)(v9 + 48) & 0xFFF9FFFF;
  *(_DWORD *)(v9 + 48) = v22;
  if ( (*(_DWORD *)(v3 + 40) & 0x200000) != 0 )
  {
    result = MiCreateWriteWatchView(*(_QWORD *)(v3 + 88), v9);
    if ( (int)result < 0 )
      return result;
    v22 = *(_DWORD *)(v9 + 48) | 0x100000;
    *(_DWORD *)(v9 + 48) = v22;
  }
  if ( (v20 & 0x80u) != 0LL )
    *(_DWORD *)(v9 + 48) = v22 | 0x4000000;
  if ( (*(_DWORD *)(v3 + 60) & 0x4000000) == 0 )
    return 0LL;
  result = MiCreatePlaceholderStorage(*(_QWORD *)(v3 + 88));
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 5) |= 4u;
    return 0LL;
  }
  return result;
}
