/*
 * XREFs of sub_18001E17C @ 0x18001E17C
 * Callers:
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 *     sub_1800B8B44 @ 0x1800B8B44 (sub_1800B8B44.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 *     sub_180014014 @ 0x180014014 (sub_180014014.c)
 */

__int64 __fastcall sub_18001E17C(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char *v10; // rax
  char *v11; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    sub_180012A10();
  v6 = 2 * a3;
  if ( a3 > 7 )
  {
    v8 = sub_180014014(a3, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    v9 = sub_18001323C(v8 + 1);
    v10 = (char *)sub_180011790(v9);
    *a1 = v10;
    a1[2] = (char *)a3;
    a1[3] = (char *)v8;
    v11 = v10;
    memcpy(v10, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)&v11[v6] = 0;
  }
  else
  {
    a1[3] = (char *)7;
    a1[2] = (char *)a3;
    memcpy(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return result;
}
