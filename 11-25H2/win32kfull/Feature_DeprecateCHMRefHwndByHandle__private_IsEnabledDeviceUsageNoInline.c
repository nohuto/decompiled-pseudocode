/*
 * XREFs of Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354
 * Callers:
 *     NtUserGetProp @ 0x14024A1F0 (NtUserGetProp.c)
 *     NtUserGetProp2 @ 0x14024A310 (NtUserGetProp2.c)
 *     NtUserRemoveProp @ 0x14024C800 (NtUserRemoveProp.c)
 *     NtUserSetProp @ 0x14024DFD0 (NtUserSetProp.c)
 *     NtUserSetProp2 @ 0x14024E0E0 (NtUserSetProp2.c)
 * Callees:
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledFallback @ 0x14029438C (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledFallback.c)
 */

__int64 Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DeprecateCHMRefHwndByHandle__private_featureState & 0x10) != 0 )
    return Feature_DeprecateCHMRefHwndByHandle__private_featureState & 1;
  else
    return Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledFallback(
             (unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_featureState,
             3LL);
}
