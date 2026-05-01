/*
 * XREFs of ?RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180200D54
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18023659C (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180200E2C (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

signed int __fastcall GamingOverlayExperienceManager::RegisterForXusbConnectionEvents(__int64 a1)
{
  __int64 v1; // rbx
  CONFIGRET v3; // eax
  signed int result; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-1B8h] BYREF
  GUID v6; // [rsp+30h] [rbp-1A8h]
  _BYTE v7[384]; // [rsp+40h] [rbp-198h] BYREF

  v1 = a1 + 240;
  if ( *(_QWORD *)(a1 + 240) )
    return 0;
  memset_0(v7, 0, sizeof(v7));
  v5[0] = 416LL;
  v5[1] = 0LL;
  v6 = InterfaceClassGuid;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    v1,
    0LL);
  v3 = CM_Register_Notification(v5, a1, &GamingOverlayExperienceManager::CMEventCallback, v1);
  if ( !v3 )
    return 0;
  result = CM_MapCrToWin32Err(v3, 0x54Fu);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
