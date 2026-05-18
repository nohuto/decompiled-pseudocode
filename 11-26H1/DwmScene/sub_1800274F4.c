/*
 * XREFs of sub_1800274F4 @ 0x1800274F4
 * Callers:
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800274F4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( (a1[1] - *a1) >> 4 <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
