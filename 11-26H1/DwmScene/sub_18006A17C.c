/*
 * XREFs of sub_18006A17C @ 0x18006A17C
 * Callers:
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006A17C(__int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
