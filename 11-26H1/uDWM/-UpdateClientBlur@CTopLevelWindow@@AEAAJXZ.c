/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001066C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014060 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18005897C (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x180066508 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 *     ??$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCLegacyNonClientBackground@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180075AA4 (--$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800BF2B4 (-UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v3; // ebx
  CBaseObject *v4; // r15
  struct CBaseGeometryProxy *v5; // r12
  CContainerVisual **v6; // rcx
  CBaseObject **v8; // r13
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CVisual **v14; // r14
  int v15; // eax
  int v16; // ecx
  struct CVisual *FirstNon; // rax
  int inserted; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  CBaseObject *v21; // rsi
  HRGN v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  int updated; // eax
  int v29; // eax
  __int64 v30; // rax
  CSolidRectangleVisual *v31; // rcx
  LONG v32; // xmm1_4
  LONG v33; // xmm2_4
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+20h] [rbp-40h]
  struct tagRECT v37; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v38; // [rsp+40h] [rbp-20h] BYREF
  HRGN hrgn; // [rsp+48h] [rbp-18h] BYREF
  struct CBaseGeometryProxy *v40; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v1 = *((_QWORD *)this + 87);
  v38 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 737) & 4) != 0 )
  {
    v8 = (CBaseObject **)((char *)this + 544);
    v9 = *(_DWORD *)(v1 + 228) - *(_DWORD *)(v1 + 220);
    v10 = *(_DWORD *)(v1 + 232) - *(_DWORD *)(v1 + 224);
    v37.left = *(_DWORD *)(v1 + 284);
    v11 = 0;
    if ( v9 >= 0 )
      v11 = v9;
    v37.right = v11 - *(_DWORD *)(v1 + 288) - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 268);
    v37.top = *(_DWORD *)(v1 + 292);
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    v37.bottom = v12 - *(_DWORD *)(v1 + 296) - *(_DWORD *)(v1 + 280) - *(_DWORD *)(v1 + 276);
    if ( *(_QWORD *)(v1 + 424) )
    {
      if ( *v8 )
      {
        CBaseObject::Release(*v8);
        *v8 = 0LL;
      }
    }
    else
    {
      v13 = ResourceHelper::CreateRectangleGeometry(&v37, (struct CRectangleGeometryProxy **)this + 68);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xE90u, 0LL);
        return v3;
      }
    }
    v14 = (struct CVisual **)((char *)this + 280);
    if ( !*((_QWORD *)this + 35) )
    {
      v15 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)this + 35);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xE9Bu, 0LL);
        return v3;
      }
      FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CLegacyNonClientBackground,CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                     v16,
                                     *((_QWORD *)this + 32),
                                     *((_QWORD *)this + 34),
                                     *((_QWORD *)this + 30),
                                     *((_QWORD *)this + 33));
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 29), *v14, FirstNon);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xE9Eu, 0LL);
        return v3;
      }
      v19 = *((_QWORD *)this + 67);
      if ( v19 )
        CVisual::SetInsetFromParent(*v14, (const struct _MARGINS *)(v19 + 72));
      CTopLevelWindow::UpdateWindowScale(this);
    }
    v20 = *((_QWORD *)this + 87);
    v21 = *(CBaseObject **)(v20 + 424);
    if ( !v21 )
      v21 = *v8;
    v22 = 0LL;
    hrgn = 0LL;
    v23 = *(_QWORD *)(v20 + 24);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v23 + 312LL))(v23, &hrgn);
      v3 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xEABu, 0LL);
        return v3;
      }
      v22 = hrgn;
    }
    if ( v22 )
    {
      v40 = 0LL;
      v25 = ResourceHelper::CreateGeometryFromHRGN(v22, &v38);
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xEB2u, 0LL);
        v4 = v38;
        goto LABEL_46;
      }
      v4 = v38;
      v27 = ResourceHelper::CreateCombinedGeometry(v38, v21, v26, &v40);
      v3 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xEBBu, 0LL);
        goto LABEL_46;
      }
      v5 = v40;
    }
    else
    {
      v5 = v21;
      if ( v21 )
        CBaseObject::AddRef(v21);
    }
    CRectangleVisual::SetRect(*v14, &v37);
    updated = CRectangleVisual::UpdateClip(*v14, v5);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xEC6u, 0LL);
    }
    else
    {
      v29 = CTopLevelWindow::UpdateColorizationColor((CGlassColorizationResources **)this);
      v3 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xEC9u, 0LL);
      }
      else
      {
        v30 = *((_QWORD *)this + 69);
        v31 = *v14;
        *(float *)&v32 = *(float *)(v30 + 32) * *(float *)(v30 + 20);
        *(float *)&v33 = *(float *)(v30 + 32) * *(float *)(v30 + 24);
        *(float *)&v37.left = *(float *)(v30 + 32) * *(float *)(v30 + 16);
        v37.bottom = *(_DWORD *)(v30 + 28);
        v37.top = v32;
        v37.right = v33;
        v34 = CSolidRectangleVisual::UpdateColor(v31, (const struct _D3DCOLORVALUE *)&v37);
        v3 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0xECBu, 0LL);
      }
    }
    goto LABEL_46;
  }
  v6 = (CContainerVisual **)*((_QWORD *)this + 35);
  if ( !v6 )
    return v3;
  v35 = CVisual::RemoveSelfFromParent(v6);
  if ( v35 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xED1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v35,
      v36);
  *((_QWORD *)this + 35) = 0LL;
LABEL_46:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}
