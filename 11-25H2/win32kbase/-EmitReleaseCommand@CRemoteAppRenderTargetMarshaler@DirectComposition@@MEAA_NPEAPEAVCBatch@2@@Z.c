/*
 * XREFs of ?EmitReleaseCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237420
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400245B0 (-EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDestroyWindow@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402373A4 (-EmitDestroyWindow@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitReleaseCommand(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char result; // al

  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x200u;
  result = DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDestroyWindow(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitReleaseCommand(this, a2);
  return result;
}
