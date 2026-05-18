/*
 * XREFs of sub_18000F25C @ 0x18000F25C
 * Callers:
 *     sub_18000DACC @ 0x18000DACC (sub_18000DACC.c)
 *     sub_18000DB44 @ 0x18000DB44 (sub_18000DB44.c)
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 * Callees:
 *     sub_18000DC2C @ 0x18000DC2C (sub_18000DC2C.c)
 */

DWORD __fastcall sub_18000F25C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18000DC2C(a1, a2, a3, 0LL, 0LL, a6, 0x8007029C);
    return 668;
  }
  return result;
}
