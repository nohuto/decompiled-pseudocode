/*
 * XREFs of sub_180017894 @ 0x180017894
 * Callers:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void __fastcall sub_180017894(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  void *v7; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A10();
  if ( a3 > 0xF )
  {
    v6 = sub_18001275C(a3, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v7 = (void *)sub_180011790(v6 + 1);
    *a1 = v7;
    a1[2] = a3;
    a1[3] = v6;
    memcpy(v7, a2, a3 + 1);
  }
  else
  {
    a1[2] = a3;
    a1[3] = 15LL;
    *(_OWORD *)a1 = *a2;
  }
}
