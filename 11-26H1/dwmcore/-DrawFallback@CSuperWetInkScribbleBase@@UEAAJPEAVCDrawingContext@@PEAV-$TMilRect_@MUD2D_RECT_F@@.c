/*
 * XREFs of ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801725B0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298 (-DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801728A0 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968 (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018B868 (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::DrawFallback(
        __int64 *a1,
        CDrawingContext *a2,
        struct _EVENT_DATA_DESCRIPTOR *a3)
{
  double v3; // xmm2_8
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, int *, __int64 *, __int64 *, int *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  const struct tagRECT *v18; // rax
  int v19; // r8d
  int v20; // r9d
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-99h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v22; // [rsp+40h] [rbp-89h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  int v24[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v25; // [rsp+58h] [rbp-71h] BYREF
  __int64 v26; // [rsp+60h] [rbp-69h] BYREF
  __int128 v27; // [rsp+68h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-51h] BYREF
  FastRegion::CRegion *v29[10]; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+E0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Start,
      (__int64)a3,
      1u,
      &v30);
  *(_QWORD *)&a3->Size = 0LL;
  a3->Ptr = 0LL;
  v7 = *a1;
  v23 = 0;
  v26 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, int *, __int64 *, __int64 *, int *))(v7 + 88);
  v25 = 0LL;
  *(_QWORD *)v24 = 0LL;
  v9 = v8(a1, &v23, &v26, &v25, v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 96LL))(a1[2]) > 1 )
  {
    v12 = (__int64 *)a1[2];
    v27 = 0LL;
    v13 = *v12;
    v22 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, struct IDCompositionDirectInkWetStrokePartner **))(v13 + 88))(
            v12,
            &v27,
            &v22);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 180LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
        (const char *)(unsigned int)v14);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
      return v10;
    }
    *(float *)&v21.Ptr = (float)(int)v27;
    *((float *)&v21.Ptr + 1) = (float)SDWORD1(v27);
    *(float *)&v21.Size = (float)SDWORD2(v27);
    *(float *)&v21.Reserved = (float)SHIDWORD(v27);
    v30 = v21;
    v14 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__m128 *)&v30, 1, 1);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 187LL;
      goto LABEL_11;
    }
    v16 = CDrawingContext::DrawGenericInk(a2, v22, 1);
    v10 = v16;
    if ( v16 < 0 )
    {
      v17 = 192LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
        (const char *)(unsigned int)v16);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      goto LABEL_17;
    }
    v28 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v22 + 32LL))(
            v22,
            &v28);
    v10 = v16;
    if ( v16 < 0 )
    {
      v17 = 195LL;
      goto LABEL_16;
    }
    v21 = 0LL;
    v30 = v28;
    CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v30, &v21);
    v18 = (const struct tagRECT *)PixelAlign((int *)&v30, (unsigned int *)&v21, v3);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v29, v18);
    CDrawingContext::AddTransientInkDirtyRegion(a2, (const struct CRegion *)v29);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Stop,
        v19,
        v20,
        v21.Size,
        v21.Type);
    *a3 = v21;
    FastRegion::CRegion::FreeMemory(v29);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    if ( v22 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
