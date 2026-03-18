/*
 * XREFs of Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x140161120 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     EtwTraceUIPISystemError @ 0x14016E1F0 (EtwTraceUIPISystemError.c)
 *     GetKeyEventInputSource @ 0x14018C4F4 (GetKeyEventInputSource.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     Feature_UIPIAlwaysOn__private_IsEnabledFallback @ 0x1401A5398 (Feature_UIPIAlwaysOn__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn__private_featureState,
             3LL);
}
