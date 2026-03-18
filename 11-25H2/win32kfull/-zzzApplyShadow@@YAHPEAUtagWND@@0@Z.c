/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C
 * Callers:
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     GreGetSpriteAttributes @ 0x1400DFB44 (GreGetSpriteAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400E1C54 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall zzzApplyShadow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  __int64 UserSessionState; // rax
  HDC CompatibleDC; // rax
  HDC v8; // rsi
  HBITMAP WindowShadow; // r14
  __int64 v10; // rdx
  LONG v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  BOOL v15; // ebx
  int v17; // eax
  HWND v18; // rdi
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  struct tagPOINT v24; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-20h] BYREF
  struct tagSIZE v26; // [rsp+60h] [rbp-18h] BYREF
  __int16 v27; // [rsp+B0h] [rbp+38h] BYREF
  BYTE SourceConstantAlpha; // [rsp+B2h] [rbp+3Ah]
  char v29; // [rsp+B3h] [rbp+3Bh]
  struct _BLENDFUNCTION v30; // [rsp+B8h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v32; // [rsp+C8h] [rbp+50h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v25 = 0LL;
  v5 = *((_QWORD *)a2 + 5);
  LODWORD(v2) = *(_DWORD *)(v2 + 288);
  v31 = 0;
  *(_DWORD *)(v5 + 288) = v2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  v8 = CompatibleDC;
  if ( CompatibleDC )
  {
    WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
    if ( WindowShadow )
    {
      v10 = *((_QWORD *)a1 + 5);
      v11 = *(_DWORD *)(v10 + 88);
      v24.x = v11;
      v24.y = *(_DWORD *)(v10 + 92);
      v26.cx = *(_DWORD *)(v10 + 96) - *(_DWORD *)(v10 + 88) + 5;
      v26.cy = *(_DWORD *)(v10 + 100) - *(_DWORD *)(v10 + 92) + 5;
      if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
        v24.x = v11 - 5;
      v27 = 0;
      v29 = 1;
      if ( (*(_BYTE *)(v10 + 26) & 8) != 0 )
      {
        if ( (GetRedirectionFlags((__int64)a1, v10) & 1) != 0 )
        {
          v30 = 0;
          v17 = IsWindowDesktopComposed(a1);
          v18 = *(HWND *)a1;
          v19 = v17;
          v22 = W32GetUserSessionState(v21, v20);
          if ( (unsigned int)GreGetSpriteAttributes(
                               *(Gre::Base **)(*(_QWORD *)(v22 + 56968) + 48LL),
                               v18,
                               v23,
                               &v32,
                               &v30,
                               &v31,
                               v19) )
          {
            SourceConstantAlpha = v30.SourceConstantAlpha;
            if ( (v31 & 2) != 0 )
              goto LABEL_8;
          }
        }
      }
      else
      {
        UserSetLastError(87);
      }
      SourceConstantAlpha = -1;
LABEL_8:
      v14 = W32GetUserSessionState(v13, v12);
      ++*(_DWORD *)(v14 + 70600);
      v15 = (int)zzzUpdateLayeredWindow(a2, 0LL, &v24, &v26, v8, (__int64)&v25, 0, (__int64)&v27, 2u, 0LL) >= 0;
      GreDeleteDC(v8);
      GreDeleteObject(WindowShadow);
      zzzEndDeferWinEventNotify();
      return v15;
    }
    GreDeleteDC(v8);
  }
  return 0LL;
}
