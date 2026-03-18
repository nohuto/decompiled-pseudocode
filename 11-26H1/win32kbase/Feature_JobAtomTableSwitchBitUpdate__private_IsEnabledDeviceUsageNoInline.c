/*
 * XREFs of Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CF888
 * Callers:
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 *     DeleteStringPropertyAtoms @ 0x1401AAE70 (DeleteStringPropertyAtoms.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44 (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback @ 0x1401CF8C4 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_JobAtomTableSwitchBitUpdate__private_featureState & 0x10) != 0 )
    return Feature_JobAtomTableSwitchBitUpdate__private_featureState & 1;
  else
    return Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_featureState,
             3LL);
}
