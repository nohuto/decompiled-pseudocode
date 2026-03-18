/*
 * XREFs of ?EmitUpdateId@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140245754
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf6e4ccc5c5e3a95014c6cc5830a1b4e___ @ 0x1402455C8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bf6e4ccc5c5e3a95014c6cc5830a1b4.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateId(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  bool v5; // zf
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = (*((_DWORD *)this + 4) & 0x20000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf6e4ccc5c5e3a95014c6cc5830a1b4e___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000u;
    }
    return 1;
  }
  return 1;
}
