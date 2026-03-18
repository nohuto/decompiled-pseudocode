/*
 * XREFs of ?EmitVisualsToExclude@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402457BC
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitVisualsToExclude(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline()
    || (*((_DWORD *)this + 4) & 0x10000) == 0 )
  {
    return 1;
  }
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v5 = v8;
    *(_DWORD *)v8 = 16;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 1) = 32;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return 0;
}
