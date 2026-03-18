/*
 * XREFs of Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline @ 0x14003F2CC
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback @ 0x14004DD6C (Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback.c)
 */

__int64 Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SystemCommitMdlLeakInstrumentation__private_featureState & 0x10) != 0 )
    return Feature_SystemCommitMdlLeakInstrumentation__private_featureState & 1;
  else
    return Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback(
             (unsigned int)Feature_SystemCommitMdlLeakInstrumentation__private_featureState,
             3LL);
}
