/*
 * XREFs of ?SetReferenceProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140245C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 104),
             a4,
             1,
             17,
             (int *)(a1 + 16),
             64,
             0,
             a5);
  if ( a3 == 11 && (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 136),
             a4,
             1,
             159,
             (int *)(a1 + 16),
             0x10000,
             0,
             a5);
  return 3221225485LL;
}
