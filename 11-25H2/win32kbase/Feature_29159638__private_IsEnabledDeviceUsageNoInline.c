/*
 * XREFs of Feature_29159638__private_IsEnabledDeviceUsageNoInline @ 0x140228F1C
 * Callers:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1402289AC (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 * Callees:
 *     Feature_29159638__private_IsEnabledFallback @ 0x140228F54 (Feature_29159638__private_IsEnabledFallback.c)
 */

__int64 Feature_29159638__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_29159638__private_featureState & 0x10) != 0 )
    return Feature_29159638__private_featureState & 1;
  else
    return Feature_29159638__private_IsEnabledFallback((unsigned int)Feature_29159638__private_featureState, 3LL);
}
