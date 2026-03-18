/*
 * XREFs of ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801BDE24
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180193D7C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z @ 0x1801BE020 (-StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::BuildCommandList(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribbleStopwatch *a2,
        struct IDCompositionDirectInkSuperWetRenderer *a3,
        struct ComputeScribbleLatencyData *a4)
{
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // [rsp+40h] [rbp-19h] BYREF
  struct tagRECT v25; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  if ( v7 < 0 )
  {
    v18 = 198LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 80LL))(
         *((_QWORD *)this + 5),
         *((_QWORD *)this + 4),
         0LL);
  if ( v7 < 0 )
  {
    v18 = 199LL;
    goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 11);
  v9 = *((_QWORD *)this + 3);
  v20 = 0;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct IDCompositionDirectInkSuperWetRenderer *))(*(_QWORD *)v8 + 40LL))(
          v8,
          *((_QWORD *)this + 5),
          v9,
          a3);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v10);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v19,
        (int)&v20);
    return (unsigned int)v7;
  }
  v11 = CRegion::TryAddRectangle((FastRegion::CRegion **)this + 12, &v25);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CA,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v11,
      (int)&v20);
  CComputeScribbleStopwatch::StopOnGpu(a2, *((struct ID3D12GraphicsCommandList **)this + 5));
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEB,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
