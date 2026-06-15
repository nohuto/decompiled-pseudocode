/*
 * XREFs of sub_140052F18 @ 0x140052F18
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_14005400C @ 0x14005400C (sub_14005400C.c)
 *     sub_1400541D0 @ 0x1400541D0 (sub_1400541D0.c)
 *     sub_14005452C @ 0x14005452C (sub_14005452C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140052F18(_QWORD *a1)
{
  __int64 v1; // r8

  v1 = a1[2];
  if ( a1[3] > 7uLL )
    a1 = (_QWORD *)*a1;
  return sub_140026BBC((__int64)a1, (__int64)a1, 2 * v1);
}
