/*
 * XREFs of sub_1800274C4 @ 0x1800274C4
 * Callers:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800274C4(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  if ( a1[1] == *a1 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v1;
}
