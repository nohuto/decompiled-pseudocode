/*
 * XREFs of sub_18004B71C @ 0x18004B71C
 * Callers:
 *     sub_180049B60 @ 0x180049B60 (sub_180049B60.c)
 *     sub_18004A150 @ 0x18004A150 (sub_18004A150.c)
 *     sub_18004A2B8 @ 0x18004A2B8 (sub_18004A2B8.c)
 *     sub_18004A3AC @ 0x18004A3AC (sub_18004A3AC.c)
 *     sub_18004A47C @ 0x18004A47C (sub_18004A47C.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004B71C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 88 * a2;
}
