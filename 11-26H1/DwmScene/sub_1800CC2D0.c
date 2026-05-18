/*
 * XREFs of sub_1800CC2D0 @ 0x1800CC2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CAE30 @ 0x1800CAE30 (sub_1800CAE30.c)
 */

__int64 __fastcall sub_1800CC2D0(__int64 a1, __int64 *a2, int *a3, unsigned int *a4)
{
  unsigned int v4; // r9d
  int v5; // r8d
  __int64 v6; // rax
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = *a3;
  v8[0] = *a2;
  v6 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v8[1] = v6;
  return sub_1800CAE30(a1 + 8, v8, v5, v4);
}
