/*
 * XREFs of Feature_2936862008__private_IsEnabledDeviceUsageNoInline @ 0x1402409D8
 * Callers:
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1402405DC (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Feature_2936862008__private_IsEnabledFallback @ 0x140240A10 (Feature_2936862008__private_IsEnabledFallback.c)
 */

__int64 Feature_2936862008__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2936862008__private_featureState & 0x10) != 0 )
    return Feature_2936862008__private_featureState & 1;
  else
    return Feature_2936862008__private_IsEnabledFallback((unsigned int)Feature_2936862008__private_featureState, 3LL);
}
