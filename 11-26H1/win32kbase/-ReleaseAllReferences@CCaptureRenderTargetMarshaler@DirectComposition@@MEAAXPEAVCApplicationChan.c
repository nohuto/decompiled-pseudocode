/*
 * XREFs of ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401B32E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1401BFF14 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  void *v5; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    DxgkReleaseCompositionObjectReference(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
    if ( v6 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this);
}
