/*
 * XREFs of sub_18000E4B4 @ 0x18000E4B4
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E4B4(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = GetLastError();
  result = a1;
  *(_BYTE *)a1 = 0;
  return result;
}
