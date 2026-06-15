/*
 * XREFs of sub_1400B271B @ 0x1400B271B
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B271B(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 120),
                           583,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp");
  return 0LL;
}
