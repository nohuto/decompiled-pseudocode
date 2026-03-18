/*
 * XREFs of ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180189050
 * Callers:
 *     ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298 (-DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x1800AE1E0 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180189180 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawGenericInk(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDCompositionDirectInkWetStrokePartner *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        D2D1_PRIMITIVE_BLEND a5,
        float a6,
        bool a7)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ebx
  D2D1_ANTIALIAS_MODE v18; // [rsp+30h] [rbp-58h] BYREF
  struct D2D_MATRIX_3X2_F v19; // [rsp+38h] [rbp-50h] BYREF

  v18 = a4;
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  CD2DContext::EnsureBeginDraw(this, v10, v11);
  memset(&v19, 0, sizeof(v19));
  CD2DContext::SetCommonState(this, a2, a5, &v18, &v19);
  v13 = (_QWORD *)*((_QWORD *)CD2DTargetStack::Top((CD2DContext *)((char *)this + 320)) + 3);
  if ( v13
    && *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, struct D2D_MATRIX_3X2_F *))(v13[1] + 24LL))(v13 + 1, &v19) + 8) == 1 )
  {
    (*(__int64 (__fastcall **)(_QWORD *, struct D2D_MATRIX_3X2_F *))(*v13 + 120LL))(v13, &v19);
  }
  v15 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int64, __int64, bool))(*(_QWORD *)a3 + 56LL))(
          a3,
          v12,
          v14,
          a7);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x175u, 0LL);
  return v16;
}
