/*
 * XREFs of SelectWindowRgn @ 0x14005B5EC
 * Callers:
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1401BD758 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1402A0A60 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14005BCE4 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401CB648 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v5; // bp
  __int64 v6; // r9
  __int64 MonitorRegionForDpi; // rsi
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // bp
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != 0LL;
  if ( tagWND::GetExplicitClipRgn(a1) && v6 == 2 )
    return;
  MonitorRegionForDpi = 0LL;
  v8 = 1;
  if ( v6 != 1 )
    MonitorRegionForDpi = v6;
  SetOrClrWF(0, a1, 0x508u, 1);
  tagWND::ClearClipRgnOrMaxClip(a1);
  if ( MonitorRegionForDpi == 2 )
  {
    MonitorRegionForDpi = 0LL;
    if ( ***(_DWORD ***)(W32GetUserSessionState(v10, v9) + 56968) > 1u )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 31) & 1) != 0 && (*(_BYTE *)(v11 + 19) & 0x40) != 0 )
      {
        if ( _MonitorFromWindowInternal(a1, 0, 0) )
        {
          WindowCompositedDpi = GetWindowCompositedDpi(a1);
          MonitorRegionForDpi = CreateMonitorRegionForDpi(v13, WindowCompositedDpi);
          if ( MonitorRegionForDpi )
          {
            SetOrClrWF(1, a1, 0x508u, 1);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v8 = 0;
            }
            v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
              LOBYTE(v21) = v19;
              LOBYTE(v22) = v8;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v22,
                v21,
                *(_QWORD *)(UserSessionState + 69160),
                4,
                8,
                34,
                (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                (char)a1);
            }
            goto LABEL_7;
          }
        }
      }
    }
LABEL_15:
    if ( !v5 )
      return;
    goto LABEL_16;
  }
  if ( !MonitorRegionForDpi )
    goto LABEL_15;
  GreOffsetRgn(
    MonitorRegionForDpi,
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
LABEL_7:
  GreSetRegionOwner(MonitorRegionForDpi, 0LL);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = MonitorRegionForDpi;
LABEL_16:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( IsTopLevelWindow((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      v16 = *(_QWORD *)a1;
      v17 = W32GetUserSessionState(v15, v14);
      GreUpdateSpriteClipRgn(*(_QWORD *)(*(_QWORD *)(v17 + 56968) + 48LL), v16, MonitorRegionForDpi, a3);
    }
    DirtyVisRgnTrackers(a1, v14);
  }
}
