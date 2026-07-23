/*
 * XREFs of MmGetNodeChannelRanges @ 0x140B21FB8
 * Callers:
 *     ExpQueryMemoryTopologyInformation @ 0x1407770EC (ExpQueryMemoryTopologyInformation.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MmGetNodeChannelRanges(__int64 *a1, ULONG_PTR *a2)
{
  unsigned int *v4; // rdi
  ULONG_PTR v5; // r14
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // r10
  __int64 *v12; // r11
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx

  v4 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, v5, 1750101325, CurrentProcessorColor | 0x80000000);
  v8 = 0;
  v9 = PoolMm;
  if ( PoolMm )
  {
    v11 = PoolMm + 16;
    *(_QWORD *)PoolMm = *v4;
    v12 = (__int64 *)(v4 + 4);
    v13 = 0;
    *(_DWORD *)(PoolMm + 8) = (unsigned __int16)KeNumberNodes;
    *(_DWORD *)(PoolMm + 12) = (unsigned __int8)byte_140E2D898;
    v14 = *v4;
    v15 = &v4[4 * v14 + 4];
    if ( (_DWORD)v14 )
    {
      do
      {
        v16 = *v12;
        v12 += 2;
        *(_QWORD *)(v11 + 8) = v16;
        *(_QWORD *)(v11 + 16) = *(v12 - 1);
        v17 = *v15;
        v15 += 2;
        *(_DWORD *)v11 = v17;
        v11 += 32LL;
        v18 = *((unsigned __int8 *)v15 - 4);
        *(_DWORD *)(v11 - 28) = v18;
        ++v13;
        *(_QWORD *)(v11 - 8) = *(_BYTE *)(v18 + qword_140E37E50 + 56320 * v17 + 14149) == 1;
      }
      while ( v13 < *v4 );
    }
  }
  else
  {
    v8 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v4);
  result = v8;
  *a1 = v9;
  *a2 = v5;
  return result;
}
