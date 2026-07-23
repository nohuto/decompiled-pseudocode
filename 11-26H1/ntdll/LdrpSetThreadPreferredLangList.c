/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x180053860
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

bool LdrpSetThreadPreferredLangList()
{
  _DWORD *v0; // rax
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
  NTSTATUS ThreadPreferredUILanguages; // eax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF

  NumberOfLanguages = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    v0 = g_RegInfo;
    if ( !g_RegInfo )
    {
      DelayInterval.QuadPart = -1000000LL;
      while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
      {
        v1 = InitRegistryInfoCritSect;
        if ( InitRegistryInfoCritSect == 1 )
        {
          ZwDelayExecution(0, &DelayInterval);
          v1 = InitRegistryInfoCritSect;
        }
        if ( v1 == 2 )
          goto LABEL_9;
      }
      RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
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
      && NtCurrentTeb()->MuiGeneration == v0[4] )
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
  DelayInterval.LowPart = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, (PULONG)&DelayInterval);
  return ((int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789)
      && NtCurrentTeb()->MergedPrefLanguages;
}
