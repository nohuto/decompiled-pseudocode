/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800946D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180037E34 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800948EC (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18009496C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x180097540 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180293498 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundation@Windows@@11@Z @ 0x18046BA34 (-EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundatio.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18046C69C (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int128 *); // r8
  const unsigned __int16 *v13; // rdi
  TouchKeyboardExperienceTelemetryLogger *v14; // rcx
  _BYTE v15[4]; // [rsp+30h] [rbp-9h] BYREF
  int v16; // [rsp+34h] [rbp-5h] BYREF
  float v17[6]; // [rsp+38h] [rbp-1h] BYREF
  __int128 v18; // [rsp+50h] [rbp+17h] BYREF
  unsigned __int16 *v19[4]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *(_OWORD *)v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, float *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v17);
  if ( v4 < 0 )
  {
    v11 = 902LL;
    goto LABEL_11;
  }
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)v17;
  v15[0] = 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 16) + 240LL))(*((_QWORD *)this + 16), v15);
  if ( v15[0] && (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
  {
    KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(this, v19);
    v18 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 16) + 304LL))(*((_QWORD *)this + 16), &v18);
    v13 = (const unsigned __int16 *)v19;
    if ( v19[3] > (unsigned __int16 *)7 )
      v13 = v19[0];
    if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
    {
      TouchKeyboardExperienceTelemetryLogger::Instance();
      TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(
        v14,
        v13,
        (struct Windows::Foundation::Rect *)&v18,
        (struct Windows::Foundation::Rect *)v17,
        (KeyboardHosting::TabTipAdapter *)((char *)this + 472));
    }
    std::wstring::_Tidy_deallocate((void **)v19);
  }
  v16 = 0;
  v5 = (__int64 *)*((_QWORD *)this + 15);
  v6 = *v5;
  v18 = *(_OWORD *)v17;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v6 + 80))(v5, &v18, &v16);
  if ( v4 < 0 )
  {
    v11 = 919LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 48LL);
    LODWORD(v18) = (int)v17[0];
    DWORD1(v18) = (int)v17[1];
    DWORD2(v18) = (int)(float)(v17[2] + v17[0]);
    HIDWORD(v18) = (int)(float)(v17[3] + v17[1]);
    v4 = v12(v7, &v18);
    if ( v4 < 0 )
    {
      v11 = 922LL;
      goto LABEL_11;
    }
  }
  if ( v16 != 3 )
    return 0LL;
  if ( (unsigned int)KeyboardHosting::TabTipAdapter::GetInputAppState(this) != 1 )
    return 0LL;
  v8 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A2,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
