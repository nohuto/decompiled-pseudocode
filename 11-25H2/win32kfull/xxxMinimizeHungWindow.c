/*
 * XREFs of xxxMinimizeHungWindow @ 0x14026BDFC
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxShowOwnedWindows @ 0x14018786C (xxxShowOwnedWindows.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402DF754 (xxxDrawAnimatedRects.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  struct tagWND *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 RectRgnIndirect; // rbx
  __int64 v7; // rdx
  struct tagWND *v8; // rcx
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v3 = a1;
  v9 = 0LL;
  LOBYTE(a1) = *(_BYTE *)(result + 31);
  if ( ((unsigned __int8)a1 & 0x20) == 0 && ((unsigned __int8)a1 & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66800) & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((unsigned __int64 *)v3, (__int64)&v9);
      if ( !IsRectEmptyInl(&v9) )
        xxxDrawAnimatedRects(v3);
    }
    SetVisible((__int64)v3, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)v3 + 5) + 88LL, v4, v5);
    xxxShowOwnedWindows((__int64)v3, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v3, 1LL, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)v3 + 13) == GetDesktopWindow((__int64)v3) )
      xxxActivateOnMinimize(v8, v7);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)v3 + 2),
             *(struct tagQ **)(*((_QWORD *)v3 + 2) + 472LL),
             0xAu,
             (LARGE_INTEGER *)v3,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
