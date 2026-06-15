/*
 * XREFs of _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x180037B94
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::Run @ 0x1800AFB40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___--Run.c)
 * Callees:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180037E78 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x1800812C0 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800815F4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180156860 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rcx
  bool *v3; // rdx
  AtmosCheck *v4; // rax
  const WCHAR *v5; // r8
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1);
  v2 = *(AtmosCheck **)a1;
  v3 = *(bool **)(a1 + 24);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckForAllEndpoints(v2, v3);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 99LL) && AtmosCheck::CheckInstalledAppServicesAvailable(*(AtmosCheck **)a1) )
      *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
  }
  else
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckInternalLegacy(v2, v3);
    if ( **(int **)(a1 + 16) >= 0 )
    {
      v4 = *(AtmosCheck **)a1;
      v5 = L"AudioSrvLicenseResult";
      pcbData = 4;
      if ( !*((_BYTE *)v4 + 100) )
        v5 = L"AudioDGLicenseResult";
      pvData = 0;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v5,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        **(_DWORD **)(a1 + 8) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = pvData;
      }
      v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 56LL);
      EnterCriticalSection(v6);
      v7 = *(_DWORD *)(*(_QWORD *)a1 + 184LL);
      if ( (v7 == 8 || v7 == 5) && !*(_BYTE *)(*(_QWORD *)a1 + 99LL) )
      {
        *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
        **(_BYTE **)(a1 + 24) = 1;
      }
      if ( v6 )
        LeaveCriticalSection(v6);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) || **(_BYTE **)(a1 + 24) )
    AtmosCheck::UpdateLicenseRefreshTimer(*(PVOID *)a1);
}
