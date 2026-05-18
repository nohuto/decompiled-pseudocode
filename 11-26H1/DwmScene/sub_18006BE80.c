/*
 * XREFs of sub_18006BE80 @ 0x18006BE80
 * Callers:
 *     sub_180026DB0 @ 0x180026DB0 (sub_180026DB0.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18006C0C0 @ 0x18006C0C0 (sub_18006C0C0.c)
 *     sub_18006C104 @ 0x18006C104 (sub_18006C104.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18006BE80(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180012AC4(a1 + 24);
  sub_180012AC4(a1 + 104);
  sub_18006C104(a1);
  sub_18006C0C0(a1 + 184);
  sub_18006C0C0(a1 + 200);
  Mtx_unlock((_Mtx_t)(a1 + 104));
  return Mtx_unlock(v2);
}
