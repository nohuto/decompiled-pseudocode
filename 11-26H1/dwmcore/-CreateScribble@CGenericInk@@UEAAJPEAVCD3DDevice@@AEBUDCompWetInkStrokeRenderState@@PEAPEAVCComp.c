/*
 * XREFs of ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801246F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x18012329C (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180124F78 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::CreateScribble(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  int DirectInkFactory; // eax
  struct IDCompositionDirectInkFactoryPartner *v11; // rbx
  struct IDCompositionDirectInkWetStrokePartner *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int v15; // esi
  __int64 v16; // rax
  void *v17; // rax
  CSuperWetInkScribbleBase *v18; // rax
  CSuperWetInkScribbleBase *v19; // rsi
  __int64 v20; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v22; // [rsp+30h] [rbp-40h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v23; // [rsp+38h] [rbp-38h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = 0LL;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(this, a2, &v23);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    if ( v23 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v23 + 16LL))(v23);
    return v9;
  }
  v24 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v24);
  v9 = DirectInkFactory;
  if ( DirectInkFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
LABEL_10:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    return v9;
  }
  v11 = v24;
  v12 = v23;
  v13 = *(_QWORD *)v24;
  v22 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v13 + 48))(
          v24,
          v23,
          a3,
          &v22);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    v9 = v15;
    goto LABEL_10;
  }
  v26[0] = this;
  v26[1] = 0LL;
  v27 = 0LL;
  v16 = *((_QWORD *)this + 7);
  if ( v16 )
    v17 = *(void **)(v16 + 72);
  else
    v17 = &unk_1802F34A8;
  v27 = v17;
  v18 = (CSuperWetInkScribbleBase *)operator new(0x40uLL);
  v19 = v18;
  if ( v18 )
  {
    v20 = *((_QWORD *)this + 11);
    CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
      v18,
      v22,
      *((_DWORD *)this + 70),
      (const struct CSuperWetInkScribbleBase::TelemetryInfo *)v26);
    *(_QWORD *)v19 = &CSuperWetInkScribble::`vftable';
    *((_QWORD *)v19 + 7) = v20;
    if ( v20 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v20 + 8));
    (**(void (__fastcall ***)(CSuperWetInkScribbleBase *))v19)(v19);
    v25 = 0LL;
    *a4 = v19;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v25);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    v9 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)0x8007000ELL);
  if ( v22 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v11 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v12 + 16LL))(v12);
  return 2147942414LL;
}
