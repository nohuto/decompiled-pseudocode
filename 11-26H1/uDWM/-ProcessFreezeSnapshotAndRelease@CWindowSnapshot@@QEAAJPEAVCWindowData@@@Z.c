/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180010644 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180017330 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180070B00 (-OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z @ 0x18009BAE8 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BF784 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  CBaseObject *v5; // rdi
  CSecondaryWindowRepresentation *v6; // r14
  int v7; // eax
  CTopLevelWindow *v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct IDwmWindow *v11; // rax
  int v12; // eax
  int v13; // eax
  struct CWindowData *RepresentationWindowData; // rax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // edi
  float ScalingFactorForCVI; // xmm0_4
  int v20; // eax
  float v21; // xmm6_4
  int v22; // eax
  float v23; // xmm7_4
  int SharedVisualBrush; // eax
  int v25; // eax
  int v26; // eax
  float v27; // xmm1_4
  int v28; // eax
  CVisual **v29; // rdi
  int v30; // eax
  __int64 v31; // r8
  CRectangleVisual *v32; // rcx
  LONG v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  CBaseObject *v38; // rcx
  CBaseObject *v40; // [rsp+38h] [rbp-39h] BYREF
  CSecondaryWindowRepresentation *v41; // [rsp+40h] [rbp-31h] BYREF
  struct tagRECT v42; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v43; // [rsp+58h] [rbp-19h] BYREF

  v2 = *((_QWORD *)this + 4);
  v40 = 0LL;
  v41 = 0LL;
  v5 = a2;
  v6 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v7 = CTopLevelWindow::Create(*((struct CWindowData **)this + 4), &v40);
  v8 = v40;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xA9u, 0LL);
  }
  else
  {
    v10 = *((_QWORD *)v5 + 3);
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10) )
      {
        v11 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 3) + 352LL))(*((_QWORD *)v5 + 3));
        if ( v11 )
        {
          v40 = 0LL;
          CWindowList::GetSyncedWindowData(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            v11,
            0,
            &v40);
          v5 = v40;
        }
      }
    }
    *((_QWORD *)a2 + 60) = 0LL;
    v12 = CSecondaryWindowRepresentation::Create(
            1543LL,
            ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
            (__int64)v5,
            0,
            100,
            &v41);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u, 0LL);
      v6 = v41;
    }
    else
    {
      v6 = v41;
      v13 = CSecondaryWindowRepresentation::Validate(v41);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC2u, 0LL);
      }
      else
      {
        CSecondaryWindowRepresentation::GetRelativeWindowRect(v6, &v42);
        RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v6 + 64));
        v15 = *((_DWORD *)RepresentationWindowData + 24) + v42.left;
        v16 = *((_QWORD *)RepresentationWindowData + 13);
        v42.right -= *((_DWORD *)RepresentationWindowData + 24);
        v17 = v42.right - v15;
        v42.left = v15;
        v42.bottom -= HIDWORD(v16);
        v18 = v42.bottom - (v16 + v42.top);
        v42.top += v16;
        *(_QWORD *)&v43.left = 0LL;
        ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v42);
        v20 = 0;
        *((float *)this + 14) = ScalingFactorForCVI;
        if ( v17 >= 0 )
          v20 = v17;
        v21 = (float)v20;
        LODWORD(v40) = (int)(float)((float)v20 * ScalingFactorForCVI);
        v43.right = (int)v40;
        v22 = 0;
        if ( v18 >= 0 )
          v22 = v18;
        v23 = (float)v22;
        LODWORD(v41) = (int)(float)((float)v22 * ScalingFactorForCVI);
        v43.bottom = (int)v41;
        SharedVisualBrush = CSecondaryWindowRepresentation::GetSharedVisualBrush(
                              v6,
                              (CWindowSnapshot *)((char *)this + 40));
        v9 = SharedVisualBrush;
        if ( SharedVisualBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SharedVisualBrush, 0xD6u, 0LL);
        }
        else
        {
          v25 = CVisualBrush::SetViewbox((CWindowSnapshot *)((char *)this + 40), &v42);
          v9 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xD7u, 0LL);
          }
          else
          {
            if ( *((_BYTE *)v6 + 161) )
            {
              v27 = *((float *)v6 + 50);
              *((float *)this + 14) = v27;
              LODWORD(v40) = (int)(float)(v27 * v21);
              LODWORD(v41) = (int)(float)(v27 * v23);
            }
            else
            {
              v42.left = (int)v40;
              v42.top = (int)(float)(v23 * ScalingFactorForCVI);
              v26 = CVisualBrush::SetRealizationSize(
                      (CWindowSnapshot *)((char *)this + 40),
                      (const struct tagSIZE *)&v42);
              v9 = v26;
              if ( v26 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xDCu, 0LL);
                goto LABEL_41;
              }
              CSecondaryWindowRepresentation::SnapshotIfStatic(
                v6,
                (CWindowSnapshot *)((char *)this + 40),
                (const struct D2D_POINTANDSIZE_L *)&v43);
            }
            v28 = CContainerVisual::Create((struct CContainerVisual **)this + 9);
            v9 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xE6u, 0LL);
            }
            else
            {
              v29 = (CVisual **)((char *)this + 64);
              v30 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)this + 8);
              v9 = v30;
              if ( v30 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xE7u, 0LL);
              }
              else
              {
                CVisual::SetScale(*v29, 1.0 / *((float *)this + 14), 1.0 / *((float *)this + 14));
                CVisual::SetInterpolationMode((__int64)*v29, 1LL, v31);
                v32 = *v29;
                v33 = (int)v40;
                v43.bottom = (int)v41;
                *(_QWORD *)&v43.left = 0LL;
                v43.right = (int)v40;
                CRectangleVisual::SetRect(v32, &v43);
                v43.bottom = (int)v41;
                *(_QWORD *)&v43.left = 0LL;
                v43.right = v33;
                v34 = CSurfaceBrush::ApplyViewportTransformForView((CWindowSnapshot *)((char *)this + 40), &v43);
                v9 = v34;
                if ( v34 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0xEDu, 0LL);
                }
                else
                {
                  v35 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
                          (__int64)*v29,
                          *((_QWORD *)this + 5));
                  v9 = v35;
                  if ( v35 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xEEu, 0LL);
                  }
                  else
                  {
                    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)*v29 + 48LL))(*v29);
                    *(_QWORD *)(*((_QWORD *)this + 4) + 144LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
                    v36 = CContainerVisual::AddChild(*((CContainerVisual **)this + 9), *v29);
                    v9 = v36;
                    if ( v36 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xF3u, 0LL);
                    }
                    else
                    {
                      CTopLevelWindow::OnClientAreaUpdated(v8);
                      CTopLevelWindow::OnClientMarginsUpdated(v8);
                      v37 = CTopLevelWindow::ShowWindow(v8, 1);
                      v9 = v37;
                      if ( v37 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0xF8u, 0LL);
                      }
                      else
                      {
                        CContainerVisual::RenderRecursive(v8);
                        v38 = (CBaseObject *)*((_QWORD *)this + 3);
                        if ( v38 )
                          CBaseObject::Release(v38);
                        *((_QWORD *)this + 3) = v8;
                        if ( v8 )
                          CBaseObject::AddRef(v8);
                        *((_QWORD *)a2 + 60) = this;
                        *(_BYTE *)(*((_QWORD *)this + 4) + 740LL) &= ~8u;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_41:
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
