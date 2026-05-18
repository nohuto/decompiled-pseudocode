/*
 * XREFs of sub_18001EF20 @ 0x18001EF20
 * Callers:
 *     sub_18001FB68 @ 0x18001FB68 (sub_18001FB68.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void **__fastcall sub_18001EF20(void **Src, unsigned __int64 a2, __int64 a3, size_t a4)
{
  size_t v4; // rsi
  unsigned __int64 v7; // r12
  size_t v8; // rbx
  __int64 v9; // rcx
  char *v10; // r14
  char *v11; // r15
  void *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    sub_180012A10();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v15 = sub_18001275C(v4 + a2, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v10 = (char *)sub_1800117C4(v9, &v15);
  Src[3] = (void *)v15;
  Src[2] = (void *)v8;
  v11 = &v10[v4];
  if ( v7 <= 0xF )
  {
    memcpy(v10, Src, v4);
    memset(v11, 0, a4);
    v11[a4] = 0;
  }
  else
  {
    v12 = *Src;
    memcpy(v10, *Src, v4);
    memset(v11, 0, a4);
    v11[a4] = 0;
    sub_180012848(v13, v12, v7);
  }
  *Src = v10;
  return Src;
}
