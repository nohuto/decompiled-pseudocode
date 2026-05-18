/*
 * XREFs of sub_180057344 @ 0x180057344
 * Callers:
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 */

__int64 __fastcall sub_180057344(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_180056234(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 48LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
