/*
 * XREFs of ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126448
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180125FD8 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801BAB64 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryDrawSuperWetLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct CSuperWetInkManager::SuperWetStroke *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rax
  const struct CVisualTree *v16; // rdx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  const __m128i *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v24; // [rsp+40h] [rbp-41h] BYREF
  int v25; // [rsp+48h] [rbp-39h]
  int v26; // [rsp+4Ch] [rbp-35h]
  __m128i v27; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+60h] [rbp-21h] BYREF
  __int64 v29[2]; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v30[2]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0;
  v8 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  if ( !v8 || *((_QWORD *)g_pComposition + 110) - *((_QWORD *)v8 + 11) >= 0xAuLL )
    return 0LL;
  v31 = 0LL;
  v9 = *(_QWORD *)a2;
  *(_OWORD *)v29 = 0LL;
  memset(v30, 0, sizeof(v30));
  v10 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(v9 + 368))(a2);
  if ( !TryFillRenderState((CDrawingContext *)a3, a4, v10, 0, (__int64)v29) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        20LL);
    return 0LL;
  }
  (*(void (__fastcall **)(const struct CVisualTree *, _DWORD *))(*(_QWORD *)a3[3] + 88LL))(a3[3], v23);
  v25 = v23[0];
  v26 = v23[1];
  v24 = 0LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)a3);
  TreeData = CVisual::FindTreeData(CurrentVisual, a3[993]);
  if ( TreeData && (v21 = (const __m128i *)TreeData[34]) != 0LL )
    v13 = _mm_loadu_si128(v21);
  else
    v13 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v27 = v13;
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip(&v27, &v24, a3 + 11, (char *)v30 + 12) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0x_EventWriteTransfer(v14, &EVTDESC_COMPUTESCRIBBLE_DRAWSKIPPED, (__int64)a2);
    *a5 = 1;
    return 0LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int64 *, _QWORD))(*(_QWORD *)a2 + 320LL))(
          a2,
          a3[4],
          v29,
          0LL) )
    return 0LL;
  v15 = *(_QWORD *)a2;
  v16 = a3[4];
  v22 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int64 *, __int64 *))(v15 + 328))(
          a2,
          v16,
          v29,
          &v22);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v22);
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          19LL);
      goto LABEL_16;
    }
    v28 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, __int128 *))(*(_QWORD *)v22 + 80LL))(
            v22,
            a3,
            &v28);
    v18 = v19;
    if ( v19 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a3[993] + 192LL))(a3[993]) )
        *(_OWORD *)((char *)a2 + 72) = v28;
      *a5 = 1;
LABEL_16:
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v19);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return v18;
}
