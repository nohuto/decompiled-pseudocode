/*
 * XREFs of ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180122DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180123010 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x18012329C (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x18012675C (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::CreateScribble(
        CSynchronousSuperWetInk *this,
        struct CD3DDevice *a2,
        __m128i *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v8; // ebx
  unsigned int PerFrameDataId; // eax
  std::_Ref_count_base *v10; // r14
  __m128i si128; // xmm0
  struct IDCompositionDirectInkFactoryPartner *v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rax
  CSuperWetInkScribbleBase *v16; // rax
  CSuperWetInkScribbleBase *v17; // rdi
  __int64 v18; // rsi
  struct IDCompositionDirectInkSuperWetStrokePartner *v19; // rcx
  struct IDCompositionDirectInkSuperWetStrokePartner *v21; // [rsp+40h] [rbp-39h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v22; // [rsp+48h] [rbp-31h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+50h] [rbp-29h]
  CSynchronousSuperWetInk *v24; // [rsp+60h] [rbp-19h] BYREF
  int v25; // [rsp+68h] [rbp-11h]
  int v26; // [rsp+6Ch] [rbp-Dh]
  __int64 v27; // [rsp+70h] [rbp-9h]
  __m128i v28; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v22 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v22);
  v8 = DirectInkFactory;
  if ( DirectInkFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
LABEL_29:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    return (unsigned int)v8;
  }
  PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId(this);
  *(_OWORD *)v23 = 0LL;
  v8 = CSynchronousSuperWetInk::LookupPerFrameData(this, PerFrameDataId);
  if ( v8 < 0 )
  {
    if ( v23[1] )
      std::_Ref_count_base::_Decref(v23[1]);
    goto LABEL_29;
  }
  v10 = v23[0];
  v29 = 0LL;
  v28 = 0LL;
  if ( *((_BYTE *)v23[0] + 12) )
  {
    si128 = *a3;
    v29 = a3[1].m128i_i64[0];
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v29 = 0LL;
  }
  v12 = v22;
  v28 = si128;
  v13 = *(_QWORD *)v22;
  v21 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, char *, _QWORD, _QWORD, __m128i *, __int8 *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v13 + 56))(
          v22,
          (char *)v23[0] + 20,
          *((unsigned int *)v23[0] + 4),
          *(_QWORD *)v23[0],
          &v28,
          &a3[1].m128i_i8[12],
          &v21);
  if ( v14 < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        8LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    if ( v23[1] )
      std::_Ref_count_base::_Decref(v23[1]);
    v8 = v14;
    goto LABEL_29;
  }
  v24 = this;
  v26 = 0;
  v27 = 0LL;
  v15 = *((_QWORD *)this + 7);
  v25 = 2 - (*((_BYTE *)this + 168) != 0);
  if ( v15 )
    v27 = *(_QWORD *)(v15 + 72);
  v16 = (CSuperWetInkScribbleBase *)operator new(0x40uLL);
  v17 = v16;
  if ( v16 )
  {
    v18 = *((_QWORD *)this + 11);
    CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
      v16,
      v21,
      *((_DWORD *)v10 + 2),
      (const struct CSuperWetInkScribbleBase::TelemetryInfo *)&v24);
    *(_QWORD *)v17 = &CSuperWetInkScribble::`vftable';
    *((_QWORD *)v17 + 7) = v18;
    if ( v18 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v18 + 8));
    (**(void (__fastcall ***)(CSuperWetInkScribbleBase *))v17)(v17);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = v21;
  *a4 = v17;
  if ( v19 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v23[1] )
    std::_Ref_count_base::_Decref(v23[1]);
  if ( v12 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
