/*
 * XREFs of ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x1402948FC
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 * Callees:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x140245790 (-GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z.c)
 */

void __fastcall RecreateRedirectionBitmapIfAdapterChanged(struct tagWND *a1)
{
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct MOVESIZEDATA *v8; // rcx
  bool v9; // si
  bool v10; // bp
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  struct _LUID v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 27) & 0x20) != 0 && (*(_BYTE *)(v2 + 26) & 0x20) == 0 )
  {
    v3 = *(Gre::Base **)a1;
    v16 = 0LL;
    if ( GetRenderAdapterLuidForWindow(v3, &v16) )
    {
      v4 = *((_QWORD *)a1 + 5);
      v17 = 0LL;
      v5 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      if ( (int)DrvGetRenderAdapterLuidFromHDEV(*(_QWORD *)(v5 + 80), &v17) >= 0 && v17 != v16 )
      {
        *((_DWORD *)a1 + 95) &= ~0x20000u;
        v8 = WPP_GLOBAL_Control;
        v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v11 = *(_QWORD *)a1;
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
          LOBYTE(v13) = v10;
          LOBYTE(v14) = v9;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            7,
            11,
            (__int64)&WPP_187490f2602e36ab8c53117a82f31e3f_Traceguids,
            v11);
        }
        GreLockVisRgn(v8, v6, v7);
        RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0LL);
        GreUnlockVisRgn(v15);
      }
    }
  }
}
