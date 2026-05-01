/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180249110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1802104B0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18021C710 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180249378 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FFF8 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180461A34 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  XamlLauncherState *v4; // rbx
  char *v6; // rsi
  int v7; // edx
  unsigned int v8; // r14d
  int v9; // edi
  char *v10; // rdx
  int v11; // eax
  int v12; // eax
  const wchar_t *StringRawBuffer; // rax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  XamlLauncherState *v17; // [rsp+28h] [rbp-18h]
  char v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v20; // [rsp+60h] [rbp+20h] BYREF

  v4 = (XamlLauncherState *)((char *)this - 32);
  if ( XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
    return 0LL;
  if ( XamlLauncherState::IsSearchDisabledByPolicy(v4) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 1027) = 0;
  v6 = (char *)this + 32;
  v7 = *((_DWORD *)this + 8);
  v16 = v7;
  v17 = v4;
  v8 = 1;
  v18 = 1;
  if ( !v7 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)v4);
    *((_BYTE *)this + 1029) = 0;
    *(_DWORD *)v6 = 6;
    v15 = XamlLauncherState::ShowSearch(v4, a2);
    if ( v15 >= 0 )
      goto LABEL_14;
    v9 = v15;
    goto LABEL_19;
  }
  if ( v7 != 5 )
  {
    if ( v7 == 6 || v7 == 7 || v7 == 12 || v7 == 13 || v7 == 14 )
      goto LABEL_22;
    if ( v7 != 16 )
    {
      if ( v7 != 22 )
        goto LABEL_14;
LABEL_22:
      if ( v7 == 7 )
      {
        v20 = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 480LL))(*((_QWORD *)this + 7), &v20);
        if ( v12 >= 0 )
        {
          if ( v20 )
          {
            XamlLauncherState::PostCortanaOrSearchVisibility(v4, 0, *((_QWORD *)this + 130));
            v8 = 7;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x52F,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
             *((_QWORD *)this + 7),
             a2,
             v8);
      if ( v9 < 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)v4);
    *(_DWORD *)v6 = 17;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 8LL);
    v9 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v6 = 6;
      v9 = XamlLauncherState::ShowSearch(v4, a2);
      if ( v9 >= 0 )
        goto LABEL_14;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51F,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v11);
    }
LABEL_19:
    v10 = v6;
    goto LABEL_16;
  }
  if ( a2 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"QuerySource=StartSearchBox") )
        v8 = 2;
    }
  }
  v14 = XamlLauncherState::ShowSearchFromOpenStart(v4, a2, v8);
  if ( v14 < 0 )
  {
    v9 = v14;
    goto LABEL_15;
  }
LABEL_14:
  v9 = 0;
LABEL_15:
  v10 = (char *)v4 + 64;
LABEL_16:
  v18 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v16,
    v10);
  return (unsigned int)v9;
}
