/*
 * XREFs of sub_18008F54C @ 0x18008F54C
 * Callers:
 *     sub_18006BA78 @ 0x18006BA78 (sub_18006BA78.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

__int64 __fastcall sub_18008F54C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rdi
  __int64 v3; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180012AC4(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  Mtx_unlock(v1);
  return v3;
}
