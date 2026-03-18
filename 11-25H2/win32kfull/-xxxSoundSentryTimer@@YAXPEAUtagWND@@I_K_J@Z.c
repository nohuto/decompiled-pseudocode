/*
 * XREFs of ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402AF590
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 */

void __fastcall xxxSoundSentryTimer(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  LOBYTE(v3) = 1;
  v4 = (struct tagTHREADINFO **)HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 21000), v3);
  v7 = W32GetUserSessionState(v6, v5);
  v9 = v7;
  if ( !v4 )
    *(_DWORD *)(v7 + 21016) = 3;
  if ( *(_DWORD *)(v7 + 21016) == 1 )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v4);
    xxxFlashWindow(v4, 0LL, 0);
    goto LABEL_12;
  }
  v10 = (unsigned int)(*(_DWORD *)(v7 + 21016) - 2);
  if ( *(_DWORD *)(v7 + 21016) == 2 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(v4) )
    {
      v11 = W32GetUserSessionState(v13, v12) + 21020;
      goto LABEL_7;
    }
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v4);
    xxxRedrawWindow((struct tagWND *)v4, 0LL, 0LL, 645);
LABEL_12:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v7 + 21016) == 3 )
  {
    v11 = 0LL;
LABEL_7:
    xxxRedrawWindow(0LL, v11, 0LL, 66181);
  }
LABEL_13:
  *(_DWORD *)(v9 + 21016) = 0;
  *(_QWORD *)(W32GetUserSessionState(v8, v10) + 21000) = 0LL;
  v17 = W32GetUserSessionState(v16, v15);
  FindTimer(0LL, *(_QWORD *)(v17 + 21008), 4u, 1, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v19, v18) + 21008) = 0LL;
}
