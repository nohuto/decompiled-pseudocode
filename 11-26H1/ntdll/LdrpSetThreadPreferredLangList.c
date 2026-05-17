/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x180008130
 * Callers:
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

bool LdrpSetThreadPreferredLangList()
{
  __int64 v0; // rax
  int v1; // eax
  int RegistryInfo; // ebx
  struct _TEB *v3; // rdx
  int WowTebOffset; // eax
  struct _TEB *v5; // r8
  __int64 v6; // rax
  struct _TEB *v7; // rcx
  __int64 v8; // rax
  unsigned int MuiImpersonation; // eax
  _DWORD *MergedPrefLanguages; // rcx
  int ThreadPreferredUILanguages; // eax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    v0 = g_RegInfo;
    if ( !g_RegInfo )
    {
      v13 = -1000000LL;
      while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
      {
        v1 = InitRegistryInfoCritSect;
        if ( InitRegistryInfoCritSect == 1 )
        {
          ZwDelayExecution(0LL, &v13);
          v1 = InitRegistryInfoCritSect;
        }
        if ( v1 == 2 )
          goto LABEL_9;
      }
      RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
      InitRegistryInfoCritSect = 2;
LABEL_9:
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      RegistryInfo = 0;
      if ( !g_RegInfo )
        RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      if ( RegistryInfo < 0 )
        return 0;
      v0 = g_RegInfo;
      if ( !g_RegInfo )
        return 0;
    }
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v0 + 16) )
    {
      v3 = NtCurrentTeb();
      WowTebOffset = v3->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v3) = WowTebOffset + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = NtCurrentTeb();
      v8 = v7->WowTebOffset;
      if ( (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib) )
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = HIDWORD(v7->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = v7->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
    }
    else
    {
      MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
      MergedPrefLanguages[10] |= 0x80u;
    }
  }
  LODWORD(v13) = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, &v14, 0LL, &v13);
  return ((int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789)
      && NtCurrentTeb()->MergedPrefLanguages;
}
