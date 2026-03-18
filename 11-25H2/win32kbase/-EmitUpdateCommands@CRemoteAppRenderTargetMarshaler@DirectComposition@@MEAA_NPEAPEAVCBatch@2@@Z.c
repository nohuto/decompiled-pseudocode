/*
 * XREFs of ?EmitUpdateCommands@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237560
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_255c3d2ec2a1b1211f21f846c7683503___ @ 0x1402371C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_255c3d2ec2a1b1211f21f846c768350.c)
 *     ?EmitAlphaMode@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023723C (-EmitAlphaMode@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContentOffset@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402372B4 (-EmitContentOffset@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDestroyWindow@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402373A4 (-EmitDestroyWindow@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237464 (-EmitRoot@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSize@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402374E0 (-EmitSize@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitVailDpi@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237630 (-EmitVailDpi@CRemoteAppRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CRemoteAppRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *))(*(_QWORD *)this + 320LL))(this)
    && DirectComposition::CRemoteAppRenderTargetMarshaler::EmitAlphaMode(this, a2)
    && DirectComposition::CRemoteAppRenderTargetMarshaler::EmitRoot(this, a2)
    && DirectComposition::CRemoteAppRenderTargetMarshaler::EmitSize(this, a2)
    && DirectComposition::CRemoteAppRenderTargetMarshaler::EmitContentOffset(this, a2)
    && DirectComposition::CRemoteAppRenderTargetMarshaler::EmitVailDpi(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_255c3d2ec2a1b1211f21f846c7683503___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    if ( DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDestroyWindow(this, a2) )
      return 1;
  }
  return v4;
}
