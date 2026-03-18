/*
 * XREFs of ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400ED7E0 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402295D8 (-EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229AA8 (-EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229B1C (-EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229B8C (-EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229D80 (-EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A2A8 (-EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A3B0 (-EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A584 (-EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A6E8 (-EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 13,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         4096,
         488,
         489,
         0x20uLL)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetContentOffsetCommand(this, a2) )
  {
    return DirectComposition::CCaptureControllerMarshaler::EmitSetSuspendOnScreenOffCommand(this, a2) != 0;
  }
  return v4;
}
