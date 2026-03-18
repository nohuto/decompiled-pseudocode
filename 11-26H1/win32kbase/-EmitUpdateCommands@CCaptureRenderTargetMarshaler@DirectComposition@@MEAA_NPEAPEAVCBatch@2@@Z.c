/*
 * XREFs of ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140182C40 (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401881B4 (-EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140190114 (-EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0434555a235313aa634c546f4007f188___ @ 0x14024540C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0434555a235313aa634c546f4007f18.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___ @ 0x14024546C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffee___ @ 0x1402454E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffe.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cba___ @ 0x140245554 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___ @ 0x140245640 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___ @ 0x1402456B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1.c)
 *     ?EmitUpdateId@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140245754 (-EmitUpdateId@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitVisualsToExclude@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402457BC (-EmitVisualsToExclude@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  char v7; // di
  void *v9; // [rsp+30h] [rbp+10h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      goto LABEL_28;
    v4 = v9;
    *(_DWORD *)v9 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 24;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 13);
    if ( v5 )
      LODWORD(v5) = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 3) = v5;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( !DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(this, a2)
    || !DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(this, a2)
    || !DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(this, (struct DirectComposition::CBatch **)a2) )
  {
    goto LABEL_28;
  }
  v6 = *((_DWORD *)this + 4);
  v9 = this;
  if ( (v6 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___(
                             this,
                             a2,
                             &v9) )
      goto LABEL_28;
    *((_DWORD *)this + 4) &= ~0x400u;
    v6 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v6 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___(
                             this,
                             a2,
                             &v9) )
      goto LABEL_28;
    *((_DWORD *)this + 4) &= ~0x800u;
    v6 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v6 & 0x1000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffee___(
                             this,
                             a2,
                             &v9) )
      goto LABEL_28;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v6 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v6 & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cba___(
                             this,
                             a2,
                             &v9) )
      goto LABEL_28;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v6 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v6 & 0x4000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___(
                             this,
                             a2,
                             &v9) )
      goto LABEL_28;
    *((_DWORD *)this + 4) &= ~0x4000u;
    v6 = *((_DWORD *)this + 4);
  }
  if ( (v6 & 0x8000) == 0 )
  {
LABEL_27:
    v7 = 1;
    goto LABEL_29;
  }
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0434555a235313aa634c546f4007f188___(
                          this,
                          a2) )
  {
    *((_DWORD *)this + 4) &= ~0x8000u;
    goto LABEL_27;
  }
LABEL_28:
  v7 = 0;
LABEL_29:
  if ( (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
    return v7
        && DirectComposition::CCaptureRenderTargetMarshaler::EmitVisualsToExclude(
             this,
             (struct DirectComposition::CBatch **)a2)
        && DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateId(this, (struct DirectComposition::CBatch **)a2);
  return v7;
}
