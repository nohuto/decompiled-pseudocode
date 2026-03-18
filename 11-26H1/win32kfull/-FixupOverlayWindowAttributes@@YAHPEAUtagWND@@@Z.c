/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1402ACA20
 * Callers:
 *     _NotifyOverlayWindow @ 0x1402AD3C0 (_NotifyOverlayWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CBA78 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  struct tagWND *TopLevelWindow; // rax
  struct tagWND *v3; // rsi
  int v4; // ebp
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r14
  __int64 *i; // rdi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  v3 = TopLevelWindow;
  if ( TopLevelWindow )
  {
    if ( (*((_DWORD *)TopLevelWindow + 95) & 0x10000) != 0 )
    {
      v4 = 1;
LABEL_12:
      v11 = 0LL;
      LODWORD(v11) = v4;
      v12 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(
                          v3,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v11) >= 0;
      return v1;
    }
    v4 = 0;
    v5 = BuildHwndList(TopLevelWindow, 1LL, 0LL, 1);
    v7 = v5;
    if ( v5 )
    {
      for ( i = (__int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        v9 = HMValidateHandleNoSecure(*i, 1);
        if ( v9 && (*(_DWORD *)(v9 + 380) & 0x10000) != 0 )
        {
          v4 = 1;
          break;
        }
      }
      FreeHwndList(v7, v6);
      goto LABEL_12;
    }
  }
  return v1;
}
