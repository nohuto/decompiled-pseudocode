/*
 * XREFs of ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18003DEFC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18003DF3C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18006D5B0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800C2BD8 (-StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInputView_SizeOrModeChangeBase::_WindowEnumCallback(
        CInputView_SizeOrModeChangeBase *a1,
        __int64 a2,
        char a3,
        int *a4)
{
  int v4; // ebx
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  CWindowPropertyTracker *v11; // rax
  int v12; // eax
  CWindowPropertyTracker *WPT; // rax
  int started; // eax
  char result; // al
  struct tagRECT v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( (a3 & 1) != 0 )
  {
    v16 = 0LL;
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v16);
    switch ( *(_DWORD *)(a2 + 744) & 0xFFF )
    {
      case 25:
        WPT = CStoryboard::_GetWPT((CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 25));
        if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(a2 + 40), 0) )
        {
          started = CInputView_SizeOrModeChangeBase::StartThemeAnimation(a1, (struct CWindowData *)a2);
          v4 = started;
          if ( started < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              started,
              0x1410u,
              0LL);
        }
        break;
      case 26:
        v11 = CStoryboard::_GetWPT((CStoryboard *)((*(_DWORD *)(a2 + 744) & 0xFFFu) - 26));
        if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v11, *(HWND *)(a2 + 40), 1) )
        {
          v12 = CInputView_SizeOrModeChangeBase::StartThemeAnimation(a1, (struct CWindowData *)a2);
          v4 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v12,
              0x1417u,
              0LL);
        }
        break;
      case 43:
        v9 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *))(*(_QWORD *)a1 + 112LL))(a1);
        v10 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                a1,
                (struct CWindowData *)a2,
                v9,
                (struct CAnimationComponent **)&v16);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v10,
            0x141Fu,
            0LL);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1423,
          (int)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
          v8);
    }
  }
  result = 1;
  *a4 = v4;
  return result;
}
