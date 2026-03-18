/*
 * XREFs of CheckCursorClipAccess @ 0x14005FB50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14005FD1C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140060AEC (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x140247B34 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v6 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return 1LL;
      if ( !(unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 58), v5) )
      {
        if ( *(_DWORD *)(*((_QWORD *)v6 + 58) + 868LL) )
        {
          if ( (unsigned int)InForegroundQueue(v6, 0) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)v6 + 58) + 824LL);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 100) & 1) != 0 )
                return 1LL;
            }
          }
        }
      }
    }
    else
    {
      if ( RtlAreAllAccessesGranted(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 58) + 664LL), 2u) )
        return 1LL;
      UserSetLastError(5);
    }
    return 0LL;
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( **((_QWORD **)v6 + 58) != v8
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v6 + 58))
     || !(unsigned int)IsGpqForegroundAccessibleForPti(v6, 1)) )
  {
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  CCursorClip::GetClip(*(CCursorClip **)(UserSessionState + 36240), &v15);
  return *((_QWORD *)v6 + 59) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888)
      || a2
      || v15.left < v15.right && v15.top < v15.bottom;
}
