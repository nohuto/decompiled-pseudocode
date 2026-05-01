/*
 * XREFs of ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800C62AC
 * Callers:
 *     ?StaticRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x1802C15B0 (-StaticRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C6750 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C68EC (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ada185189abb389ce449ddc8fe061d95___ @ 0x1800C6A88 (Windows--Internal--ComTaskPool--QueueTask__lambda_ada185189abb389ce449ddc8fe061d95___.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800C6B18 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::RegistryChangeNotificationCallback(BroadcastDVRComponent *this)
{
  char v2; // si
  char v3; // bl
  int ValueW; // eax
  LSTATUS v5; // eax
  bool v6; // sf
  LSTATUS v7; // eax
  bool v8; // sf
  LSTATUS v9; // eax
  bool v10; // sf
  LSTATUS v11; // eax
  bool v12; // sf
  LSTATUS v13; // eax
  bool v14; // sf
  LSTATUS v15; // eax
  bool v16; // sf
  LSTATUS v17; // eax
  bool v18; // sf
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  char v24; // al
  char v25[8]; // [rsp+40h] [rbp-10h] BYREF
  BroadcastDVRComponent *v26; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int pvData; // [rsp+90h] [rbp+40h] BYREF
  DWORD pcbData; // [rsp+98h] [rbp+48h] BYREF

  pvData = 0;
  if ( this )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 8LL))(this);
  v2 = 0;
  v3 = 0;
  GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnEntry(
    *((_BYTE *)this + 445),
    *((_BYTE *)this + 433),
    *((_BYTE *)this + 434),
    *((_BYTE *)this + 435));
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
             L"AppCaptureEnabled",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW >= 0 )
  {
    if ( !*((_BYTE *)this + 445) )
    {
      if ( !pvData )
        goto LABEL_43;
      v2 = 1;
    }
    v24 = 1;
    if ( pvData )
    {
LABEL_44:
      *((_BYTE *)this + 445) = v24;
      goto LABEL_6;
    }
LABEL_43:
    v24 = 0;
    goto LABEL_44;
  }
LABEL_6:
  pcbData = 4;
  v5 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
         L"HistoricalCaptureEnabled",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v6 = v5 < 0;
  if ( v5 > 0 )
    v6 = 1;
  if ( !v6 )
  {
    if ( !*((_BYTE *)this + 433) )
    {
      if ( !pvData )
        goto LABEL_40;
      v3 = 1;
    }
    if ( pvData )
    {
      *((_BYTE *)this + 433) = 1;
      if ( v2 )
        v3 = 1;
      goto LABEL_9;
    }
LABEL_40:
    *((_BYTE *)this + 433) = 0;
  }
LABEL_9:
  pcbData = 4;
  v7 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
         L"HistoricalCaptureOnBatteryAllowed",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v8 = v7 < 0;
  if ( v7 > 0 )
    v8 = 1;
  if ( !v8 )
    *((_BYTE *)this + 434) = pvData != 0;
  pcbData = 4;
  v9 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
         L"HistoricalCaptureOnWirelessDisplayAllowed",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v10 = v9 < 0;
  if ( v9 > 0 )
    v10 = 1;
  if ( !v10 )
    *((_BYTE *)this + 435) = pvData != 0;
  pcbData = 4;
  v11 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
          L"MicrophoneCaptureEnabled",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v12 = v11 < 0;
  if ( v11 > 0 )
    v12 = 1;
  if ( !v12 )
    *((_BYTE *)this + 449) = pvData != 0;
  pcbData = 4;
  v13 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
          L"CameraCaptureEnabledByDefault",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v14 = v13 < 0;
  if ( v13 > 0 )
    v14 = 1;
  if ( !v14 )
    *((_BYTE *)this + 450) = pvData != 0;
  pcbData = 4;
  v15 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Broadcast\\GlobalConfig",
          L"MicrophoneCaptureEnabledByDefault",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v16 = v15 < 0;
  if ( v15 > 0 )
    v16 = 1;
  if ( !v16 )
    *((_BYTE *)this + 451) = pvData != 0;
  pcbData = 4;
  v17 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Broadcast\\GlobalConfig",
          L"CameraCaptureEnabledByDefault",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v18 = v17 < 0;
  if ( v17 > 0 )
    v18 = 1;
  if ( !v18 )
    *((_BYTE *)this + 452) = pvData != 0;
  v25[0] = v3;
  v26 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  Windows::Internal::ComTaskPool::QueueTask__lambda_ada185189abb389ce449ddc8fe061d95___(
    v20,
    v19,
    *((unsigned int *)this + 60),
    v25);
  if ( v26 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v26 + 16LL))(v26);
  v21 = GameDVR_OutputDebug::Initialize();
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x46B,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v21);
  v22 = RegNotifyChangeKeyValue(*((HKEY *)this + 47), 1, 0x10000004u, *((HANDLE *)this + 49), 1);
  GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnExit(
    *((_BYTE *)this + 445),
    *((_BYTE *)this + 433),
    *((_BYTE *)this + 434),
    *((_BYTE *)this + 435));
  (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return v22;
}
