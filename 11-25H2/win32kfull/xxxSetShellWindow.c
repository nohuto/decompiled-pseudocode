/*
 * XREFs of xxxSetShellWindow @ 0x14025E314
 * Callers:
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     DwmAsyncShellWindowChange @ 0x14017346C (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@PEAU_HEAD@@@Z @ 0x1402239DC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNE.c)
 *     ?xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x140278B68 (-xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 **v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  __int64 v18; // rdx
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = *((_QWORD *)a1 + 2);
  v5 = v3;
  v6 = *(_QWORD *)(v4 + 504);
  if ( *(_QWORD *)(v6 + 168) )
  {
    v7 = 5;
LABEL_18:
    UserSetLastError(v7);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v8 + 24) & 8) != 0 )
  {
    v7 = 87;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(v4 + 464);
  if ( v9 && (!*(_QWORD *)(v6 + 176) || (*(_BYTE *)(v9 + 808) & 0x30) == 0x20) )
  {
    *(_QWORD *)(v6 + 176) = v9;
    if ( *(_QWORD *)(W32GetUserSessionState(v9, v4) + 19144) )
    {
      if ( v6 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19144) + 8LL) )
        SynchronizeContext();
    }
  }
  v20 = *(_OWORD *)LockPointer(&v21, v6 + 168, (__int64)a1);
  HMAssignmentLock(&v20, 0LL);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v22, *((void **)v5 + 62));
  CleanupIAMAccess(*((struct tagDESKTOP **)v5 + 62), v12);
  xxxGenerateIAMKey(*((struct tagDESKTOP **)v5 + 62));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v14 = *(_QWORD *)a1;
    v15 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
    v16 = **v15;
    v17 = (void *)ReferenceDwmApiPort(v15, v13);
    DwmAsyncShellWindowChange(v17, v14, v16);
  }
  SetOrClrWF(1, a1, 0x420u, 1);
  xxxSetWindowPos(a1, 1LL, 0LL, 0LL, 0, 0, 19);
  if ( v22[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v22, v18);
  return 1LL;
}
