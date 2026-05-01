/*
 * XREFs of ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800C6E04
 * Callers:
 *     ?KGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1802B43AC (-KGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C7330 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C73F8 (-IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1800C8390 (-BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ.c)
 *     ?IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z @ 0x1800C83E8 (-IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___ @ 0x18030EA80 (Windows--Internal--ComTaskPool--QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180310FD0 (-BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x18031118C (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?GetDifferenceInMinutes@BroadcastDVRComponent@@AEAAJPEBU_SYSTEMTIME@@PEBU_FILETIME@@PEA_K@Z @ 0x18031251C (-GetDifferenceInMinutes@BroadcastDVRComponent@@AEAAJPEBU_SYSTEMTIME@@PEBU_FILETIME@@PEA_K@Z.c)
 *     ?SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z @ 0x180314388 (-SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::QueueNotifyGameBarForKGLUpdateIfNecessary(
        BroadcastDVRComponent *this,
        unsigned int *a2,
        unsigned int *pvData)
{
  LSTATUS ValueW; // eax
  bool v7; // sf
  LSTATUS v8; // eax
  BroadcastDVRComponent *v9; // rcx
  bool v10; // sf
  __int64 v12; // rdx
  unsigned int v13; // ebx
  HKEY v14; // rcx
  BroadcastDVRComponent *v15; // rcx
  int DifferenceInMinutes; // eax
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DWORD pcbData[2]; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-28h]
  struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( a2 )
  {
    if ( pvData )
    {
      *a2 = 0;
      *pvData = 0;
      pcbData[0] = 4;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\KGL\\OneSettings",
                 L"ActivateOnUpdate",
                 0x10u,
                 0LL,
                 pvData,
                 pcbData);
      v7 = ValueW < 0;
      if ( ValueW > 0 )
        v7 = 1;
      if ( v7 || !*pvData || !BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(this) )
        return 0LL;
      v22 = 1;
      pcbData[0] = 4;
      v8 = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
             L"AllowKGLUpdates",
             0x10u,
             0LL,
             &v22,
             pcbData);
      v10 = v8 < 0;
      if ( v8 > 0 )
        v10 = 1;
      if ( !v10 && v22 )
        return 0LL;
      if ( *pvData != -1 )
      {
        SystemTime = 0LL;
        GetSystemTime(&SystemTime);
        *(_QWORD *)pcbData = 0LL;
        if ( (int)SHRegGetFILETIME(
                    v14,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
                    L"LastGameActivity",
                    (struct _FILETIME *)pcbData) < 0 )
          return 0LL;
        v23 = 0LL;
        DifferenceInMinutes = BroadcastDVRComponent::GetDifferenceInMinutes(
                                v15,
                                &SystemTime,
                                (const struct _FILETIME *)pcbData,
                                &v23);
        if ( DifferenceInMinutes < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4E3,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(unsigned int)DifferenceInMinutes);
          return 0LL;
        }
        v17 = *pvData;
        v9 = (BroadcastDVRComponent *)v23;
        if ( v23 > v17 )
        {
          GameDVRTraceProvider::BroadcastDVRComponent_NoRecentGameActivity(v23, v17);
          return 0LL;
        }
      }
      if ( BroadcastDVRComponent::IsNewKGLVersionAvailable(v9, a2) && BroadcastDVRComponent::IsGameDVREnabled(this) )
      {
        GameDVRTraceProvider::BroadcastDVRComponent_ActivateForKGLUpdate_Queueing();
        v23 = (unsigned __int64)this;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
        v18 = *a2;
        v23 = (unsigned __int64)this;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
        v24 = v18;
        v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___(
                v20,
                v19,
                *((unsigned int *)this + 60),
                &v23);
        if ( v23 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( this )
          (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
        return v13;
      }
      GameDVRTraceProvider::BroadcastDVRComponent_OlderOneSettingsKGL();
      return 0LL;
    }
    v12 = 1202LL;
  }
  else
  {
    v12 = 1201LL;
  }
  v13 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)0x80004003LL);
  return v13;
}
