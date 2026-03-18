/*
 * XREFs of ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320
 * Callers:
 *     ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023B920 (-EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAV.c)
 * Callees:
 *     ?EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014BA90 (-EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitController@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014C714 (-EmitController@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140151724 (-EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitIsCursorEnabled@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140155930 (-EmitIsCursorEnabled@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSDRBoost@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140155F2C (-EmitSDRBoost@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMinUpdateInterval@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14015A500 (-EmitMinUpdateInterval@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDirtyRegionMode@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14015C2FC (-EmitDirtyRegionMode@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPreferReferenceVisual@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14015C33C (-EmitPreferReferenceVisual@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019919C (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_166f574491722096b3046d035f3c3c8f___ @ 0x14023B460 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_166f574491722096b304.c)
 *     Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline @ 0x14023B784 (Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  char updated; // al

  v4 = 0;
  if ( (unsigned int)Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !DirectComposition::CCaptureRenderTargetMarshaler::EmitController(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(this, (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitIsCursorEnabled(
            this,
            (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitSDRBoost(this, (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitMinUpdateInterval(
            this,
            (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitDirtyRegionMode(
            this,
            (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitPreferReferenceVisual(
            this,
            (struct DirectComposition::CBatch **)a2) )
    {
      return v4;
    }
    if ( !(unsigned int)Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline() )
      return 1;
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_166f574491722096b3046d035f3c3c8f___(
                this,
                a2);
  }
  else
  {
    if ( !DirectComposition::CCaptureRenderTargetMarshaler::EmitController(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(this, a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(this, (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitIsCursorEnabled(
            this,
            (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitSDRBoost(this, (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitMinUpdateInterval(
            this,
            (struct DirectComposition::CBatch **)a2)
      || !DirectComposition::CCaptureRenderTargetMarshaler::EmitDirtyRegionMode(
            this,
            (struct DirectComposition::CBatch **)a2) )
    {
      return v4;
    }
    updated = DirectComposition::CCaptureRenderTargetMarshaler::EmitPreferReferenceVisual(
                this,
                (struct DirectComposition::CBatch **)a2);
  }
  if ( updated )
    return 1;
  return v4;
}
