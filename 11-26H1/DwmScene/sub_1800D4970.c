/*
 * XREFs of sub_1800D4970 @ 0x1800D4970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 */

int __fastcall sub_1800D4970(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = (_QWORD *)(a1 + 96);
  sub_180012AC4(a1 + 8);
  v3 = (_QWORD *)*v2;
  sub_18001CBA0((__int64)v2, (__int64)v2, *(__int64 **)(*v2 + 8LL));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v2[1] = 0LL;
  return Mtx_unlock(v1);
}
