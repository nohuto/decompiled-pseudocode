/*
 * XREFs of ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x180231B94
 * Callers:
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802369B8 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer @ 0x180231E60 (McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer.c)
 */

CComposition *__fastcall CRenderPerf::Trace_TargetRender(__int64 a1, char a2)
{
  CComposition *result; // rax
  CComposition **v5; // rcx
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+8h] BYREF

  result = GetCurrentFrameId();
  if ( *v5 == result )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer(
        v7,
        v6,
        *(_QWORD *)(a1 + 128),
        PerformanceCount.LowPart,
        *(_QWORD *)(a1 + 136),
        *(_QWORD *)(a1 + 144),
        *(_QWORD *)(a1 + 152),
        *(_DWORD *)(a1 + 192),
        *(_DWORD *)(a1 + 196),
        *(_QWORD *)(a1 + 160),
        *(_DWORD *)(a1 + 200),
        *(_QWORD *)(a1 + 168),
        *(_DWORD *)(a1 + 204),
        *(_QWORD *)(a1 + 176),
        *(_DWORD *)(a1 + 208),
        *(_QWORD *)(a1 + 184),
        a2);
    *(_QWORD *)(a1 + 48) += PerformanceCount.QuadPart - *(_QWORD *)(a1 + 128);
    v8 = *(_QWORD *)(a1 + 136);
    if ( v8 )
      *(_QWORD *)(a1 + 56) += *(_QWORD *)(a1 + 144) - v8;
    *(_QWORD *)(a1 + 64) += *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 104) += *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 108) += *(_DWORD *)(a1 + 196);
    *(_QWORD *)(a1 + 72) += *(_QWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 112) += *(_DWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 80) += *(_QWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 116) += *(_DWORD *)(a1 + 204);
    *(_QWORD *)(a1 + 88) += *(_QWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 120) += *(_DWORD *)(a1 + 208);
    result = *(CComposition **)(a1 + 184);
    *(_QWORD *)(a1 + 96) += result;
  }
  return result;
}
