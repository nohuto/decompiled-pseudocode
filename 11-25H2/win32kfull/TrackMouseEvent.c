/*
 * XREFs of TrackMouseEvent @ 0x1401A5CD4
 * Callers:
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     NtUserTrackMouseEvent @ 0x1401A5BD0 (NtUserTrackMouseEvent.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401A6DDC (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdi
  int *v6; // rdx
  int v7; // r8d
  _BOOL8 v8; // rcx
  int v9; // eax
  int v10; // edx

  v3 = *((_QWORD *)PtiCurrent(a1, a2) + 62);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  v5 = result;
  if ( result )
  {
    v6 = (int *)(a1 + 4);
    if ( result == *(_QWORD *)(v3 + 192) && (v8 = *(_DWORD *)(v3 + 200) != 1, v8 == (((unsigned int)*v6 >> 4) & 1)) )
    {
      v7 = *v6;
      if ( *v6 >= 0 )
      {
        if ( (v7 & 2) != 0 )
          *(_DWORD *)(v3 + 48) |= 0x80u;
        if ( (*v6 & 1) != 0 )
        {
          *(_DWORD *)(v3 + 48) |= 0x40u;
          v9 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v3 + 220) = v9;
          if ( ((v9 + 1) & 0xFFFFFFFE) == 0 )
            *(_DWORD *)(v3 + 220) = *(_DWORD *)(W32GetUserSessionState(v8, v6) + 16284);
          ResetMouseHover((struct tagDESKTOP *)v3, *(struct tagPOINT *)(*(_QWORD *)(v5 + 16) + 796LL));
        }
      }
      else
      {
        if ( (v7 & 2) != 0 )
          *(_DWORD *)(v3 + 48) &= ~0x80u;
        if ( (*v6 & 1) != 0 && (*(_DWORD *)(v3 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530LL, 2u, 1, 0LL);
          *(_DWORD *)(v3 + 48) &= ~0x40u;
        }
      }
    }
    else
    {
      v10 = *v6;
      if ( (v10 & 2) != 0 && v10 >= 0 )
        _PostTransformableMessageExtended((struct tagWND *)result, ((v10 & 0x10) == 0) | 0x2A2, 0LL, 0LL, 0LL, 1);
    }
    return 1LL;
  }
  return result;
}
