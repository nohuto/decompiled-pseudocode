/*
 * XREFs of RtlpCheckMuiMultiStringSafe @ 0x180053F48
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCheckMuiMultiStringSafe(_WORD *a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // rax
  _WORD *v5; // rdx
  bool v6; // zf
  __int64 v8; // [rsp+30h] [rbp+8h]

  v8 = 0LL;
  v3 = 0;
  if ( a1 && !*a1 )
    ++a1;
  while ( a1 && *a1 )
  {
    v4 = a2 + 1;
    if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFF )
    {
      v3 = -1073741811;
    }
    else
    {
      v5 = a1;
      v3 = 0;
      while ( 1 )
      {
        v6 = v4 == 0;
        if ( !v4 )
          break;
        if ( !*v5 )
        {
          v6 = v4 == 0;
          break;
        }
        ++v5;
        --v4;
      }
      if ( v6 )
        v3 = -1073741811;
      v8 = v3 < 0 ? 0LL : a2 + 1 - v4;
    }
    if ( v3 < 0 )
      break;
    a1 += v8 + 1;
  }
  return (unsigned int)v3;
}
