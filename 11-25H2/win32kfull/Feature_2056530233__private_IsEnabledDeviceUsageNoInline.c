/*
 * XREFs of Feature_2056530233__private_IsEnabledDeviceUsageNoInline @ 0x140337F04
 * Callers:
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D3718 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1400D5B7C (-pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     Feature_2056530233__private_IsEnabledFallback @ 0x140337F3C (Feature_2056530233__private_IsEnabledFallback.c)
 */

__int64 Feature_2056530233__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2056530233__private_featureState & 0x10) != 0 )
    return Feature_2056530233__private_featureState & 1;
  else
    return Feature_2056530233__private_IsEnabledFallback((unsigned int)Feature_2056530233__private_featureState, 3LL);
}
