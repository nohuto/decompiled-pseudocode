/*
 * XREFs of sub_140022784 @ 0x140022784
 * Callers:
 *     sub_140022660 @ 0x140022660 (sub_140022660.c)
 *     sub_140024540 @ 0x140024540 (sub_140024540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140022784(__int64 a1, __int64 a2)
{
  bool v2; // zf
  LONGLONG v5; // rax
  double v6; // xmm0_8
  double v7; // xmm1_8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)a1 == 0;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v2 )
  {
    v7 = 0.0;
  }
  else
  {
    ++*(_DWORD *)(a1 + 4);
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v5 = PerformanceCount.QuadPart - *(_QWORD *)(a1 + 16);
    v6 = (double)(int)*(_QWORD *)(a1 + 8);
    *(_BYTE *)a1 = 0;
    v7 = (double)(int)v5 / v6;
    *(double *)(a1 + 24) = v7 + *(double *)(a1 + 24);
  }
  *(double *)(a2 + 8) = v7;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 24);
  return a2;
}
