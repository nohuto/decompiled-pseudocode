/*
 * XREFs of sub_18001E4B0 @ 0x18001E4B0
 * Callers:
 *     sub_18001E934 @ 0x18001E934 (sub_18001E934.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void **__fastcall sub_18001E4B0(void **Src, unsigned __int64 a2, __int64 a3, char a4)
{
  size_t v4; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A10();
  v7 = (unsigned __int64)Src[3];
  v13 = sub_18001275C(v4 + 1, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v9 = (void *)sub_1800117C4(v8, &v13);
  Src[3] = (void *)v13;
  Src[2] = (void *)(v4 + 1);
  if ( v7 <= 0xF )
  {
    memcpy(v9, Src, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
  }
  else
  {
    v10 = *Src;
    memcpy(v9, *Src, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
    sub_180012848(v11, v10, v7);
  }
  *Src = v9;
  return Src;
}
