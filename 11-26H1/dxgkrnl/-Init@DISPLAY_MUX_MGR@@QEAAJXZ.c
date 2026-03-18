/*
 * XREFs of ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x14008CA4C
 * Callers:
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z @ 0x14008F5F4 (-SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z.c)
 *     Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck @ 0x1400914B0 (Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck.c)
 *     Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck @ 0x140091574 (Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::Init(PVOID Context)
{
  NTSTATUS v2; // ebx
  int v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+48h] [rbp-B8h] BYREF
  GUID EventCategoryData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+60h] [rbp-A0h] BYREF
  int v9; // [rsp+68h] [rbp-98h]
  const wchar_t *v10; // [rsp+70h] [rbp-90h]
  int *v11; // [rsp+78h] [rbp-88h]
  int v12; // [rsp+80h] [rbp-80h]
  int *v13; // [rsp+88h] [rbp-78h]
  int v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int v16; // [rsp+A0h] [rbp-60h]
  const wchar_t *v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  int v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  __int128 v25; // [rsp+E8h] [rbp-18h]
  __int128 v26; // [rsp+F8h] [rbp-8h]

  v10 = L"EnableMdmExperimentalStaticFeature";
  v4 = 0;
  v5 = 0;
  v8 = 0LL;
  v9 = 32;
  v16 = 32;
  v11 = &v4;
  v12 = 4;
  v13 = &v4;
  v14 = 4;
  v17 = L"EnableMdmExperimentalDynamicFeature";
  v15 = 0LL;
  v18 = &v5;
  v20 = &v5;
  v19 = 4;
  v21 = 4;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Mdm", &v8, 0LL, 0LL);
  if ( v4 || g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2484;
    *(_BYTE *)Context = 1;
    *((_BYTE *)Context + 8) = 1;
  }
  if ( v5 || g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2490;
    *((_BYTE *)Context + 8) = 1;
    *(_BYTE *)Context = 1;
  }
  EventCategoryData = GUID_DEVINTERFACE_DISPLAYMUX;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (__int64 *)Context + 8,
    0LL);
  v2 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         &EventCategoryData,
         (PDRIVER_OBJECT)g_pDriverObject,
         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DISPLAY_MUX_MGR::HandleMuxPnPNotification,
         Context,
         (PVOID *)Context + 8);
  if ( v2 >= 0 )
  {
    Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck();
    *((_DWORD *)Context + 1) = 4;
    Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck();
    *((_DWORD *)Context + 3) = 4;
    ProductType = 0;
    RtlGetNtProductType(&ProductType);
    if ( ProductType == NtProductServer )
    {
      *((_DWORD *)Context + 1) = 1;
      *((_DWORD *)Context + 3) = 1;
      *(_BYTE *)Context = 0;
      *((_BYTE *)Context + 8) = 0;
    }
    DISPLAY_MUX_MGR::SetMdmStatus(Context, 1LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2506;
    DISPLAY_MUX_MGR::SetMdmStatus(Context, 7LL);
    return (unsigned int)v2;
  }
}
