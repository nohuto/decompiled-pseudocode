/*
 * XREFs of sub_180025E50 @ 0x180025E50
 * Callers:
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 *     sub_1800D8ECF @ 0x1800D8ECF (sub_1800D8ECF.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 */

__int64 __fastcall sub_180025E50(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_180024D50(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16) << 6);
  }
  return result;
}
