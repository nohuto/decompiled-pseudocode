/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___ @ 0x180256A18 (gsl--final_action__CCaptureRenderTarget--RenderCursors_--_2_--_lambda_1___--_final_action__CCapt.c)
 *     gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___ @ 0x180259664 (gsl--final_action__CCursorState--AddShadowToShape_--_58_--_lambda_1___--_final_action__CCursorSt.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802369B8 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // ebp
  __int64 v3; // r8
  __int64 *v4; // rdi
  __int64 v5; // rcx
  struct ID2DContextOwner *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  ULONGLONG Ptr; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  CComposition *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  int v17; // edi
  int (__fastcall ***v18)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  int (__fastcall ***v19)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rcx
  int (__fastcall **v20)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  int v21; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = 0;
  CDrawingContext::PopAllStacks(this);
  v4 = (__int64 *)((char *)this + 32);
  if ( !*((_QWORD *)this + 3) )
    goto LABEL_47;
  v5 = *v4;
  v6 = (CDrawingContext *)((char *)this + 16);
  v22.Ptr = 0LL;
  if ( !this )
    v6 = 0LL;
  v7 = CD2DContext::PopTarget((CD2DContext *)(v5 + 16), v6, (struct IDeviceTarget **)&v22);
  v2 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC4u, 0LL);
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(_QWORD, struct ID2DContextOwner *))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      v6);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Ptr = v22.Ptr;
  *((_BYTE *)this + 8065) = 1;
  if ( Ptr )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Ptr + 16LL))(Ptr);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x15Au, 0LL);
  }
  else
  {
LABEL_47:
    if ( **((_DWORD **)this + 999) )
    {
      v10 = *((_QWORD *)this + 5);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 56);
        if ( v11 )
        {
          v18 = (int (__fastcall ***)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
          v19 = v18;
          if ( v18 )
          {
            v20 = *v18;
            v22.Ptr = 0LL;
            if ( (*v20)(v19, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v22) >= 0 )
              (*(void (__fastcall **)(ULONGLONG, char *))(*(_QWORD *)v22.Ptr + 104LL))(v22.Ptr, (char *)this + 7992);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
          }
        }
      }
      **((_DWORD **)this + 999) = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    CRenderPerf::NotifyEndFrame((CComposition *)((char *)g_pComposition + 16));
  v12 = *v4;
  *v4 = 0LL;
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 8) == 2 )
    {
      v13 = g_pComposition;
      v14 = 0LL;
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 110);
      *(_QWORD *)(v12 + 1480) = v14 + 5;
      if ( v13 && *((_BYTE *)v13 + 6465) )
        CComposition::ScheduleCompositionPass(v13, 1000LL, 0x20000LL);
    }
    v15 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 8));
    if ( v15 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v21);
    if ( !v15 )
    {
      if ( _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v21);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      v17 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 8));
      if ( v17 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v21);
      if ( !v17 )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)(v12 + 8)) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v21);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
      }
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 412) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v3,
      1u,
      &v22);
  return (unsigned int)v2;
}
