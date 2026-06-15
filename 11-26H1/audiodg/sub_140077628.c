/*
 * XREFs of sub_140077628 @ 0x140077628
 * Callers:
 *     sub_14007766C @ 0x14007766C (sub_14007766C.c)
 * Callees:
 *     sub_1400775EC @ 0x1400775EC (sub_1400775EC.c)
 */

__int64 sub_140077628()
{
  __int64 v0; // rcx
  __int64 result; // rax

  sub_1400775EC();
  result = v0;
  *(_QWORD *)(v0 + 24) = 1LL;
  return result;
}
