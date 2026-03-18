/*
 * XREFs of ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x18018B6A0 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18018B6C4 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18018B6E8 (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018B868 (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v8)(const struct CShape *, _QWORD, __int64 *); // rax
  int WidenedBounds; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned __int64 v16; // r14
  __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  void (__fastcall **v21)(unsigned __int64, struct _EVENT_DATA_DESCRIPTOR *); // rax
  BOOLEAN v22; // al
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r8
  unsigned int v32; // [rsp+28h] [rbp-B1h]
  int v33; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v34[3]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v35; // [rsp+68h] [rbp-71h] BYREF
  __int64 v36; // [rsp+70h] [rbp-69h] BYREF
  struct ID2D1Brush *v37; // [rsp+78h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-59h] BYREF
  int *v39; // [rsp+90h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-41h] BYREF
  int *v41; // [rsp+A8h] [rbp-31h]
  __int64 v42; // [rsp+B0h] [rbp-29h]
  int *v43; // [rsp+B8h] [rbp-21h]
  __int64 v44; // [rsp+C0h] [rbp-19h]

  v5 = *(_QWORD *)a2;
  v37 = a3;
  v36 = 0LL;
  v8 = *(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(v5 + 24);
  v35 = 0LL;
  WidenedBounds = v8(a2, 0LL, &v35);
  v10 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    v32 = 2620;
    goto LABEL_24;
  }
  if ( !CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 736)) )
    goto LABEL_3;
  *(_OWORD *)&v34[1] = 0LL;
  WidenedBounds = CShape::GetWidenedBounds(a2, &v34[1], v11, a5);
  v10 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    v32 = 2627;
    goto LABEL_24;
  }
  v41 = 0LL;
  v40 = *(struct _EVENT_DATA_DESCRIPTOR *)&v34[1];
  WidenedBounds = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v36, (__int64)this, (struct D2D_RECT_F *)&v40);
  v10 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    v32 = 2629;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WidenedBounds, v32, 0LL);
    goto LABEL_14;
  }
LABEL_3:
  WidenedBounds = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v10 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    v32 = 2632;
    goto LABEL_24;
  }
  v12 = *((_QWORD *)this + 4);
  D2DPrimitiveBlendFromMilCompositingMode(*((unsigned int *)this + 60));
  v14 = v13;
  v15 = *((_DWORD *)this + 59) != 0;
  v34[1] = v35;
  v16 = ((unsigned __int64)this + 16) & -(__int64)(this != 0LL);
  CD2DContext::FlushDrawList((CD2DContext *)(v12 + 16), (__int64)this + 16, v17);
  v18 = 0;
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v12 + 16), v19, v20);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    LODWORD(v34[0]) = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 8LL))(v16);
    v33 = 3;
    v41 = &v33;
    v42 = 4LL;
    v43 = (int *)v34;
    v44 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      v26,
      3u,
      &v40);
  }
  v41 = 0LL;
  v21 = *(void (__fastcall ***)(unsigned __int64, struct _EVENT_DATA_DESCRIPTOR *))v16;
  v40 = 0LL;
  (*v21)(v16, &v40);
  (*(void (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(**(_QWORD **)(v12 + 216) + 240LL))(
    *(_QWORD *)(v12 + 216),
    &v40);
  if ( v14 != *(_DWORD *)(v12 + 404) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 216) + 624LL))(*(_QWORD *)(v12 + 216), v14);
    *(_DWORD *)(v12 + 404) = v14;
  }
  if ( v15 != *(_DWORD *)(v12 + 400) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 216) + 256LL))(*(_QWORD *)(v12 + 216), v15);
    *(_DWORD *)(v12 + 400) = v15;
  }
  v38 = v40;
  v39 = v41;
  v22 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT);
  v24 = v34[1];
  if ( v22 )
  {
    v27 = *(_QWORD *)v34[1];
    v40 = 0LL;
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1StrokeStyle1 *, struct _EVENT_DATA_DESCRIPTOR *, _DWORD, struct _EVENT_DATA_DESCRIPTOR *))(v27 + 40))(
            v34[1],
            v23,
            a5,
            &v38,
            LODWORD(FLOAT_0_25),
            &v40);
    v18 = v28;
    v10 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x3DFu, 0LL);
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xA50u, 0LL);
      goto LABEL_14;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v29,
        v30,
        v40.Size,
        v40.Type);
  }
  (*(void (__fastcall **)(_QWORD, __int64, struct ID2D1Brush *))(**(_QWORD **)(v12 + 216) + 176LL))(
    *(_QWORD *)(v12 + 216),
    v24,
    v37);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v33 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 8LL))(v16);
    LODWORD(v34[0]) = 3;
    v41 = (int *)v34;
    v42 = 4LL;
    v43 = &v33;
    v44 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      v31,
      3u,
      &v40);
  }
  v10 = v18;
  if ( v18 < 0 )
    goto LABEL_26;
LABEL_14:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v36);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  return v10;
}
