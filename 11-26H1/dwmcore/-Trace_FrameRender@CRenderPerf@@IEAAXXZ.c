/*
 * XREFs of ?Trace_FrameRender@CRenderPerf@@IEAAXXZ @ 0x180231AE4
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0xxxqqxqxqxqx_EventWriteTransfer @ 0x180231D2C (McTemplateU0xxxqqxqxqxqx_EventWriteTransfer.c)
 */

void __fastcall CRenderPerf::Trace_FrameRender(CRenderPerf *this)
{
  CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx
  int v3; // r11d

  CurrentFrameId = GetCurrentFrameId();
  if ( *(CComposition **)v2 == CurrentFrameId )
  {
    v3 = *(_DWORD *)(v2 + 104);
    if ( v3 )
    {
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
        McTemplateU0xxxqqxqxqxqx_EventWriteTransfer(
          v2,
          (unsigned __int64)(1000000LL * *(_QWORD *)(v2 + 48)) % g_qpcFrequency.QuadPart,
          (unsigned __int64)(1000000LL * *(_QWORD *)(v2 + 48)) / g_qpcFrequency.QuadPart,
          (unsigned __int64)(1000000LL * *(_QWORD *)(v2 + 56)) / g_qpcFrequency.QuadPart,
          *(_QWORD *)(v2 + 64),
          v3,
          *(_DWORD *)(v2 + 108),
          *(_QWORD *)(v2 + 72),
          *(_DWORD *)(v2 + 112),
          *(_QWORD *)(v2 + 80),
          *(_DWORD *)(v2 + 116),
          *(_QWORD *)(v2 + 88),
          *(_DWORD *)(v2 + 120),
          *(_QWORD *)(v2 + 96));
    }
  }
}
