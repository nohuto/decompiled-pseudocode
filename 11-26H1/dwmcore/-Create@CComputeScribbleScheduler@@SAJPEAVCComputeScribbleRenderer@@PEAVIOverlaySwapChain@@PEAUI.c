/*
 * XREFs of ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z @ 0x18025CA54
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x180259BEC (-Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x180259A20 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 *     ??0CComputeScribbleScheduler@@AEAA@PEAVCComputeScribbleRenderer@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18025C6F8 (--0CComputeScribbleScheduler@@AEAA@PEAVCComputeScribbleRenderer@@PEAUID3D12CommandQueue@@PEAUIDC.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Create(
        struct CComputeScribbleRenderer *a1,
        struct IOverlaySwapChain *a2,
        struct ID3D12CommandQueue *a3,
        struct IDCompositionDirectInkSuperWetRenderer *a4,
        struct CComputeScribbleScheduler **a5)
{
  CComputeScribbleScheduler *v9; // rax
  CComputeScribbleScheduler *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (CComputeScribbleScheduler *)operator new(0xE0uLL);
  if ( v9 )
    v10 = CComputeScribbleScheduler::CComputeScribbleScheduler(v9, a1, a3, a4);
  else
    v10 = 0LL;
  *(_QWORD *)v14 = v10;
  v11 = CComputeScribbleScheduler::Initialize(v10, a2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = 0;
    *(_QWORD *)v14 = 0LL;
    *a5 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v11);
  }
  std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>(v14);
  return v12;
}
