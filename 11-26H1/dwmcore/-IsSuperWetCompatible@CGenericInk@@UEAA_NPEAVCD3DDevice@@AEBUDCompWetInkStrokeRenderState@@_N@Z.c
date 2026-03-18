/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180124AF0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180124F78 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        char a4)
{
  struct IDCompositionDirectInkFactoryPartner *v6; // rdi
  struct IDCompositionDirectInkWetStrokePartner *v7; // rbx
  __int64 v9; // rax
  struct IDCompositionDirectInkWetStrokePartner *v10; // [rsp+30h] [rbp-40h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v11; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-30h] BYREF
  struct IDCompositionDirectInkWetStrokePartner **v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]

  if ( !*((_QWORD *)this + 11) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    {
      LODWORD(v10) = 14;
      v13 = &v10;
      v14 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        (__int64)a3,
        2u,
        &v12);
    }
    return 0;
  }
  if ( a4 && !*((_QWORD *)this + 17) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        14LL);
    return 0;
  }
  v10 = 0LL;
  if ( (int)CGenericInk::GetDirectInkWetStroke(this, a2, &v10) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        15LL);
    if ( !v10 )
      return 0;
    v9 = *(_QWORD *)v10;
LABEL_17:
    (*(void (**)(void))(v9 + 16))();
    return 0;
  }
  v11 = 0LL;
  if ( (int)CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v11) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        16LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
    return 0;
  }
  v6 = v11;
  v7 = v10;
  if ( !(*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v11 + 40LL))(
          v11,
          v10,
          a3) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        3LL);
    if ( v6 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( !v7 )
      return 0;
    v9 = *(_QWORD *)v7;
    goto LABEL_17;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 16LL))(v7);
  return 1;
}
