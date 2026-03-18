/*
 * XREFs of ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801C9BF0
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180193D7C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801C9C9C (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

float __fastcall CComputeScribbleStopwatch::GetElapsedTimeMs(CComputeScribbleStopwatch *this)
{
  int v2; // eax
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CComputeScribbleStopwatch::ResolveDelayedResources(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2,
      v9);
  v3 = *((_QWORD *)this + 3) - *((_QWORD *)this + 6);
  if ( 1000 * v3 < 0 )
    v4 = (float)(int)((unsigned __int64)(1000 * v3) >> 1) + (float)(int)((unsigned __int64)(1000 * v3) >> 1);
  else
    v4 = (float)(1000 * v3);
  v5 = *((_QWORD *)this + 2) - *((_QWORD *)this + 7);
  v6 = v4 / *((float *)this + 2);
  if ( 1000 * v5 < 0 )
    v7 = (float)(int)((unsigned __int64)(1000 * v5) >> 1) + (float)(int)((unsigned __int64)(1000 * v5) >> 1);
  else
    v7 = (float)(1000 * v5);
  return v6 - (float)(v7 / *((float *)this + 3));
}
