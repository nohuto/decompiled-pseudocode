/*
 * XREFs of LdrpFindMessageInAlternateModule @ 0x1800320E0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpFindMessageInAlternateModule(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int *v9; // rax
  int v10; // ecx
  _DWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a5 )
  {
    v8 = *a2;
    v9 = a2 + 1;
    if ( 12 * v8 + 4 <= a3 )
    {
LABEL_6:
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
    else
    {
      return 3221225595LL;
    }
  }
  else
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, (unsigned __int64 *)&v11, 0LL);
    if ( (int)result >= 0 )
    {
      LODWORD(v8) = *v11;
      v9 = v11 + 1;
      goto LABEL_6;
    }
  }
  return result;
}
