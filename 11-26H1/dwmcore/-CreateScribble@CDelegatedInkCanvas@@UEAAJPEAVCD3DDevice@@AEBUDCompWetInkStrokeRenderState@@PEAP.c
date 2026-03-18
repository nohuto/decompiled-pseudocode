/*
 * XREFs of ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x18026CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x18012329C (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelegatedInkCanvas::CreateScribble(
        CDelegatedInkCanvas *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v7; // ebx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  CSuperWetInkScribbleBase *v12; // rax
  CSuperWetInkScribbleBase *v13; // rdi
  __int64 v14; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v16; // [rsp+40h] [rbp-C0h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h]
  _BYTE v20[24]; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+B4h] [rbp-4Ch]
  int v25; // [rsp+BCh] [rbp-44h]
  __m128i si128; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  char v30; // [rsp+100h] [rbp+0h]
  __int16 v31; // [rsp+101h] [rbp+1h]
  char v32; // [rsp+103h] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v17 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v17);
  v7 = DirectInkFactory;
  if ( DirectInkFactory >= 0 )
  {
    v8 = *((_OWORD *)this + 9);
    v18[0] = 0LL;
    *(_QWORD *)v20 = 0LL;
    v21 = 0LL;
    v31 = 0;
    v32 = 0;
    v23 = 0;
    v25 = 0;
    *(_QWORD *)&v22 = -1LL;
    v24 = 0LL;
    *(_WORD *)((char *)&v22 + 13) = 0;
    HIBYTE(v22) = 0;
    *(_OWORD *)&v20[8] = v8;
    v27 = *(_OWORD *)v20;
    v30 = 1;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = *((unsigned __int64 *)&v8 + 1);
    DWORD2(v22) = 1065353216;
    BYTE12(v22) = 0;
    v29 = v22;
    v9 = *(_QWORD *)v17;
    v16 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, int *, __int64))(v9 + 56))(
           v17,
           &v23,
           84LL);
    if ( v7 >= 0 )
    {
      v18[1] = 2LL;
      v19 = 0LL;
      v10 = *((_QWORD *)this + 7);
      v18[0] = (__int64)this;
      if ( v10 )
        v19 = *(_QWORD *)(v10 + 72);
      v11 = *((_QWORD *)this + 20);
      v12 = (CSuperWetInkScribbleBase *)operator new(0x48uLL);
      v13 = v12;
      if ( v12 )
      {
        v14 = *((_QWORD *)this + 24);
        CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
          v12,
          v16,
          0,
          (const struct CSuperWetInkScribbleBase::TelemetryInfo *)v18);
        *((_QWORD *)v13 + 7) = v14;
        *(_QWORD *)v13 = &CInkCanvasScribble::`vftable';
        *((_QWORD *)v13 + 8) = v11;
        ((void (__fastcall *)(CSuperWetInkScribbleBase *))CInkCanvasScribble::`vftable')(v13);
      }
      else
      {
        v13 = 0LL;
      }
      v18[0] = 0LL;
      *a4 = v13;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v18);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      v7 = 0;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          8LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)DirectInkFactory);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return (unsigned int)v7;
}
