/*
 * XREFs of sub_18003A8A0 @ 0x18003A8A0
 * Callers:
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 *     sub_1800DA56A @ 0x1800DA56A (sub_1800DA56A.c)
 * Callees:
 *     sub_18002E318 @ 0x18002E318 (sub_18002E318.c)
 */

__int64 __fastcall sub_18003A8A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18002E318(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}
