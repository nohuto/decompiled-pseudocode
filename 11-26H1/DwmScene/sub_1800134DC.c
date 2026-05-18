/*
 * XREFs of sub_1800134DC @ 0x1800134DC
 * Callers:
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_1800134DC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_1800130CC(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
