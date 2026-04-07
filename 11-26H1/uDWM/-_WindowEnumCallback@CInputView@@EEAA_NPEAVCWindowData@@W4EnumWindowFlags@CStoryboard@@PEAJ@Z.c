/*
 * XREFs of ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002E320
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18003DEFC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18003DF3C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18006D5B0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18007B624 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInputView::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CStoryboard *v8; // rcx
  CStoryboard *v9; // rcx
  int v10; // eax
  int v11; // eax
  CWindowPropertyTracker *WPT; // rax
  int v13; // eax
  CWindowPropertyTracker *v14; // rax
  int v15; // eax
  char result; // al
  struct tagRECT v17; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_18;
  v17 = 0LL;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v17);
  v8 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 2);
  if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 2 )
  {
    v9 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 3);
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) == 3
      || (v9 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 25), (*(_DWORD *)(a2 + 744) & 0xFFF) == 0x19) )
    {
      WPT = CStoryboard::_GetWPT(v9);
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(a2 + 40), 0) )
        goto LABEL_18;
      v13 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v17, 1, &v18);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v13,
          0x13D2u,
          0LL);
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    v8 = (CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 26);
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x1A )
    {
      if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x2B )
        goto LABEL_18;
      v10 = (*(__int64 (__fastcall **)(CSlide *))(*(_QWORD *)a1 + 112LL))(a1);
      v11 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v10, &v18);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v11,
          0x13E2u,
          0LL);
      goto LABEL_16;
    }
  }
  v14 = CStoryboard::_GetWPT(v8);
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v14, *(HWND *)(a2 + 40), 1) )
    goto LABEL_18;
  v15 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v17, 0, &v18);
  v4 = v15;
  if ( v15 >= 0 )
  {
LABEL_14:
    *(_BYTE *)(*((_QWORD *)v18 + 5) + 912LL) = 1;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x13DBu, 0LL);
LABEL_16:
  if ( v18 )
    CBaseObject::Release(v18);
LABEL_18:
  result = 1;
  *a4 = v4;
  return result;
}
