/*
 * XREFs of sub_18001CE78 @ 0x18001CE78
 * Callers:
 *     sub_18001E068 @ 0x18001E068 (sub_18001E068.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 */

void **sub_18001CE78(void **Src, unsigned __int64 a2, __int64 a3, ...)
{
  char *v3; // r14
  unsigned __int64 v5; // r15
  char *v6; // rbx
  __int64 v7; // rcx
  char *v8; // rsi
  size_t v9; // r8
  const void *v10; // rdx
  char *v11; // rbp
  void *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  void *Srca; // [rsp+60h] [rbp+28h]
  size_t Size; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  Srca = va_arg(va1, void *);
  Size = va_arg(va1, _QWORD);
  v3 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v3 < a2 )
    sub_180012A10();
  v5 = (unsigned __int64)Src[3];
  v6 = &v3[a2];
  v15 = sub_18001275C((__int64)&v3[a2], v5, 0x7FFFFFFFFFFFFFFFuLL);
  v8 = (char *)sub_1800117C4(v7, (unsigned __int64 *)va);
  v9 = Size;
  v10 = Srca;
  Src[3] = (void *)v15;
  Src[2] = v6;
  v11 = &v8[v9];
  if ( v5 <= 0xF )
  {
    memcpy(v8, v10, v9);
    memcpy(v11, Src, (size_t)(v3 + 1));
  }
  else
  {
    v12 = *Src;
    memcpy(v8, v10, v9);
    memcpy(v11, v12, (size_t)(v3 + 1));
    sub_180012848(v13, v12, v5);
  }
  *Src = v8;
  return Src;
}
