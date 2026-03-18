/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x180009F50 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x18013110C (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30 (-ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801BAB64 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  CSuperWetInkManager::SuperWetStroke *v8; // rax
  CSuperWetInkManager::SuperWetStroke *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rbx
  int v18; // ebx
  __int64 v19; // rax
  CComputeScribbleRenderer *v20; // rbx
  __int64 v21; // rdx
  bool v22; // al
  struct IMonitorTarget *v23; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v24)(_QWORD); // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  bool v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)this )
    return 0LL;
  v8 = CSuperWetInkManager::TryLookupDataForSource(this, *(struct CSuperWetSource **)this);
  v23 = 0LL;
  v9 = v8;
  CSuperWetInkManager::SuperWetStroke::ResolveTarget(v8, &v23);
  if ( v23 != a2 )
  {
LABEL_19:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    return 0LL;
  }
  if ( *((_QWORD *)g_pComposition + 110) - *((_QWORD *)v9 + 11) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    goto LABEL_19;
  }
  if ( !*((_BYTE *)v9 + 96) )
  {
    v26 = 0;
    if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v9, &v26) >= 0 )
    {
      v22 = v26;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          18LL);
      CSuperWetInkManager::DeactivateCurrentSource(this);
      v22 = 0;
    }
    if ( !v22 )
      goto LABEL_19;
  }
  *((_BYTE *)v9 + 96) = 0;
  v10 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((char *)v9 + 72, a3, v10, (char *)v9 + 44) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        17LL);
    goto LABEL_19;
  }
  v11 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 224LL))(a2);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
  v13 = *(__int64 **)this;
  v14 = v12;
  v15 = **(_QWORD **)this;
  v24 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, void (__fastcall ****)(_QWORD)))(v15 + 328))(
         v13,
         v14,
         (__int64)v9 + 16,
         &v24) < 0 )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
  }
  else
  {
    v16 = *(_QWORD *)a2;
    v27 = 0LL;
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(v16 + 224))(a2);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v18 = (**v17)(v17, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v27);
    if ( v18 < 0 )
    {
      v21 = 284LL;
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27);
      v20 = (CComputeScribbleRenderer *)v19;
      if ( !v19 )
        goto LABEL_12;
      if ( *(_BYTE *)(v19 + 48) )
        wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=((__int64 *)(v19 + 40), v24);
      else
        *(_BYTE *)(v19 + 49) = 1;
      v18 = CComputeScribbleRenderer::ScheduleScribble(v20);
      if ( v18 >= 0 )
      {
LABEL_12:
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v24 )
          (*v24)[1](v24);
        if ( v23 )
          (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v23 + 16LL))(v23);
        return 0LL;
      }
      v21 = 295LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
    v3 = v18;
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v3;
}
