/*
 * XREFs of sub_140007510 @ 0x140007510
 * Callers:
 *     sub_1400AE15F @ 0x1400AE15F (sub_1400AE15F.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 */

__int64 __fastcall sub_140007510(__int64 a1)
{
  __int64 result; // rax

  result = sub_140003238((__int64 *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 8) )
    return sub_140007588();
  return result;
}
