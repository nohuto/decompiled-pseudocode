/*
 * XREFs of Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C
 * Callers:
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1401226B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     GetKeyEventInputSource @ 0x140122C10 (GetKeyEventInputSource.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     EtwTraceUIPISystemError @ 0x1401DBAF0 (EtwTraceUIPISystemError.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledFallback @ 0x1401CACD8 (Feature_UIPIAlwaysOn2__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn2__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn2__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn2__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn2__private_featureState,
             3LL);
}
