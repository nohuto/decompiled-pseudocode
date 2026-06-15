/*
 * XREFs of sub_140052748 @ 0x140052748
 * Callers:
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 *     sub_140021EE0 @ 0x140021EE0 (sub_140021EE0.c)
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 *     sub_140035DA0 @ 0x140035DA0 (sub_140035DA0.c)
 *     sub_140079E40 @ 0x140079E40 (sub_140079E40.c)
 *     sub_14007F4A0 @ 0x14007F4A0 (sub_14007F4A0.c)
 *     sub_14007F5A0 @ 0x14007F5A0 (sub_14007F5A0.c)
 *     sub_14007F7C0 @ 0x14007F7C0 (sub_14007F7C0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140052748(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
