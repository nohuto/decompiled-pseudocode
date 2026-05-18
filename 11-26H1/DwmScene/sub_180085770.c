/*
 * XREFs of sub_180085770 @ 0x180085770
 * Callers:
 *     sub_180085530 @ 0x180085530 (sub_180085530.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180085770(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 2LL * *(_QWORD *)(a1 + 16));
  return result;
}
