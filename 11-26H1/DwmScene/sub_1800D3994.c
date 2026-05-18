/*
 * XREFs of sub_1800D3994 @ 0x1800D3994
 * Callers:
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D3994(__int64 a1)
{
  __int64 result; // rax

  result = 0x1745D1745D1745DLL;
  if ( *(_QWORD *)(a1 + 16) == 0x1745D1745D1745DLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
