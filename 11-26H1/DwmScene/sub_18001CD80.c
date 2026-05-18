/*
 * XREFs of sub_18001CD80 @ 0x18001CD80
 * Callers:
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void **__fastcall sub_18001CD80(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // rsi
  unsigned __int64 v8; // r13
  size_t v9; // rbx
  __int64 v10; // rcx
  char *v11; // r14
  size_t v12; // rbp
  char *v13; // r15
  void *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    sub_180012A10();
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v17 = sub_18001275C(v5 + a2, v8, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (char *)sub_1800117C4(v10, &v17);
  v12 = Size;
  Src[3] = (void *)v17;
  Src[2] = (void *)v9;
  v13 = &v11[v5];
  if ( v8 <= 0xF )
  {
    memcpy(v11, Src, v5);
    memcpy(v13, a4, v12);
    v13[v12] = 0;
  }
  else
  {
    v14 = *Src;
    memcpy(v11, *Src, v5);
    memcpy(v13, a4, v12);
    v13[v12] = 0;
    sub_180012848(v15, v14, v8);
  }
  *Src = v11;
  return Src;
}
