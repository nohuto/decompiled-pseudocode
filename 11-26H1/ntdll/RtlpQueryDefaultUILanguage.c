/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180055400
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     GetLCIDFromLangListNode @ 0x1800555D0 (GetLCIDFromLangListNode.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180055E80 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  __int64 v4; // rsi
  __int64 LanguageList; // rdi
  int v6; // eax
  int v7; // edx
  int PreferredUILanguages; // eax
  __int64 v9; // rdx
  bool v10; // sf
  NTSTATUS LCIDFromLangListNode; // ebp
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  LanguageList = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v13);
    v4 = v13;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, v13) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
      {
        LanguageList = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        v14 = LanguageList;
        if ( LanguageList )
        {
          if ( *(_WORD *)(LanguageList + 4) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v4, *(_QWORD *)(LanguageList + 24), DefaultUILanguageId);
            if ( LCIDFromLangListNode >= 0 )
            {
              LanguageList = 0LL;
              goto LABEL_25;
            }
          }
          LanguageList = 0LL;
          v14 = 0LL;
        }
      }
      LOBYTE(v13) = 0;
      if ( v4 )
      {
        if ( a2 )
        {
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                   v4,
                                   v7,
                                   0,
                                   3 - (unsigned int)(a2 != 0),
                                   (__int64)&v13,
                                   (__int64)&v14);
          LanguageList = v14;
          if ( v14 )
          {
            v10 = PreferredUILanguages < 0;
            if ( !PreferredUILanguages )
            {
LABEL_21:
              if ( !v10 )
              {
                if ( LanguageList )
                {
                  if ( *(_WORD *)(LanguageList + 4) )
                  {
                    LCIDFromLangListNode = GetLCIDFromLangListNode(
                                             v4,
                                             *(_QWORD *)(LanguageList + 24),
                                             DefaultUILanguageId);
                    if ( LCIDFromLangListNode >= 0 )
                      goto LABEL_25;
                  }
                }
              }
              goto LABEL_28;
            }
            if ( PreferredUILanguages != -1073741801 && (_BYTE)v13 )
              PreferredUILanguages = 0;
          }
          else
          {
            LOBYTE(v9) = 1;
            LanguageList = RtlpMuiRegCreateLanguageList(1LL, v9, v4);
            PreferredUILanguages = 0;
            if ( !LanguageList )
              PreferredUILanguages = -1073741801;
          }
LABEL_20:
          v10 = PreferredUILanguages < 0;
          goto LABEL_21;
        }
        PreferredUILanguages = RtlpSetProcUserMachineLangList(v4, 0);
        if ( PreferredUILanguages >= 0 )
        {
          LanguageList = *(_QWORD *)(v4 + 56);
          goto LABEL_20;
        }
      }
    }
  }
LABEL_28:
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, (PLCID)v4);
  if ( LCIDFromLangListNode < 0 )
    *DefaultUILanguageId = 0;
LABEL_25:
  if ( LanguageList )
    RtlpMuiRegFreeLanguageList((PVOID)LanguageList);
  return (unsigned int)LCIDFromLangListNode;
}
