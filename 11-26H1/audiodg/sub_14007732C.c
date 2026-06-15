/*
 * XREFs of sub_14007732C @ 0x14007732C
 * Callers:
 *     sub_14001B3C8 @ 0x14001B3C8 (sub_14001B3C8.c)
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007732C(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_OWORD *)(a1 + 8) = *a3;
  return result;
}
