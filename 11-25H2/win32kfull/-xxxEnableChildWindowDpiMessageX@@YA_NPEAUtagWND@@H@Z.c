/*
 * XREFs of ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     NtUserEnableChildWindowDpiMessage @ 0x1401E8A10 (NtUserEnableChildWindowDpiMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 */

char __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r10d
  struct tagMONITOR *v7; // rdx
  __int64 v8; // rax
  unsigned __int16 v9; // si
  struct tagBWL *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)a1) )
    return 0;
  if ( v6 )
  {
    *((_DWORD *)a1 + 95) |= 0x180000u;
    v7 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v5 + 256), v3);
  }
  else
  {
    *((_DWORD *)a1 + 95) &= 0xFFE7FFFF;
    v7 = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968) + 104LL);
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 5);
    v11 = 0LL;
    v9 = *(_WORD *)(v8 + 284);
    if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)a1, v7, &v11, 1) )
    {
      xxxNotifyMonitorChanged(a1, 0LL, v11, v9);
      return 1;
    }
  }
  return v1;
}
