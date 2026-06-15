/*
 * XREFs of _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x180155450
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::Run @ 0x180157860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___--Run.c)
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180064CB0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180068A54 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800788EC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x1800923C8 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x1800AE230 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1801570E8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180157430 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180157574 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ready; // eax
  int v6; // eax
  HANDLE v7; // rax
  signed int LastError; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  AtmosCheck *v12; // rax
  AtmosCheck *v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed int v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+48h] [rbp+10h] BYREF

  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1, a2, a3, a4);
  AtmosCheck::RefreshSpatialAudioLicenseModelState(*(AtmosCheck **)a1, 0LL);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(*(AtmosCheck **)a1);
    if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
    {
      ready = AtmosCheck::RegisterForShellReadyNotifications(*(AtmosCheck **)a1);
      if ( ready < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          512LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ready);
      v6 = AtmosCheck::RegisterForUserWatcherNotifications(*(AtmosCheck **)a1);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          516LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a1 + 216LL) = 1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 104LL) )
      {
        v7 = OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
        v17 = v7;
        if ( !v7 || WaitForSingleObject(v7, 0) )
        {
          if ( !RegisterWaitForSingleObject(
                  (PHANDLE)(*(_QWORD *)a1 + 112LL),
                  *(HANDLE *)(*(_QWORD *)a1 + 104LL),
                  AtmosCheck::StaticClientAtmosCheckEventFired,
                  *(PVOID *)a1,
                  0xFFFFFFFF,
                  0x18u) )
          {
            if ( (unsigned int)CallbackContext > 2 )
            {
              LastError = GetLastError();
              if ( LastError > 0 )
                LastError = (unsigned __int16)LastError | 0x80070000;
              v16 = LastError;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                v9,
                byte_1801AED2B,
                v10,
                v11,
                (__int64)&v16);
            }
            *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
          }
        }
        else
        {
          *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
          AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)a1, 1);
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
      }
    }
  }
  *(_BYTE *)(*(_QWORD *)a1 + 97LL) = 1;
  v12 = *(AtmosCheck **)a1;
  *(_BYTE *)(*(_QWORD *)a1 + 96LL) = 1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
  {
    LOBYTE(v12) = AtmosCheck::IsRunningOnXbox(*(AtmosCheck **)a1);
    if ( !(_BYTE)v12 )
      LOBYTE(v12) = AtmosCheck::PerformLicenseCheck(v13, 1);
  }
  return (char)v12;
}
