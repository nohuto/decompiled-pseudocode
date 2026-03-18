/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x140051B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        ULONG_PTR a2,
        ULONG64 a3,
        __int64 *a4,
        __int64 a5,
        struct tagBWL *a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned __int64 a10)
{
  __int128 *v12; // r13
  __int64 *v13; // r15
  int *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  WindowActions *v17; // rsi
  struct tagBWL **v18; // rdx
  __int128 **v19; // rcx
  __int64 *v20; // rdx
  __int128 *v21; // rdx
  __int64 *v22; // r12
  int v23; // edi
  __int64 v24; // rdx
  NTSTATUS updated; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 NewMonitor; // r14
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rcx
  __int16 v33; // bx
  __int64 v34; // rdx
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v40; // [rsp+58h] [rbp-100h] BYREF
  struct tagBWL **v41; // [rsp+60h] [rbp-F8h]
  int v42; // [rsp+70h] [rbp-E8h]
  __int64 v43; // [rsp+78h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-D8h] BYREF
  ULONG_PTR v45[2]; // [rsp+90h] [rbp-C8h] BYREF
  struct tagBWL *v46; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 *v48; // [rsp+B0h] [rbp-A8h]
  __int64 v49; // [rsp+B8h] [rbp-A0h]
  __int64 *v50; // [rsp+C0h] [rbp-98h]
  __int64 v51[2]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 *v52; // [rsp+E0h] [rbp-78h]
  __int128 *v53; // [rsp+E8h] [rbp-70h]
  __int128 v54; // [rsp+F8h] [rbp-60h]
  __int128 v55; // [rsp+108h] [rbp-50h] BYREF

  BugCheckParameter3[0] = a2;
  v51[0] = a5;
  v41 = (struct tagBWL **)a6;
  *(_QWORD *)&v54 = a8;
  v12 = (__int128 *)a10;
  v46 = 0LL;
  v49 = 0LL;
  v43 = 0LL;
  v50 = 0LL;
  v47 = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  LODWORD(v40) = 0;
  v48 = 0LL;
  v55 = 0LL;
  v14 = 0LL;
  v53 = 0LL;
  v15 = EnterCrit(0LL, 0LL);
  v16 = ValidateReceivingHwnd(a1, 1LL);
  v17 = (WindowActions *)v16;
  if ( v16 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v45, v15, v16);
    v18 = v41;
    if ( v41 )
    {
      if ( (unsigned __int64)v41 >= MmUserProbeAddress )
        v18 = (struct tagBWL **)MmUserProbeAddress;
      v41 = (struct tagBWL **)*v18;
      v46 = (struct tagBWL *)v41;
      v49 = (__int64)&v46;
    }
    v19 = (__int128 **)MmUserProbeAddress;
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v43 = *a4;
    v50 = &v43;
    if ( (int)v43 < 0 || v43 < 0 )
    {
      v23 = 0;
      v42 = 0;
      UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v45, v24);
    }
    else
    {
LABEL_11:
      v20 = (__int64 *)a3;
      if ( a3 )
      {
        if ( a3 >= MmUserProbeAddress )
          v20 = (__int64 *)MmUserProbeAddress;
        v47 = *v20;
        v13 = &v47;
        v52 = &v47;
        v19 = (__int128 **)MmUserProbeAddress;
      }
      v21 = (__int128 *)v54;
      if ( (_QWORD)v54 )
      {
        if ( (unsigned __int64)v54 >= (unsigned __int64)*v19 )
          v21 = *v19;
        LODWORD(v40) = *(_DWORD *)v21;
        v22 = &v40;
        v48 = &v40;
      }
      else
      {
        v22 = v48;
      }
      if ( a10 )
      {
        if ( a10 >= (unsigned __int64)*v19 )
          v12 = *v19;
        v55 = *v12;
        v14 = (int *)&v55;
        v53 = &v55;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87);
        v23 = 0;
      }
      else if ( v14 && (*v14 < 0 || v14[1] < 0) )
      {
        UserSetLastError(87);
        v23 = 0;
        UserSetLastError(87);
      }
      else
      {
        if ( v13 && *((_QWORD *)v17 + 13) && (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v17) )
          IsTopLevelWindow((__int64)v17);
        v54 = *(_OWORD *)(*((_QWORD *)v17 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(v17, v51[0], v49, a7, (__int64)v22, a9, (__int64)v14);
        if ( updated < 0 )
        {
          v23 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v23 = 1;
          v26 = *((_QWORD *)v17 + 5);
          v27 = v54 - *(_QWORD *)(v26 + 88);
          if ( (_QWORD)v54 == *(_QWORD *)(v26 + 88) )
            v27 = *((_QWORD *)&v54 + 1) - *(_QWORD *)(v26 + 96);
          if ( v27 )
          {
            *(_OWORD *)v51 = 0LL;
            NewMonitor = GetNewMonitor(v17);
            v30 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v17 + 5) + 256LL), v29);
            v31 = v30;
            if ( NewMonitor )
            {
              if ( NewMonitor != v30 )
              {
                Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v15, NewMonitor);
                v41 = 0LL;
                if ( v31 )
                  v33 = *(_WORD *)(*(_QWORD *)(v31 + 40) + 60LL);
                else
                  v33 = 0;
                v34 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
                if ( (_WORD)v34 != v33 )
                  xxxAppAdjustDpiCandidateRect(v17);
                v35 = PtiCurrent(v32, v34);
                v36 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v35, BugCheckParameter3);
                BugCheckParameter3[1] = 0LL;
                BugCheckParameter3[0] = -1LL;
                if ( v36 && (unsigned int)UpdateMonitorForWindowAndChildren(v17, (struct tagMONITOR *)NewMonitor) )
                  xxxNotifyMonitorChanged(v17, (struct tagRECT *)v51, (struct tagBWL *)v41);
                Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                  BugCheckParameter3,
                  v37);
              }
            }
          }
        }
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v45, v26);
    }
  }
  else
  {
    v23 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v23;
}
