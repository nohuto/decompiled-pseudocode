/*
 * XREFs of LdrpFindMessageInAlternateModule @ 0x1403DDC10
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpFindMessageInAlternateModule(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int *v9; // rdx
  int v10; // eax
  unsigned int *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !a5 )
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    a2 = v11;
  }
  v8 = *a2;
  v9 = a2 + 1;
  if ( a5 && 12 * v8 + 4 > a3 )
    return 3221225595LL;
  while ( 1 )
  {
    v10 = v8;
    LODWORD(v8) = v8 - 1;
    if ( !v10 )
      break;
    if ( a4 >= *v9 && a4 <= v9[1] )
      return 0LL;
    v9 += 3;
  }
  return 3221225737LL;
}
