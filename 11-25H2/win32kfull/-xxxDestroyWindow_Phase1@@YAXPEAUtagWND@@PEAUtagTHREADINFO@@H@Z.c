/*
 * XREFs of ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8
 * Callers:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x140181320 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     IsMotherDesktopWindow @ 0x14018FFC0 (IsMotherDesktopWindow.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401E910C (zzzAttachThreadInput.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x140256A84 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1402721A8 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6104 (Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxFlushPalette @ 0x1402BE7C0 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 */

void __fastcall xxxDestroyWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v22; // rax
  ULONG_PTR v23; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF
  char v25; // [rsp+80h] [rbp+8h] BYREF

  if ( IsInsideUserApiHook((__int64)a1, (__int64)a2) )
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 144LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
  if ( v8 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v8 + 8LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
      do
      {
        *(_DWORD *)(v8 + 8) &= ~4u;
        v8 = *(_QWORD *)(v8 + 48);
      }
      while ( v8 );
      if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v25,
          (struct tagTHREADINFO **)v9);
        xxxEndMenu(v9);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v25);
      }
    }
  }
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 31) & 0x40) == 0 && !*((_QWORD *)a1 + 15) && (*(_BYTE *)(v10 + 18) & 0x20) != 0 )
    xxxFlushPalette(a1, v8, v6, v7);
  v11 = *((_QWORD *)a1 + 17);
  if ( **(_WORD **)(v11 + 8) != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v8) + 19872) + 898LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v13 = *((_QWORD *)a1 + 15);
    if ( v13 )
    {
      v12 = *(_QWORD *)(v13 + 16);
      v14 = *((_QWORD *)a1 + 2);
      if ( v12 != v14 )
        zzzAttachThreadInput(v14, v12, 0);
    }
  }
  v15 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0 && (*(_BYTE *)(v15 + 24) & 4) == 0 && !IsTopLevelWindow((__int64)a1) )
  {
    v12 = *((_QWORD *)a1 + 13);
    if ( v12 )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, v12, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(
        *((struct tagTHREADINFO ***)a1 + 13),
        528LL,
        (*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 320LL) << 16) | 2,
        *(struct tagDRAWITEMSTRUCT **)a1,
        0,
        0,
        0LL,
        1,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow((__int64)a1, v12) )
    SetOrClrWF(1, a1, 0x480u, 1);
  if ( !a3 )
    xxxHandleGhostRelatedWindowDestruction(a1);
  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(v17)
    && !(unsigned int)Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline()
    && (*((_DWORD *)a1 + 95) & 0x8000000) != 0 )
  {
    tagWND::DwsUnlinkAllProcesses(a1, 3LL);
  }
  if ( !a3 && IsTopLevelWindow((__int64)a1) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(struct tagWND **)(i + 120) == a1 && a2 != *(struct tagTHREADINFO **)(i + 16) )
        PostUnownedNotification((struct tagWND *)i, v18);
    }
  }
  LOBYTE(v19) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v19 & 0x10) != 0 )
  {
    if ( (v19 & 0x40) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v19, v18);
      xxxShowWindowEx(
        a1,
        *(_DWORD *)(UserSessionState + 66800) & 0x10000,
        *(_DWORD *)(UserSessionState + 66800) & 0x10000);
    }
    else
    {
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, a3 != 0 ? 8343 : 151);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      SetVisible((__int64)a1, 0);
      v22 = *((_QWORD *)a2 + 62);
      if ( v22 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v22 + 8) + 24LL) )
        {
          v23 = *((_QWORD *)a1 + 13);
          if ( v23 )
            zzzLockDisplayAreaAndInvalidateDCCache(v23, 16LL, 0LL);
          xxxRedrawWindow(0LL, *((_QWORD *)a1 + 5) + 88LL, 0LL, 133);
        }
      }
    }
  }
  else if ( IsTrayWindow(a1, 1LL) && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)a1);
  }
}
