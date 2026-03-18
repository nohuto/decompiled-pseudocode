/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1400268A8 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x140224764 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x140225D60 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1402291BC (DwmAsyncGhostChange.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x14022FE74 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v2; // r13d
  struct tagWND *v3; // r15
  BOOL v4; // ebx
  int v6; // r12d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r13d
  __int64 v20; // rbx
  __int64 v21; // rdi
  void *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  void *v37; // rax
  __int64 v38; // [rsp+40h] [rbp-20h] BYREF
  __int128 v39; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0;
  LOBYTE(a1) = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  v6 = 99;
  if ( ((unsigned __int8)a1 & 0x20) != 0 )
    v2 = 1;
  else
    v4 = ((unsigned __int8)a1 & 1) != 0;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7
    && (v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888), v9 = *(_QWORD *)(v7 + 472), v9 == v8)
    && *(struct tagWND **)(v9 + 128) == a2 )
  {
    tagTHREADINFO::SetForegroundActivate(*((_QWORD *)v3 + 2), 8LL);
    v10 = 96;
  }
  else
  {
    v10 = 112;
    v6 = 115;
  }
  if ( *(char *)(*((_QWORD *)a2 + 5) + 26LL) < 0 )
    SetOrClrWF(1, v3, 0xA80u, 1);
  v39 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  xxxEnableChildWindowDpiMessageX(v3);
  v11 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
  {
    v12 = ValidateHmonitor(*(_QWORD *)(v11 + 256));
    v13 = *((_QWORD *)a2 + 5);
    v38 = v12;
    LogicalToPhysicalDPIRect(&v39, &v39, *(unsigned int *)(v13 + 288), &v38);
    if ( v4 )
      xxxSetWindowPos(v3, 0LL, (unsigned int)v39, DWORD1(v39), DWORD2(v39) - v39, HIDWORD(v39) - DWORD1(v39), 20);
    else
      v6 = v10;
  }
  v14 = 3;
  if ( v2 )
  {
    v15 = 1LL;
    v16 = 7LL;
  }
  else
  {
    if ( !v4 )
      goto LABEL_20;
    v15 = 17LL;
    v16 = 3LL;
  }
  xxxMinMaximize((__int64)v3, v16, v15);
  _CopyWindowCheckpoint(a2, v3);
  v6 |= 2u;
LABEL_20:
  v19 = IsWindowDesktopComposed(a2);
  if ( v19 )
  {
    v20 = *(_QWORD *)v3;
    v21 = *(_QWORD *)a2;
    v22 = (void *)ReferenceDwmApiPort(v18, v17);
    DwmAsyncGhostChange(v22, v21, v20);
    v23 = *(_QWORD *)a2;
    v26 = (void *)ReferenceDwmApiPort(v25, v24);
    DwmAsyncNotifyAnimationChange(v26, 0, v23);
    v27 = *(_QWORD *)v3;
    v30 = (void *)ReferenceDwmApiPort(v29, v28);
    DwmAsyncNotifyAnimationChange(v30, 0, v27);
    v14 = 3;
  }
  SetOrClrWF(0, v3, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, v3, 0x420u, 1);
    v31 = 1LL;
  }
  else
  {
    v31 = (__int64)a2;
  }
  SetVisible((__int64)a2, 0x10u);
  if ( !*(_DWORD *)(W32GetUserSessionState(v33, v32) + 70600) )
    v14 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v14);
  xxxSetWindowPos(v3, v31, (unsigned int)v39, DWORD1(v39), DWORD2(v39) - v39, HIDWORD(v39) - DWORD1(v39), v6);
  xxxNotifyShellOfWindowSwap(a2, v3);
  if ( v19 )
  {
    v36 = *(_QWORD *)v3;
    v37 = (void *)ReferenceDwmApiPort(v35, v34);
    DwmAsyncNotifyAnimationChange(v37, 1, v36);
  }
}
