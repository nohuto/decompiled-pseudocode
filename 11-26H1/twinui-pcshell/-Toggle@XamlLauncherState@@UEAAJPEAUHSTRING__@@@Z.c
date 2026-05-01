/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804630F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1802104B0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18021C710 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180249378 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804604DC (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180461A34 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x180461B20 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int *v4; // rdi
  _DWORD *v6; // r14
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h] BYREF
  int *v16; // [rsp+30h] [rbp-28h]
  char v17; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
    return 0LL;
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v4) )
    return 2147942487LL;
  v6 = (_DWORD *)((char *)this + 32);
  v7 = *((_DWORD *)this + 8);
  v15 = v7;
  v16 = v4;
  v17 = 1;
  if ( v7 )
  {
    if ( v7 != 5 )
    {
      if ( v7 == 7 )
      {
        *v6 = 8;
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C5,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v8);
LABEL_15:
          v17 = 0;
          StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            &v15,
            v4 + 16);
          return v9;
        }
      }
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    LOBYTE(v14) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 168LL))(*((_QWORD *)this + 7), &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      if ( (_BYTE)v14 )
      {
        XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this - 8));
      }
      else
      {
        v12 = XamlLauncherState::ShowSearchFromOpenStart((__int64)v4, a2, 1);
        if ( v12 < 0 )
        {
          v9 = v12;
          goto LABEL_15;
        }
      }
      goto LABEL_14;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CC,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)v4);
    *(_WORD *)((char *)this + 1027) = 0;
    *((_BYTE *)this + 1029) = 0;
    *v6 = 6;
    v13 = XamlLauncherState::ShowSearch((XamlLauncherState *)v4, a2);
    if ( v13 >= 0 )
      goto LABEL_14;
    v11 = v13;
  }
  v17 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v15,
    (int *)this + 8);
  return v11;
}
