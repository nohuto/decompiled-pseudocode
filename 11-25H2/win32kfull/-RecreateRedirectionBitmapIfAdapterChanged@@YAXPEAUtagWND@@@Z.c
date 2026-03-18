/*
 * XREFs of ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140287508
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x1402874B8 (-GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z.c)
 */

void __fastcall RecreateRedirectionBitmapIfAdapterChanged(struct tagWND *a1)
{
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // si
  bool v10; // bp
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _LUID v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 27) & 0x20) != 0 && (*(_BYTE *)(v2 + 26) & 0x20) == 0 )
  {
    v3 = *(Gre::Base **)a1;
    v19 = 0LL;
    if ( GetRenderAdapterLuidForWindow(v3, &v19) )
    {
      v5 = *((_QWORD *)a1 + 5);
      v20 = 0LL;
      v6 = ValidateHmonitorNoRip(*(_QWORD *)(v5 + 256), v4);
      if ( (int)DrvGetRenderAdapterLuidFromHDEV(*(_QWORD *)(v6 + 80), &v20) >= 0 && v20 != v19 )
      {
        *((_DWORD *)a1 + 95) &= ~0x20000u;
        v8 = *(_QWORD *)&WPP_GLOBAL_Control;
        v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v11 = *(_QWORD *)a1;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v13) = v10;
          LOBYTE(v14) = v9;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v14,
            v13,
            *(_QWORD *)(UserSessionState + 69160),
            4,
            7,
            11,
            (__int64)&WPP_6d10b4c26386318284d747cce75ed676_Traceguids,
            v11);
        }
        v15 = W32GetUserSessionState(v8, v7);
        GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 48LL));
        RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0LL);
        v18 = W32GetUserSessionState(v17, v16);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v18 + 56968) + 48LL));
      }
    }
  }
}
