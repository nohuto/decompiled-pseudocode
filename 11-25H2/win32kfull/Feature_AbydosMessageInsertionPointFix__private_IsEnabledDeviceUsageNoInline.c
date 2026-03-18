/*
 * XREFs of Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsageNoInline @ 0x140281B3C
 * Callers:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x14027CBFC (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 * Callees:
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback @ 0x140281B74 (Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback.c)
 */

__int64 Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AbydosMessageInsertionPointFix__private_featureState & 0x10) != 0 )
    return Feature_AbydosMessageInsertionPointFix__private_featureState & 1;
  else
    return Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback(
             (unsigned int)Feature_AbydosMessageInsertionPointFix__private_featureState,
             3LL);
}
