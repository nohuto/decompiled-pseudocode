/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803D2794
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D3C10 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803D7190 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1803D76F0 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803D138C (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x1803D2CDC (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803D3380 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1803D3994 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D6F80 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  ExperienceManagerUtils *v9; // r14
  int SpeechTextInputHeight; // r15d
  int v12; // eax
  unsigned int v13; // edi
  HRESULT v14; // eax
  __int64 v15; // rdx
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v17; // rcx
  const wchar_t *v18; // rdi
  wchar_t *v19; // rsi
  wchar_t *v20; // r12
  wchar_t *v21; // r13
  wchar_t *v22; // rax
  int v23; // eax
  int v24; // esi
  HMONITOR v25; // r8
  HMONITOR v26; // r8
  __int64 v27; // rcx
  HMONITOR v28; // r8
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+34h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *newString = 0LL;
  *(_WORD *)((char *)this + 237) = 0;
  v6 = *((float *)this + 49);
  rc.left = (int)v6;
  v7 = *((float *)this + 50);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 51));
  rc.bottom = (int)(float)(v7 + *((float *)this + 52));
  v8 = MonitorFromRect(&rc, 0);
  v9 = (ExperienceManagerUtils *)v8;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8);
  WindowsDeleteString(0LL);
  string2 = 0LL;
  v12 = CortanaDesktopExperienceView::BuildAdditionalArgsString(
          this,
          (HMONITOR)v9,
          (ExperienceManagerUtils *)(unsigned int)SpeechTextInputHeight,
          &string2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v14 = WindowsConcatString(string1, string2, &newStringa);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 1666LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      WindowsDeleteString(newStringa);
LABEL_35:
      newStringa = 0LL;
      goto LABEL_36;
    }
    v14 = WindowsDuplicateString(newStringa, newString);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 1667LL;
      goto LABEL_7;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
    v18 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
        *((_BYTE *)this + 237) = 1;
      v19 = wcsstr(v18, L"StartMode=NotificationAnimation");
      v20 = wcsstr(v18, L"StartMode=Attract");
      v21 = wcsstr(v18, L"QuerySource=LockScreen");
      if ( (wcsstr(v18, L"QuerySource=VoiceActivation")
         || (v22 = wcsstr(v18, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
        && (LOBYTE(v22) = 1, *((_BYTE *)this + 247))
        || *((_BYTE *)this + 237)
        || v19
        || v20
        || v21 )
      {
        *((_BYTE *)this + 238) = 1;
      }
      if ( (_BYTE)v22 && !*((_BYTE *)this + 238) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 244) = wcsstr(v18, L"&QuerySource=StartButton") != 0LL;
      if ( v19 )
      {
        v23 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6AD,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v23);
          WindowsDeleteString(newStringa);
          v13 = v24;
          goto LABEL_35;
        }
      }
    }
    if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v17) && *((_DWORD *)this + 35) == 6 )
    {
      CortanaFeatureConfiguration::GetDWORD(0LL, &v32);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x384,
                                       v9,
                                       v26);
      v27 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
    }
    else
    {
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x140,
                                       v9,
                                       v25);
      if ( wcsstr(v18, L"StartMode=QFSearchBox") || wcsstr(v18, L"StartMode=NotificationAnimation") )
        goto LABEL_34;
      v27 = 656LL;
    }
    SpeechTextInputHeight = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v27, v9, v28);
LABEL_34:
    *((float *)this + 54) = (float)SpeechTextInputHeight;
    WindowsDeleteString(newStringa);
    v13 = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x67F,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v12);
LABEL_36:
  WindowsDeleteString(string2);
  return v13;
}
