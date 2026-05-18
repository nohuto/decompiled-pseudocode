/*
 * XREFs of sub_18009AE9C @ 0x18009AE9C
 * Callers:
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_18009A430 @ 0x18009A430 (sub_18009A430.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009AE9C(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax

  v5 = a1 + 8;
  sub_180029674(a1 + 8);
  sub_18009A430(a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 4) = 0;
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 208) & 1LL | ((unsigned __int64)v6 >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 392) & 1LL | ((unsigned __int64)v9 >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  *(double *)(a2 + 16) = v10 / a3 * 1000.0;
  sub_1800297F4(v5);
  return a2;
}
