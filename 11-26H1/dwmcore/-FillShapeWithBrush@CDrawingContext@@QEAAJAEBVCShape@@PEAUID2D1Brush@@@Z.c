/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B300 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  __int64 (__fastcall *v4)(const struct CShape *, _QWORD, _QWORD **); // rax
  _QWORD *v5; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r14
  unsigned int v17; // edi
  char *v18; // r12
  bool v19; // zf
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  void (__fastcall **v23)(char *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  BOOLEAN v24; // al
  _QWORD *v25; // r15
  int v26; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  _QWORD *v37; // [rsp+38h] [rbp-D0h] BYREF
  int Ptr_high; // [rsp+40h] [rbp-C8h] BYREF
  int Ptr; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+70h] [rbp-98h] BYREF
  int *v44; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+88h] [rbp-80h] BYREF
  int *v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  int *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  __int64 *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  _QWORD **v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]

  v4 = *(__int64 (__fastcall **)(const struct CShape *, _QWORD, _QWORD **))(*(_QWORD *)a2 + 24LL);
  v5 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v8 = v4(a2, 0LL, &v41);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xA18u, 0LL);
    goto LABEL_24;
  }
  v10 = *((_QWORD *)this + 93);
  if ( v10 != *((_QWORD *)this + 92) && *(_QWORD *)(v10 - 160) )
  {
    v33 = *(_QWORD *)a2;
    v42 = 0LL;
    v34 = (*(__int64 (__fastcall **)(const struct CShape *, struct _EVENT_DATA_DESCRIPTOR *, _QWORD))(v33 + 48))(
            a2,
            &v42,
            0LL);
    v9 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xA1Fu, 0LL);
      goto LABEL_24;
    }
    v46 = 0LL;
    v45 = v42;
    v35 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v37, this, &v45, 0LL);
    v9 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xA21u, 0LL);
      v5 = v37;
      goto LABEL_20;
    }
    v5 = v37;
  }
  v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v14 = *((_DWORD *)this + 60);
    v15 = 0;
    v16 = *((_QWORD *)this + 4);
    v17 = 1;
    if ( v14 )
    {
      v36 = v14 - 1;
      if ( v36 )
      {
        if ( v36 == 3 )
          v15 = 2;
      }
      else
      {
        v15 = 1;
      }
    }
    if ( !*((_DWORD *)this + 59) )
      v17 = 0;
    v18 = (char *)this + 16;
    v19 = this == 0LL;
    v37 = v41;
    v20 = 0;
    if ( v19 )
      v18 = 0LL;
    CD2DContext::FlushDrawList((CD2DContext *)(v16 + 16), v12, v13);
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v16 + 16), v21, v22);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      Ptr = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
      Ptr_high = 3;
      v46 = &Ptr_high;
      v47 = 4LL;
      v48 = &Ptr;
      v49 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        v28,
        3u,
        &v45);
    }
    v46 = 0LL;
    v23 = *(void (__fastcall ***)(char *, struct _EVENT_DATA_DESCRIPTOR *))v18;
    v45 = 0LL;
    (*v23)(v18, &v45);
    (*(void (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(**(_QWORD **)(v16 + 216) + 240LL))(
      *(_QWORD *)(v16 + 216),
      &v45);
    if ( v15 != *(_DWORD *)(v16 + 404) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 216) + 624LL))(*(_QWORD *)(v16 + 216), v15);
      *(_DWORD *)(v16 + 404) = v15;
    }
    if ( v17 != *(_DWORD *)(v16 + 400) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 216) + 256LL))(*(_QWORD *)(v16 + 216), v17);
      *(_DWORD *)(v16 + 400) = v17;
    }
    v43 = v45;
    v44 = v46;
    v24 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT);
    v25 = v37;
    if ( v24 )
    {
      v29 = *v37;
      v42 = 0LL;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, struct _EVENT_DATA_DESCRIPTOR *, struct _EVENT_DATA_DESCRIPTOR *))(v29 + 32))(
              v37,
              &v43,
              &v42);
      v20 = v30;
      v9 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x3ACu, 0LL);
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xA2Au, 0LL);
        goto LABEL_20;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v46 = &Ptr;
        LODWORD(v37) = v42.Reserved;
        v48 = &Ptr_high;
        v50 = &v40;
        v52 = &v37;
        LODWORD(v40) = v42.Size;
        Ptr_high = HIDWORD(v42.Ptr);
        Ptr = v42.Ptr;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        v53 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT,
          v31,
          5u,
          &v45);
      }
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v16 + 216) + 184LL))(
      *(_QWORD *)(v16 + 216),
      v25,
      a3,
      0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      LODWORD(v40) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
      LODWORD(v37) = 3;
      v46 = (int *)&v37;
      v47 = 4LL;
      v48 = (int *)&v40;
      v49 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v32,
        3u,
        &v45);
    }
    v9 = v20;
    if ( v20 >= 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA24u, 0LL);
LABEL_20:
  if ( v5 )
  {
    v26 = *((_DWORD *)v5 + 778);
    if ( v26 )
      *((_DWORD *)v5 + 778) = v26 - 1;
    --*(_QWORD *)(v5[93] - 184LL);
    *((_BYTE *)v5 + 8065) = 1;
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back(v5 + 92);
  }
LABEL_24:
  if ( v41 )
    (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
  return v9;
}
