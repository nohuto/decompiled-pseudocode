/*
 * XREFs of sub_18005CC20 @ 0x18005CC20
 * Callers:
 *     sub_18005BFE4 @ 0x18005BFE4 (sub_18005BFE4.c)
 *     sub_1800DC09C @ 0x1800DC09C (sub_1800DC09C.c)
 * Callees:
 *     sub_18004C250 @ 0x18004C250 (sub_18004C250.c)
 */

__int64 __fastcall sub_18005CC20(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18004C250(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}
