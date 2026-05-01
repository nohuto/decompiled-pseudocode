/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BA190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800BA3AC (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1800BA754 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BBBDC (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180289A3C (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBURect@Foundation@Windows@@11@Z @ 0x1804790EC (-EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBURect@Foundatio.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18047A424 (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
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
    v10 = 918LL;
    goto LABEL_11;
  }
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)v17;
  v15[0] = 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 16) + 240LL))(*((_QWORD *)this + 16), v15);
  if ( v15[0] && (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
  {
    KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(this, v19);
    v18 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 16) + 312LL))(*((_QWORD *)this + 16), &v18);
    v13 = (const unsigned __int16 *)v19;
    if ( v19[3] > (unsigned __int16 *)7 )
      v13 = v19[0];
    if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled(v12, v11) )
    {
      TouchKeyboardExperienceTelemetryLogger::Instance();
      TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(
        v14,
        v13,
        (const struct Windows::Foundation::Rect *)&v18,
        (const struct Windows::Foundation::Rect *)v17,
        (KeyboardHosting::TabTipAdapter *)((char *)this + 472));
    }
    std::wstring::_Tidy_deallocate(v19);
  }
  v16 = 0;
  v5 = *((_QWORD *)this + 15);
  v18 = *(_OWORD *)v17;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *))(*(_QWORD *)v5 + 80LL))(v5, &v18, &v16);
  if ( v4 < 0 )
  {
    v10 = 935LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    LODWORD(v18) = (int)v17[0];
    DWORD1(v18) = (int)v17[1];
    DWORD2(v18) = (int)(float)(v17[2] + v17[0]);
    HIDWORD(v18) = (int)(float)(v17[3] + v17[1]);
    v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 48LL))(v6, &v18);
    if ( v4 < 0 )
    {
      v10 = 938LL;
      goto LABEL_11;
    }
  }
  if ( v16 != 3 )
    return 0LL;
  if ( (unsigned int)KeyboardHosting::TabTipAdapter::GetInputAppState(this) != 1 )
    return 0LL;
  v7 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B2,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
