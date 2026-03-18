/*
 * XREFs of Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680
 * Callers:
 *     _RegisterDManipHook @ 0x140222070 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x140240450 (xxxWrapSendMessageBSM.c)
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 *     NtUserRegisterBSDRWindow @ 0x14024C210 (NtUserRegisterBSDRWindow.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14025D994 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterUserApiHook @ 0x140286DBC (_RegisterUserApiHook.c)
 *     NtUserRegisterServicesProcess @ 0x14029CE80 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1402836B8 (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
 */

__int64 Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IsPrivilegedEx__private_featureState & 0x10) != 0 )
    return Feature_IsPrivilegedEx__private_featureState & 1;
  else
    return Feature_IsPrivilegedEx__private_IsEnabledFallback(
             (unsigned int)Feature_IsPrivilegedEx__private_featureState,
             3LL);
}
