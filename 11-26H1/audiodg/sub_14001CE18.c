/*
 * XREFs of sub_14001CE18 @ 0x14001CE18
 * Callers:
 *     sub_14001CDE4 @ 0x14001CDE4 (sub_14001CDE4.c)
 *     sub_14001DE2C @ 0x14001DE2C (sub_14001DE2C.c)
 *     sub_14004BD94 @ 0x14004BD94 (sub_14004BD94.c)
 *     sub_14005C4AC @ 0x14005C4AC (sub_14005C4AC.c)
 *     sub_14006C8A4 @ 0x14006C8A4 (sub_14006C8A4.c)
 * Callees:
 *     sub_14004BE6C @ 0x14004BE6C (sub_14004BE6C.c)
 */

DWORD __fastcall sub_14001CE18(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_14004BE6C(a1, a2, a3, 0, 0LL, a6, -2147024228);
    return 668;
  }
  return result;
}
