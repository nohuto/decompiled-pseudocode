/*
 * XREFs of ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240
 * Callers:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x180058938 (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800227A0 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18012F968 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180130300 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180130340 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScribbleSwapChain::GetComputeScribbleInvalidRects(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  CComputeScribbleRenderer *v11; // rax
  CComputeScribbleRenderer *v12; // r13
  char HasActiveInk; // di
  _DWORD **v14; // rbx
  int v15; // eax
  const struct CRegion *v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  unsigned int *v19; // r14
  __int64 v20; // rdx
  __int64 i; // rax
  __int64 v22; // r8
  const char *v23; // r9
  FastRegion::Internal::CRgnData *v24; // rcx
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32[2]; // [rsp+20h] [rbp-E0h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+2Ch] [rbp-D4h]
  __int128 v35; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  _BYTE v38[8]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h]
  int *v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  int v42; // [rsp+78h] [rbp-88h]
  int *v43; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v44[18]; // [rsp+98h] [rbp-68h] BYREF
  FastRegion::CRegion *v45[10]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a1 - 232;
  *(_QWORD *)v32 = a4;
  v5 = *(_QWORD *)(a1 - 232);
  *(_QWORD *)&v36.left = a3;
  *(_QWORD *)&v35 = a2;
  v37 = a1 - 232;
  v7 = (*(__int64 (__fastcall **)(__int64))(v5 + 208))(a1 - 232);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9);
  v11 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v12 = v11;
  if ( !v11 )
    goto LABEL_2;
  v26 = CComputeScribbleRenderer::PreRender(v11);
  v27 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
      (const char *)(unsigned int)v26);
    return v27;
  }
  HasActiveInk = *((_BYTE *)v12 + 48);
  if ( !HasActiveInk )
LABEL_2:
    HasActiveInk = CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)g_pComposition + 82));
  CRegion::CRegion((CRegion *)v45, *(const struct MilRectU **)&v36.left);
  if ( v8 )
  {
    v44[0] = 0;
    v14 = (_DWORD **)(v8 + 176);
    v43 = v44;
    CRegion::Copy((CRegion *)&v43, (const struct CRegion *)(v8 + 176));
    v8 = 0LL;
    **v14 = 0;
    v15 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v43, v45);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v15,
        v32[0]);
    (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v7 + 104LL))(v7, &v43);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
  }
  if ( v10 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v10 + 80));
    v44[0] = v8;
    v43 = v44;
    if ( *(_BYTE *)(v10 + 168) != (_BYTE)v8 )
    {
      CRegion::Copy((CRegion *)&v43, (const struct CRegion *)(v10 + 96));
      if ( *(_BYTE *)(v10 + 168) != (_BYTE)v8 )
      {
        HasActiveInk = 1;
        if ( *v43 != (_DWORD)v8 )
          (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v9 + 176LL))(v9, &v43);
      }
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
    if ( v10 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 80));
  }
  if ( **(_DWORD **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 168LL))(v9) != (_DWORD)v8 )
  {
    v44[0] = v8;
    v43 = v44;
    v16 = (const struct CRegion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 168LL))(v9);
    CRegion::Copy((CRegion *)&v43, v16);
    v17 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v43, v45);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v17,
        v32[0]);
    if ( *v43 != (_DWORD)v8 )
    {
      FastRegion::CRegion::BeginIterator(&v43, (__int64)v38);
      v18 = v35;
      v19 = *(unsigned int **)v32;
      while ( (unsigned __int64)v40 < v39 )
      {
        v32[1] = *v40;
        v34 = v40[2];
        v20 = 2 * v42;
        v32[0] = *(_DWORD *)(v41 + 4 * v20);
        v33 = *(_DWORD *)(v41 + 4 * v20 + 4);
        for ( i = v8; i < 16; i += 4LL )
          *(float *)((char *)&v36.left + i) = (float)*(int *)((char *)v32 + i);
        v35 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v18, &v36, (float *)&v35);
        CMergedRectBase<4>::Add(v19, (float *)&v35, v22, v23);
        FastRegion::Internal::CRgnData::StepIterator(v24, (struct FastRegion::CRegion::Iterator *)v38);
      }
    }
    if ( HasActiveInk )
      (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v7 + 120LL))(v7, &v43);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
  }
  if ( !HasActiveInk )
    goto LABEL_19;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
    if ( v12 )
      v31 = *((_QWORD *)v12 + 3);
    else
      v31 = v8;
    McTemplateU0xq_EventWriteTransfer(v30, &EVTDESC_COMPUTESCRIBBLE_EARLYCOPY, v31, v29);
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 136LL))(v37);
  v27 = v28;
  if ( v28 >= 0 )
  {
LABEL_19:
    FastRegion::CRegion::FreeMemory(v45);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
    (const char *)(unsigned int)v28);
  FastRegion::CRegion::FreeMemory(v45);
  return v27;
}
