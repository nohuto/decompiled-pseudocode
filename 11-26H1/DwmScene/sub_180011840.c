/*
 * XREFs of sub_180011840 @ 0x180011840
 * Callers:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001E974 @ 0x18001E974 (sub_18001E974.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void *__fastcall sub_180011840(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A10();
  if ( a3 > 0xF )
  {
    v7 = sub_18001275C(a3);
    v8 = (_BYTE *)sub_180011790(v7 + 1);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v7;
    v9 = v8;
    result = memcpy(v8, a2, a3);
    v9[a3] = 0;
  }
  else
  {
    a1[3] = 15LL;
    a1[2] = a3;
    result = memcpy(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
