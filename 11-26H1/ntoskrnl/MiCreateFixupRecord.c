/*
 * XREFs of MiCreateFixupRecord @ 0x140AF4248
 * Callers:
 *     MiScanRelocationPage @ 0x140881A44 (MiScanRelocationPage.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 */

__int64 __fastcall MiCreateFixupRecord(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _WORD *a6, _QWORD *a7)
{
  __int64 v8; // rbx
  __int16 v9; // r13
  unsigned int v10; // r15d
  int v11; // r14d
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v15; // [rsp+50h] [rbp+8h]

  if ( (a3 + 4096) >> 12 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 3221225477LL;
  v8 = 0LL;
  HIDWORD(v15) = 0;
  v9 = *a6 >> 12;
  v10 = 4096 - a4;
  if ( (a3 & 0xFFF) < 4096 - a4 )
  {
    v11 = a5;
    if ( a5 == 4 )
    {
      LODWORD(v15) = *(_DWORD *)(a3 + a2);
      v8 = v15;
    }
    else
    {
      v8 = *(_QWORD *)(a3 + a2);
    }
  }
  else
  {
    *a6 &= 0xFFFu;
    v11 = a5;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, 0x20uLL, 1917218125, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  *(_WORD *)(PoolMm + 16) = v9;
  *(_DWORD *)(PoolMm + 12) = a3 + v11;
  if ( (a3 & 0xFFF) >= v10 )
  {
    *(_DWORD *)(PoolMm + 8) = (a3 & 0xFFFFF000) + 4096;
  }
  else
  {
    *(_DWORD *)(PoolMm + 8) = a3;
    *(_QWORD *)(PoolMm + 24) = v8;
    *(_QWORD *)(*a7 + 8 * ((unsigned __int64)a3 >> 12)) |= 1uLL;
  }
  *(_QWORD *)(*a7 + 8 * ((unsigned __int64)*(unsigned int *)(PoolMm + 12) >> 12)) |= 1uLL;
  *(_QWORD *)PoolMm = a7[2];
  a7[2] = PoolMm;
  return 0LL;
}
