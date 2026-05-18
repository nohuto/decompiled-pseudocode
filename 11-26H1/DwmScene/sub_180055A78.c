/*
 * XREFs of sub_180055A78 @ 0x180055A78
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

int __fastcall sub_180055A78(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180012AC4(a1 + 128);
  *(_DWORD *)(a1 + 32) = 0;
  return Mtx_unlock(v1);
}
