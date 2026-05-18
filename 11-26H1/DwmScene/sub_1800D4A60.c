/*
 * XREFs of sub_1800D4A60 @ 0x1800D4A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

char __fastcall sub_1800D4A60(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rdi
  __int64 v2; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = a1;
  sub_180012AC4(a1 + 8);
  LOBYTE(v2) = *(_BYTE *)(v2 + 112);
  Mtx_unlock(v1);
  return v2;
}
