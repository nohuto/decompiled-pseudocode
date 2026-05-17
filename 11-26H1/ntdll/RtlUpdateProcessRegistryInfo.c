/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x1800DDB14
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143D50 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DDBD0 (RtlpMuiFreeLangRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = g_RegInfo;
        if ( g_RegInfo )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(g_RegInfo + 72);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
