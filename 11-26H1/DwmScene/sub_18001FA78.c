/*
 * XREFs of sub_18001FA78 @ 0x18001FA78
 * Callers:
 *     sub_1800B95E8 @ 0x1800B95E8 (sub_1800B95E8.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001DD44 @ 0x18001DD44 (sub_18001DD44.c)
 *     sub_18001ED64 @ 0x18001ED64 (sub_18001ED64.c)
 */

void **__fastcall sub_18001FA78(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  wchar_t *v7; // rax
  __int64 v8; // r8
  wchar_t *v9; // r14
  __int64 v10; // rdi

  sub_18001DD44((__int64)Src, 0LL);
  v6 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v6 )
    return sub_18001ED64(Src, a4, v6);
  Src[2] = (void *)(v6 + a4);
  v7 = (wchar_t *)sub_1800141BC((__int64)Src);
  v9 = v7;
  if ( &aFl[a4] <= v7 || L"FL_" > &v7[v8] )
  {
    v10 = a4;
  }
  else if ( v7 > L"FL_" )
  {
    v10 = v7 - L"FL_";
  }
  else
  {
    v10 = 0LL;
  }
  memmove(&v7[a4], v7, 2 * v8 + 2);
  memcpy(v9, L"FL_", 2 * v10);
  memcpy(&v9[v10], &aFl[v10 + a4], 2 * (a4 - v10));
  return Src;
}
