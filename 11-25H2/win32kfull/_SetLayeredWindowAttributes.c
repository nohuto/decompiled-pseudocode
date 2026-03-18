/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1400E1004
 * Callers:
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1400E0EB0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_WallpaperInvalidate__private_IsEnabledDeviceUsageNoInline @ 0x1402879D8 (Feature_WallpaperInvalidate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  char v5; // r15
  __int64 v9; // rdx
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 RedirectionBitmap; // rbx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 UserSessionState; // rax
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  HDC v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  int updated; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  struct _BLENDFUNCTION v32; // [rsp+60h] [rbp-19h] BYREF
  struct tagSIZE v33; // [rsp+68h] [rbp-11h] BYREF
  struct tagPOINT v34[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v35; // [rsp+80h] [rbp+7h] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = *((_DWORD *)a1 + 95);
    if ( (v10 & 0x8000) != 0 )
      *((_DWORD *)a1 + 95) = v10 & 0xFFFF7FFF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1, v9);
  if ( !RedirectionBitmap || (GetRedirectionFlags((__int64)a1, v12) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    if ( !RedirectionBitmap )
      v5 = 1;
  }
  *(_WORD *)&v32.BlendOp = 0;
  v15 = a4 & 0xDFFFFFEF | 0x20000000;
  v32.AlphaFormat = 0;
  v32.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v33 = 0LL;
    v35 = 0LL;
    v34[0] = 0LL;
    UserSessionState = W32GetUserSessionState(1LL, v14);
    v17 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), RedirectionBitmap);
    v18 = (_DWORD *)*((_QWORD *)a1 + 5);
    v19 = v17;
    v33.cx = v18[24] - v18[22];
    v33.cy = v18[25] - v18[23];
    v21 = *(HDC *)(W32GetUserSessionState(v20, (unsigned int)v33.cy) + 43248);
    v24 = W32GetUserSessionState(v23, v22);
    updated = UpdateSprite(
                *(HDEV *)(*(_QWORD *)(v24 + 56968) + 48LL),
                a1,
                v25,
                0LL,
                0LL,
                &v33,
                v21,
                v34,
                a2,
                &v32,
                v15,
                (struct tagRECT *)((unsigned __int64)&v35 & -(__int64)(v5 != 0)));
    v29 = W32GetUserSessionState(v28, v27);
    GreSelectBitmap(*(_QWORD *)(v29 + 43248), v19);
  }
  else
  {
    v30 = W32GetUserSessionState(1LL, v14);
    updated = UpdateSprite(
                *(HDEV *)(*(_QWORD *)(v30 + 56968) + 48LL),
                a1,
                v31,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                a2,
                &v32,
                v15,
                0LL);
  }
  if ( (unsigned int)Feature_WallpaperInvalidate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( updated >= 0 )
    {
      LOBYTE(v34[0].x) = 0;
      v34[1] = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v34);
      zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 17LL, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v34);
    }
  }
  return (unsigned int)updated;
}
