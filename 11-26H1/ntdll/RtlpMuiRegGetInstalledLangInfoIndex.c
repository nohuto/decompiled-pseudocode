/*
 * XREFs of RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800DECF8
 * Callers:
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18014EA6C (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18014ECA0 (_RtlpMuiRegValidatePartialLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetInstalledLangInfoIndex(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  int v6; // ebx
  __int16 j; // cx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int16 i; // dx
  __int64 v11; // rdi
  __int64 v12; // rbx

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 1 )
  {
    if ( a3 )
    {
      for ( i = 0; i < (int)*(unsigned __int16 *)(a1 + 6); ++i )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v12 = 28LL * i;
        if ( *(unsigned __int16 *)(v12 + v11 + 4) == a3 && (*(_WORD *)(v12 + v11) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = i;
          return 0LL;
        }
      }
      return 3221225473LL;
    }
    return 3221225485LL;
  }
  if ( a2 == 3 )
  {
    if ( a3 >= 0 )
    {
      v6 = *(unsigned __int16 *)(a1 + 6);
      for ( j = 0; j < v6; ++j )
      {
        v8 = *(_QWORD *)(a1 + 16);
        v9 = 28LL * j;
        if ( *(_WORD *)(v9 + v8 + 6) == a3 && (*(_WORD *)(v9 + v8) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = j;
          return 0LL;
        }
      }
      return 3221225473LL;
    }
    return 3221225485LL;
  }
  if ( a2 != 2 )
    return 3221225473LL;
  if ( a3 < 0 || a3 >= (unsigned int)*(unsigned __int16 *)(a1 + 6) )
    return 3221225485LL;
  if ( (*(_WORD *)(28LL * a3 + *(_QWORD *)(a1 + 16)) & 0x1020) != 0x20 )
    return 3221225473LL;
  if ( a4 )
    *a4 = a3;
  return 0LL;
}
