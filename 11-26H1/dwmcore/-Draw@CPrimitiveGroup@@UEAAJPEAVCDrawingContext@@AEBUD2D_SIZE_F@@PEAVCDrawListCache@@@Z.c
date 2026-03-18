/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801834A0 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018B868 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801B35EC (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801B7BC0 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CDrawListCache *v4; // r14
  const struct D2D_SIZE_F *v5; // r12
  __int64 *v8; // r14
  __int64 *v9; // r12
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int128 *); // rbx
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, __int64, __int64 *); // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, __int128 *); // rbx
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, __int64, __int64 *); // rdi
  __int64 v19; // rax
  struct CVisual *CurrentVisual; // rbx
  __int64 v21; // rdx
  CDrawingContext *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int v30; // [rsp+28h] [rbp-69h]
  int v31; // [rsp+30h] [rbp-61h]
  int v32; // [rsp+38h] [rbp-59h]
  int v33; // [rsp+40h] [rbp-51h]
  __int128 v34; // [rsp+48h] [rbp-49h] BYREF
  struct D2D_RECT_F v35; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v36[64]; // [rsp+68h] [rbp-29h] BYREF
  int v37; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  __int64 v39; // [rsp+F8h] [rbp+67h] BYREF
  const struct D2D_SIZE_F *v40; // [rsp+108h] [rbp+77h]
  struct CDrawListCache *v41; // [rsp+110h] [rbp+7Fh]

  v41 = a4;
  v40 = a3;
  v4 = a4;
  v5 = a3;
  if ( *((_BYTE *)this + 402) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x43,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      (const char *)a4);
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v8 = (__int64 *)*((_QWORD *)this + 17);
    v9 = (__int64 *)*((_QWORD *)this + 18);
    if ( v8 != v9 )
    {
      if ( a2 )
      {
        do
        {
          v10 = *v8;
          *(_QWORD *)&v34 = 0LL;
          v11 = *(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v10 + 72) + 64LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v34);
          if ( v11(v10 + 72, &v34) >= 0 )
          {
            v12 = v34;
            v39 = 0LL;
            v13 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 104LL);
            wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v39);
            v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
            if ( v13(v12, v14, &v39) >= 0 )
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 112LL))(v39, (char *)a2 + 16);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
          ++v8;
        }
        while ( v8 != v9 );
      }
      else
      {
        do
        {
          v15 = *v8;
          *(_QWORD *)&v34 = 0LL;
          v16 = *(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v15 + 72) + 64LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v34);
          if ( v16(v15 + 72, &v34) >= 0 )
          {
            v17 = v34;
            v39 = 0LL;
            v18 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 104LL);
            wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v39);
            v19 = (*(__int64 (__fastcall **)(__int64))(MEMORY[0x10] + 16LL))(16LL);
            if ( v18(v17, v19, &v39) >= 0 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 112LL))(v39, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
          ++v8;
        }
        while ( v8 != v9 );
      }
    }
    v4 = v41;
    v5 = v40;
  }
  if ( *((_QWORD *)this + 41) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    CDrawingContext::EtwLogCurrentState(v22, v21, v23);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v33 = *((_DWORD *)this + 30);
      v32 = *((_DWORD *)this + 29);
      v31 = *((_DWORD *)this + 28);
      v30 = *((_DWORD *)this + 27);
      McTemplateU0ppffff_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        v24,
        CurrentVisual,
        this,
        v30,
        v31,
        v32,
        v33);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v25 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 8LL))((char *)a2 + 16);
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Start,
        18LL,
        v25);
    }
    v37 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)v36);
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v34 = 0LL;
      v35 = *(struct D2D_RECT_F *)((char *)this + 108);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v36, &v35, (float *)&v34);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0ffff_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT,
          v26,
          *((float *)&v34 + 1),
          SBYTE8(v34),
          SBYTE12(v34));
    }
    v27 = CContent::Draw(this, a2, v5, v4);
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x78u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        (__int64)this,
        -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v28 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 8LL))((char *)a2 + 16);
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop,
        18LL,
        v28);
    }
  }
  return 0LL;
}
