/*
 * XREFs of MiAllocateExtendSubsections @ 0x140A65A94
 * Callers:
 *     MiExtendSection @ 0x140A6590C (MiExtendSection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     Mi4KStartForSubsection @ 0x14048D2FC (Mi4KStartForSubsection.c)
 */

__int64 __fastcall MiAllocateExtendSubsections(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 *v5; // r13
  unsigned __int64 v6; // rbx
  __int64 **v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned int v12; // edi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v15; // r9
  int v16; // r10d
  __int64 v18; // [rsp+50h] [rbp+8h]

  v5 = *a1;
  v6 = 0LL;
  v10 = a1;
  v11 = 0LL;
  v18 = **a1;
  while ( 1 )
  {
    v12 = a4 - v6 > a5 ? a5 : (int)a4 - (int)v6;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0xA0uLL, 1683189069, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      break;
    *(_QWORD *)(PoolMm + 96) = PoolMm + 88;
    *(_QWORD *)(PoolMm + 88) = PoolMm + 88;
    v10[2] = (__int64 *)PoolMm;
    if ( !v6 )
    {
      *((_DWORD *)v10 + 10) = *((_DWORD *)v10 + 11);
      *((_DWORD *)v10 + 8) &= 0xFFFFFu;
      v11 = *((unsigned int *)v10 + 9) | ((unsigned __int64)((_DWORD)v10[4] & 0xFFC0) << 26);
    }
    v6 += v12;
    *(_QWORD *)PoolMm = v5;
    *(_DWORD *)(PoolMm + 44) = v12 >> 3;
    if ( v6 > 8 * a3 )
      *(_DWORD *)(PoolMm + 52) = (v6 >> 3) - a3;
    *(_DWORD *)(PoolMm + 32) = 2 * (*(_BYTE *)(v18 + 14) & 0x1F);
    v11 += *((unsigned int *)v10 + 10);
    Mi4KStartForSubsection(PoolMm, v11);
    if ( v6 >= a4 )
    {
      *(_DWORD *)(v15 + 40) = (a2 >> 12) - v11;
      *(_DWORD *)(v15 + 32) = *(_DWORD *)(v15 + 32) & 0xFFFFF | ((unsigned __int16)a2 << 20);
      return 0LL;
    }
    *(_DWORD *)(v15 + 40) = v16;
    v10 = (__int64 **)v15;
  }
  return 3221225626LL;
}
