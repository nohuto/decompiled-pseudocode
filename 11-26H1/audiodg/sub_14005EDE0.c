/*
 * XREFs of sub_14005EDE0 @ 0x14005EDE0
 * Callers:
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005EDE0(__int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
