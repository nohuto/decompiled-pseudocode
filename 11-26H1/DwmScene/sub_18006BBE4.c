/*
 * XREFs of sub_18006BBE4 @ 0x18006BBE4
 * Callers:
 *     sub_18006B814 @ 0x18006B814 (sub_18006B814.c)
 *     sub_1800DCA30 @ 0x1800DCA30 (sub_1800DCA30.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 */

__int64 __fastcall sub_18006BBE4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18006B7DC(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16) << 7);
  }
  return result;
}
