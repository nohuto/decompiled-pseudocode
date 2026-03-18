/*
 * XREFs of ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402301A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 *     ?EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14018C934 (-EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140196B58 (-EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DA94 (-EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A1C48 (-EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A3A58 (-EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A3B64 (-EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C3B64 (-EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C4460 (-EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E9B4 (-EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetSwapChainHostVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F6CC (-EmitSetSwapChainHostVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CCaptureControllerMarshaler::EmitSetRootVisualCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetCaptureStateCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetContentSizeCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetTransformCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetIsConstrainedBySizeCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetDefaultSDRBoostCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetReferenceVisualCommand(this, a2)
    && (unsigned __int8)DirectComposition::CMarshaledArrayBase::ValueTypeMarshal(
                          (__int64)this + 104,
                          (__int64)a2,
                          *((unsigned int *)this + 8))
    && DirectComposition::CCaptureControllerMarshaler::EmitSetContentOffsetCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetSuspendOnScreenOffCommand(this, a2) )
  {
    return DirectComposition::CCaptureControllerMarshaler::EmitSetSwapChainHostVisualCommand(this, a2) != 0;
  }
  return v4;
}
