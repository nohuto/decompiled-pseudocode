/*
 * XREFs of CmpCallCallBacks @ 0x1408D02C0
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // [rsp+20h] [rbp-28h]

  v7 = a4;
  LOBYTE(a4) = 1;
  return CmpCallCallBacksEx(a1, a2, 0, a4, v7, a5, a6);
}
