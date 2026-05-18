/*
 * XREFs of sub_180018724 @ 0x180018724
 * Callers:
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180018724(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  return result;
}
