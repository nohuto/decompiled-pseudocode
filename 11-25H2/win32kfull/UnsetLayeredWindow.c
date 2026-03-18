/*
 * XREFs of UnsetLayeredWindow @ 0x14005AAD8
 * Callers:
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x14005AA34 (CleanupWindowRedirection.c)
 *     DeleteFadeSprite @ 0x1401F4E70 (DeleteFadeSprite.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     RedirectDCEs @ 0x140059EA8 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     RemoveVisRgnTracker @ 0x14005B418 (RemoveVisRgnTracker.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, __int64 a2)
{
  char v2; // bl
  __int64 UserSessionState; // rax
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  HWND v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // ebx
  __int64 v21; // rdx
  void *v22; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // ebx
  void *v31; // rax
  __int64 v32; // rax
  _BYTE v33[16]; // [rsp+60h] [rbp-18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = GreIsDynamicModeChangeLocked(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v8 = W32GetUserSessionState(v7, v6);
  if ( v5 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 48LL));
  else
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 48LL));
  if ( (v2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v17 = SetLayeredWindowAttributes(a1), v17 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
    v28 = *((_QWORD *)a1 + 5);
    v29 = *(_QWORD *)a1;
    v30 = *(_DWORD *)(v28 + 232);
    v31 = (void *)ReferenceDwmApiPort(v28, v9);
    DwmAsyncChildStyleChange(v31, v29, -268435456, v30);
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      v32 = W32GetUserSessionState(v10, v9);
      UpdateSprite(*(HDEV *)(*(_QWORD *)(v32 + 56968) + 48LL), a1, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1LL);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~2u;
    *((_DWORD *)a1 + 95) &= ~0x8000u;
    v11 = IsWindowDesktopComposed(a1);
    v12 = *(HWND *)a1;
    v13 = v11;
    v16 = W32GetUserSessionState(v15, v14);
    v17 = GreDeleteSprite(*(HDEV *)(*(_QWORD *)(v16 + 56968) + 48LL), v12, 0LL, v13);
    SetOrClrWF(0, a1, 0xA08u, 1);
    RemoveVisRgnTracker(a1, 1LL);
    v18 = *((_QWORD *)a1 + 5);
    v19 = *(_QWORD *)a1;
    v20 = *(_DWORD *)(v18 + 232);
    v22 = (void *)ReferenceDwmApiPort(v18, v21);
    DwmAsyncChildStyleChange(v22, v19, -268435456, v20);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs((__int64)a1, v24);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v33);
      zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 17LL, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v33);
    }
  }
  v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968) + 48LL);
  if ( v5 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v26);
  else
    GreUnlockVisRgn(v26);
  return (unsigned int)v17;
}
