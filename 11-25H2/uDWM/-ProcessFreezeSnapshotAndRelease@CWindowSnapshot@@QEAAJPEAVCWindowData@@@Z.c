/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x1800130FC (-Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x180013350 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800169E8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001BF5C (-OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001CA94 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001E45C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ED6C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800211D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800212A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18002773C (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800445A4 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180052A4C (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180052E4C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18006F768 (-CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  CMILRefCountBase *v4; // r15
  CBaseObject *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // eax
  CTopLevelWindow *v9; // r14
  int RectResourceProxy; // ebx
  __int64 v11; // rcx
  struct IDwmWindow *v12; // rax
  int v13; // eax
  struct CWindowData *RepresentationWindowData; // rax
  LONG v15; // r9d
  LONG v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  LONG v19; // eax
  int v20; // r9d
  LONG v21; // ecx
  int v22; // eax
  __int64 i; // rax
  int v24; // r15d
  __int64 v25; // rdx
  float ScalingFactorForCVI; // xmm0_4
  int Brush; // eax
  CSizeResourceProxy *v28; // rcx
  int v29; // r9d
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  float v33; // xmm1_4
  bool v34; // sf
  __m128i v35; // xmm0
  FLOAT width; // eax
  float v37; // xmm0_4
  int v38; // eax
  CVisual **v39; // r15
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  CBaseObject *v43; // rcx
  struct CRectangleGeometryProxy **v45; // [rsp+20h] [rbp-59h]
  struct CRectangleGeometryProxy **v46; // [rsp+20h] [rbp-59h]
  unsigned int v47; // [rsp+20h] [rbp-59h]
  struct D2D_SIZE_F v48; // [rsp+40h] [rbp-39h] BYREF
  CMILRefCountBase *v49; // [rsp+48h] [rbp-31h] BYREF
  int v50; // [rsp+50h] [rbp-29h]
  struct tagRECT v51; // [rsp+58h] [rbp-21h] BYREF
  int v52[2]; // [rsp+68h] [rbp-11h] BYREF
  int v53; // [rsp+70h] [rbp-9h]
  int v54; // [rsp+74h] [rbp-5h]
  CBaseObject *v55; // [rsp+78h] [rbp-1h] BYREF
  int v56; // [rsp+80h] [rbp+7h]
  struct D2D_RECT_F v57; // [rsp+88h] [rbp+Fh] BYREF

  v4 = a2;
  v49 = 0LL;
  v5 = 0LL;
  v55 = 0LL;
  v6 = *((_QWORD *)this + 4);
  v7 = 0LL;
  v48 = 0LL;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v8 = CTopLevelWindow::Create(*((struct CWindowData **)this + 4), (CBaseObject ***)&v49);
  v9 = v49;
  RectResourceProxy = v8;
  if ( v8 < 0 )
  {
    v47 = 181;
    goto LABEL_60;
  }
  v11 = *((_QWORD *)v4 + 3);
  if ( v11 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11) )
    {
      v12 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 3) + 352LL))(*((_QWORD *)v4 + 3));
      if ( v12 )
      {
        v49 = 0LL;
        CWindowList::GetSyncedWindowData(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
          v12,
          0,
          &v49);
        v4 = v49;
      }
    }
  }
  *((_QWORD *)a2 + 60) = 0LL;
  LODWORD(v45) = 100;
  v13 = CSecondaryWindowRepresentation::Create(
          1543LL,
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          (__int64)v4,
          0,
          v45,
          (CBaseObject **)&v48);
  RectResourceProxy = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xCCu, 0LL);
    v7 = (__int64)v48;
    goto LABEL_61;
  }
  v7 = (__int64)v48;
  RectResourceProxy = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)&v48);
  if ( RectResourceProxy < 0 )
  {
    v47 = 206;
    goto LABEL_60;
  }
  RectResourceProxy = CCompositor::CreateRectResourceProxy(
                        *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                        (struct CRectResourceProxy **)this + 7);
  if ( RectResourceProxy < 0 )
  {
    v47 = 209;
    goto LABEL_60;
  }
  CSecondaryWindowRepresentation::GetRelativeWindowRect((CSecondaryWindowRepresentation *)v7, &v51);
  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CWindowRepresentation *)(v7 + 64));
  v15 = v51.right - *((_DWORD *)RepresentationWindowData + 24);
  v16 = *((_DWORD *)RepresentationWindowData + 24) + v51.left;
  v17 = *((_QWORD *)RepresentationWindowData + 13);
  v18 = v17 + v51.top;
  v19 = v51.bottom - HIDWORD(v17);
  v51.right = v15;
  v51.bottom = v19;
  v51.top += v17;
  v20 = v15 - v16;
  LODWORD(v49) = v20;
  v21 = v19;
  v51.left = v16;
  if ( v20 < 0 )
    v20 = 0;
  *(_QWORD *)v52 = 0LL;
  v56 = v20;
  v22 = v19 - v18;
  LODWORD(v48.width) = v21 - v18;
  v57 = 0LL;
  if ( v22 < 0 )
    v22 = 0;
  v50 = v22;
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)&v57.left + i) = (float)*(int *)((char *)&v51.left + i);
  RectResourceProxy = CRectResourceProxy::Update(*((CRectResourceProxy **)this + 7), &v57);
  if ( RectResourceProxy < 0 )
  {
    v47 = 226;
    goto LABEL_60;
  }
  v24 = v56;
  RectResourceProxy = ResourceHelper::CreateRectangleGeometry(
                        0,
                        0,
                        v56,
                        v50,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectResourceProxy < 0 )
  {
    v47 = 228;
    goto LABEL_60;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v51);
  *((float *)this + 18) = ScalingFactorForCVI;
  v53 = (int)(float)((float)v24 * ScalingFactorForCVI);
  v54 = (int)(float)((float)v50 * ScalingFactorForCVI);
  if ( !*((_QWORD *)this + 6) )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v24 * ScalingFactorForCVI),
      (int)(float)((float)v50 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  Brush = CSecondaryWindowRepresentation::GetBrush(
            v7,
            v25,
            (struct CSizeResourceProxy **)this + 7,
            0LL,
            (__int64)v46,
            (CBaseObject **)this + 8,
            (CMILRefCountBase **)this + 6,
            (CBaseObject **)this + 5);
  RectResourceProxy = Brush;
  if ( Brush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0xF7u, 0LL);
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v7 + 161) )
  {
    v31 = (unsigned int)v49;
    v32 = 0;
    v33 = *(float *)(v7 + 368);
    v34 = (int)v49 < 0;
    *((float *)this + 18) = v33;
    if ( !v34 )
      v32 = v31;
    v35 = _mm_cvtsi32_si128(v32);
    width = 0.0;
    LODWORD(v37) = _mm_cvtepi32_ps(v35).m128_u32[0];
    if ( v48.width >= 0.0 )
      width = v48.width;
    v30 = (int)(float)(v37 * v33);
    v29 = (int)(float)((float)SLODWORD(width) * v33);
  }
  else
  {
    v28 = (CSizeResourceProxy *)*((_QWORD *)this + 8);
    v48.width = (float)v53;
    v48.height = (float)v54;
    RectResourceProxy = CSizeResourceProxy::Update(v28, &v48);
    if ( RectResourceProxy < 0 )
    {
      v47 = 254;
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectResourceProxy, v47, 0LL);
      goto LABEL_61;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      (CSecondaryWindowRepresentation *)v7,
      *((struct CCachedVisualImageProxy **)this + 6),
      *((struct CImageLegacyMilBrushProxy **)this + 5),
      (const struct D2D_POINTANDSIZE_L *)v52);
    v29 = v54;
    v30 = v53;
  }
  RectResourceProxy = ResourceHelper::CreateRectangleGeometry(
                        v52[0],
                        v52[1],
                        v30,
                        v29,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectResourceProxy < 0 )
  {
    v47 = 265;
    goto LABEL_60;
  }
  RectResourceProxy = CContainerVisual::Create((struct CContainerVisual **)this + 12);
  if ( RectResourceProxy < 0 )
  {
    v47 = 267;
    goto LABEL_60;
  }
  v38 = CDrawGeometryInstruction::Create(
          *((struct CBaseLegacyMilBrushProxy **)this + 5),
          *((struct CBaseGeometryProxy **)this + 11),
          &v55);
  RectResourceProxy = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x110u, 0LL);
    goto LABEL_50;
  }
  v39 = (CVisual **)((char *)this + 80);
  v40 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
  RectResourceProxy = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x112u, 0LL);
LABEL_50:
    v5 = v55;
    goto LABEL_61;
  }
  CVisual::SetScale(*v39, 1.0 / *((float *)this + 18), 1.0 / *((float *)this + 18));
  CVisual::SetInterpolationMode((__int64 *)*v39, 1);
  v5 = v55;
  RectResourceProxy = CRenderDataVisual::AddInstruction(*v39, v55);
  if ( RectResourceProxy < 0 )
  {
    v47 = 278;
    goto LABEL_60;
  }
  RectResourceProxy = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v39 + 48LL))(*v39);
  if ( RectResourceProxy < 0 )
  {
    v47 = 279;
    goto LABEL_60;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 144LL) = *(_QWORD *)(*((_QWORD *)this + 12) + 16LL);
  RectResourceProxy = CContainerVisual::AddChild(*((CContainerVisual **)this + 12), *v39);
  if ( RectResourceProxy < 0 )
  {
    v47 = 283;
    goto LABEL_60;
  }
  CTopLevelWindow::OnClientAreaUpdated(v9);
  CTopLevelWindow::OnClientMarginsUpdated(v9);
  RectResourceProxy = CTopLevelWindow::ShowWindow(v9, 1);
  if ( RectResourceProxy < 0 )
  {
    v47 = 288;
    goto LABEL_60;
  }
  RectResourceProxy = CContainerVisual::RenderRecursive(v9, v41, v42);
  if ( RectResourceProxy < 0 )
  {
    v47 = 289;
    goto LABEL_60;
  }
  v43 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v43 )
    CBaseObject::Release(v43);
  *((_QWORD *)this + 3) = v9;
  if ( v9 )
    CMILRefCountBase::AddRef(v9);
  *((_QWORD *)a2 + 60) = this;
  *(_BYTE *)(*((_QWORD *)this + 4) + 676LL) &= ~8u;
LABEL_61:
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  return (unsigned int)RectResourceProxy;
}
