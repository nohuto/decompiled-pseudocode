/*
 * XREFs of sub_140020994 @ 0x140020994
 * Callers:
 *     sub_140020858 @ 0x140020858 (sub_140020858.c)
 *     sub_140046CB0 @ 0x140046CB0 (sub_140046CB0.c)
 *     sub_14005400C @ 0x14005400C (sub_14005400C.c)
 *     sub_1400541D0 @ 0x1400541D0 (sub_1400541D0.c)
 *     sub_14005DA3C @ 0x14005DA3C (sub_14005DA3C.c)
 *     sub_14005EE7C @ 0x14005EE7C (sub_14005EE7C.c)
 * Callees:
 *     sub_140020A6C @ 0x140020A6C (sub_140020A6C.c)
 */

char __fastcall sub_140020994(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = a2;
  v4 = a3[2];
  if ( a3[3] > 7uLL )
    a3 = (_QWORD *)*a3;
  v5 = a2[2];
  if ( v3[3] > 7uLL )
    v3 = (_QWORD *)*v3;
  return sub_140020A6C(v3, v5, a3, v4) ^ 1;
}
