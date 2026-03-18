/*
 * XREFs of ?NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z @ 0x14010F2B0
 * Callers:
 *     ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401093F0 (-EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236440 (-EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14010F2E0 (-StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NotifyCommitMustBeLastForFrame(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 264) | 0x10;
  *((_BYTE *)this + 264) = v2;
  if ( a2 )
  {
    *((_BYTE *)this + 264) = v2 | 0x20;
    DirectComposition::CApplicationChannel::StartNextFrameNow(this);
  }
}
