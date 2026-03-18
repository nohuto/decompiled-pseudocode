/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC
 * Callers:
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 */

void __fastcall PaintWatermark(Gre::Base *a1, const struct tagRECT *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DpiServerInfoForCurrentThread; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // [rsp+80h] [rbp+18h] BYREF
  struct tagSIZE v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)GreTextInitialized((__int64)a1, (__int64)a2, a3)
    && *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 2164LL) )
  {
    DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread(v9, v8);
    v11 = *(_QWORD *)(DpiServerInfoForCurrentThread + 8);
    if ( v11 )
      v5 = GreSelectFont(a1, v11);
    LOBYTE(v11) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v22, v11);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit(v12);
    v13 = GreSetBkMode((HDC)a1, 1);
    v14 = GreSetTextColor((HDC)a1, 0xFFFFFF);
    UserSessionState = W32GetUserSessionState(v16, v15);
    v18 = UserSessionState + 66264;
    if ( (unsigned int)GreGetTextExtentW(
                         (HDC)a1,
                         (unsigned __int16 *)(UserSessionState + 66264),
                         *(_DWORD *)(UserSessionState + 66392),
                         &v23) )
    {
      GreExtTextOutW((HDC)a1, a2->left, a2->top, 0, 0LL, v18, *(_DWORD *)(v18 + 128));
      GreExtTextOutW((HDC)a1, a2->right - v23.cx, a2->top, 0, 0LL, v18, *(_DWORD *)(v18 + 128));
      GreExtTextOutW(
        (HDC)a1,
        a2->right - v23.cx,
        a2->bottom - *(_DWORD *)(DpiServerInfoForCurrentThread + 40),
        0,
        0LL,
        v18,
        *(_DWORD *)(v18 + 128));
      GreExtTextOutW(
        (HDC)a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DpiServerInfoForCurrentThread + 40),
        0,
        0LL,
        v18,
        *(_DWORD *)(v18 + 128));
    }
    GreSetBkMode((HDC)a1, v13);
    GreSetTextColor((HDC)a1, v14);
    LeaveRenderCrit(v20, v19);
    UserSessionSwitchLeaveCrit(v21);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v22);
    if ( v5 )
      GreSelectFont(a1, v5);
  }
}
