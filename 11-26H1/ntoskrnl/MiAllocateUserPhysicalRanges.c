/*
 * XREFs of MiAllocateUserPhysicalRanges @ 0x14087E9B0
 * Callers:
 *     MiAllocateUserPhysicalPagesMdl @ 0x14087E04C (MiAllocateUserPhysicalPagesMdl.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiAllocateUserPhysicalRanges(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  _DWORD *v8; // r14
  _DWORD *v9; // rdi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v12; // rax
  _QWORD *v13; // r10
  _QWORD *v14; // r8
  int v15; // ecx
  unsigned __int64 i; // r9
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+50h] [rbp-10h]

  v4 = a2 >> 18;
  P = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a4 )
  {
    v9 = a4;
  }
  else
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 8 * v4 + 48, 1917873485, CurrentProcessorColor | 0x80000000);
    v9 = (_DWORD *)PoolMm;
    if ( !PoolMm )
      goto LABEL_11;
    *(_QWORD *)PoolMm = 0LL;
    *(_WORD *)(PoolMm + 8) = 8 * (v4 + 6);
    *(_DWORD *)(PoolMm + 40) = (_DWORD)v4 << 12;
    *(_WORD *)(PoolMm + 10) = 0;
    *(_QWORD *)(PoolMm + 32) = 0LL;
    *(_DWORD *)(PoolMm + 44) = 0;
  }
  v12 = *(_QWORD *)(a1 + 256);
  DWORD1(v21) |= 7u;
  *((_QWORD *)&v21 + 1) = v12;
  LODWORD(v21) = 1;
  *((_QWORD *)&v22 + 1) = 0x40000000LL;
  LODWORD(v23) = a3;
  *(_QWORD *)&v22 = v4;
  if ( (int)MmAllocateMemoryRanges((__int64)&v21) >= 0 )
  {
    v13 = v9 + 12;
    v14 = P;
    v15 = 0;
    for ( i = 0LL; i < *((_QWORD *)&v23 + 1); ++i )
    {
      v17 = 0LL;
      v18 = *v14 % *((_QWORD *)&v22 + 1) + 1LL;
      v15 += v18;
      do
      {
        v19 = v17 + (*v14 >> 12);
        v17 += 0x40000LL;
        *v13++ = v19;
        --v18;
      }
      while ( v18 );
      ++v14;
    }
    v8 = v9;
    v9[10] = v15 << 12;
    v9 = 0LL;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 && v9 != a4 )
    ExFreePoolWithTag(v9, 0);
  return v8;
}
