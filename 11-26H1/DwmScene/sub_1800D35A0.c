/*
 * XREFs of sub_1800D35A0 @ 0x1800D35A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800D3DAC @ 0x1800D3DAC (sub_1800D3DAC.c)
 */

int __fastcall sub_1800D35A0(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  sub_180012AC4(a1 + 160);
  sub_1800D3DAC(a1 + 240, &v5);
  return Mtx_unlock(v2);
}
