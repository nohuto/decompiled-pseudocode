/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C3A7C
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C2750 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C80E0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  CAnimatedTransitionVisual *v5; // rsi
  int v7; // eax
  int v8; // ecx
  int v11; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  struct CVisual *RootVisualForDesktop; // rbp
  void *v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  CAnimatedTransitionVisual *v21; // rcx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  CAnimatedTransitionVisual *v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  void *v28; // [rsp+48h] [rbp-40h]

  v5 = 0LL;
  v26 = 0LL;
  v7 = 0;
  v8 = a3->right - a3->left;
  v25 = 0LL;
  if ( v8 >= 0 )
    v7 = v8;
  v11 = a3->bottom - a3->top;
  LODWORD(v27) = v7;
  v13 = 0;
  if ( v11 >= 0 )
    v13 = v11;
  HIDWORD(v27) = v13;
  if ( !(unsigned int)GetDesktopID(1LL, &v25) )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x125Du,
      0LL);
    return v14;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v25);
  v16 = CAnimationComponent::operator new();
  v28 = v16;
  if ( v16 )
  {
    v17 = CAnimationComponent::CAnimationComponent((__int64)v16, 0LL, *((_DWORD *)a2 + 186) & 0xFFF, 1, (__int64)this);
    if ( v17 )
    {
      v18 = CAnimatedTransitionVisual::Create(&v26);
      v5 = v26;
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v18,
          0x1267u,
          0LL);
        goto LABEL_19;
      }
      v19 = CAnimatedTransitionVisual::SetVisual(v26, RootVisualForDesktop, 1, a3);
      v14 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v19,
          0x1268u,
          0LL);
        goto LABEL_19;
      }
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v5, *((_DWORD *)this + 18), 1);
      v20 = v27;
      *((_QWORD *)v5 + 110) = 0LL;
      *((_QWORD *)v5 + 111) = v20;
      CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v17, v5);
      *(struct tagRECT *)(v17 + 88) = *a3;
      if ( a4 )
      {
        v21 = *(CAnimatedTransitionVisual **)(v17 + 40);
        *(_BYTE *)(v17 + 67) = 1;
        v22 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v21, RootVisualForDesktop);
        v14 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v22,
            0x1274u,
            0LL);
          goto LABEL_19;
        }
        v23 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v14 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v23,
            0x1275u,
            0LL);
LABEL_19:
          CBaseObject::Release((CBaseObject *)v17);
          goto LABEL_21;
        }
      }
      *a5 = (struct CAnimationComponent *)v17;
      CBaseObject::AddRef((CBaseObject *)v17);
      goto LABEL_19;
    }
  }
  v14 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147024882,
    0x1265u,
    0LL);
LABEL_21:
  if ( v5 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v5 + 8));
  return v14;
}
