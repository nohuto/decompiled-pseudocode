/*
 * XREFs of xxxIsDragging @ 0x1401171C8
 * Callers:
 *     NtUserDragDetect @ 0x140295750 (NtUserDragDetect.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140062528 (xxxSetCapture.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxSleepThread @ 0x140117848 (xxxSleepThread.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxIsDragging(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  int v11; // edi
  int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  BOOL v18; // eax
  unsigned __int64 v19; // [rsp+28h] [rbp-39h]
  int v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  __int64 v22; // [rsp+48h] [rbp-19h]
  __int128 v23; // [rsp+50h] [rbp-11h] BYREF
  __int128 v24; // [rsp+60h] [rbp-1h]
  __int128 v25; // [rsp+70h] [rbp+Fh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp+1Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = PtiCurrent((__int64)a1, a2);
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1, v5);
  v21 = a2;
  v22 = a2;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  v9 = *(_DWORD *)(v8 + 2172);
  HIDWORD(v21) = HIDWORD(a2) - v9;
  HIDWORD(v22) = v9 + HIDWORD(a2);
  v11 = 1;
  v12 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v10) + 19872) + 2168LL);
  LODWORD(v21) = a2 - v12;
  LODWORD(v22) = a2 + v12;
  v13 = 0;
  Win32HM_LockIntoThread<1>((__int64)v4, (__int64)a1, (__int64 *)BugCheckParameter3);
LABEL_3:
  if ( !v11 )
    goto LABEL_14;
  do
  {
    while ( 1 )
    {
      LODWORD(v19) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v23, 0LL, 512, 526, v19, 0)
        || (LODWORD(v19) = 1, (unsigned int)xxxInternalGetMessage((__int64)&v23, 0LL, 35, 35, v19, 0))
        || (LODWORD(v19) = 1, (unsigned int)xxxInternalGetMessage((__int64)&v23, 0LL, 256, 265, v19, 0))
        || *(struct tagWND **)(*((_QWORD *)v4 + 59) + 112LL) != a1 )
      {
        if ( *(struct tagWND **)(*((_QWORD *)v4 + 59) + 112LL) != a1 || DWORD2(v23) == 514 )
        {
LABEL_8:
          v11 = 0;
          goto LABEL_3;
        }
        switch ( DWORD2(v23) )
        {
          case 0x23:
            xxxCallHook(2LL, 0LL, 0LL, 5);
            break;
          case 0x100:
            if ( (_QWORD)v24 == 27LL )
              goto LABEL_8;
            break;
          case 0x200:
            v18 = PtInRect(&v21, *(unsigned __int64 *)((char *)&v25 + 4));
            if ( !v18 )
              v13 = 1;
            v11 &= -v18;
            break;
        }
        goto LABEL_3;
      }
      if ( *((_QWORD *)v4 + 198) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL) )
        goto LABEL_13;
    }
    v20 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v20) && !v20 );
LABEL_13:
  v13 = 1;
LABEL_14:
  v15 = *((_QWORD *)v4 + 59);
  if ( *(struct tagWND **)(v15 + 112) == a1 )
    xxxReleaseCapture(v15, v14);
  v16 = PtiCurrent(v15, v14);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v16, BugCheckParameter3);
  return v13;
}
