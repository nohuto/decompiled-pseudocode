/*
 * XREFs of ??0CComputeScribbleScheduler@@AEAA@PEAVCComputeScribbleRenderer@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18025C6F8
 * Callers:
 *     ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z @ 0x18025CA54 (-Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CComputeScribbleScheduler *__fastcall CComputeScribbleScheduler::CComputeScribbleScheduler(
        CComputeScribbleScheduler *this,
        struct CComputeScribbleRenderer *a2,
        struct ID3D12CommandQueue *a3,
        struct IDCompositionDirectInkSuperWetRenderer *a4)
{
  CComputeScribbleScheduler *result; // rax

  *((_QWORD *)this + 2) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D12CommandQueue *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 25) = a2;
  *((_QWORD *)this + 26) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetRenderer *))(*(_QWORD *)a4 + 8LL))(a4);
  result = this;
  *((_WORD *)this + 108) = 0;
  *((_BYTE *)this + 218) = 0;
  return result;
}
