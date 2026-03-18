/*
 * XREFs of NtUserSetWindowPos @ 0x14024EC50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x14015C664 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ConstrainWindowSize @ 0x1401A9B78 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1401ABF18 (ConstrainWindowPos.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1401EA758 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401EFF20 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, struct tagWND *a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct tagWND *v13; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v15; // edi
  bool v16; // zf
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r12
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // bl
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rdx
  ULONG_PTR v32[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-10h] BYREF
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  int v35; // [rsp+B8h] [rbp+48h] BYREF

  v35 = a4;
  v34 = a3;
  v9 = 0;
  v32[0] = 0LL;
  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v13 = (struct tagWND *)v11;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( (((*(_WORD *)(v12 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v10, v11, BugCheckParameter3);
      IsEnabledDeviceUsageNoInline = Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline();
      v15 = a7;
      if ( IsEnabledDeviceUsageNoInline )
        v16 = (a7 & 0xFFFD9800) == 0;
      else
        v16 = (a7 & 0xFFFC9800) == 0;
      if ( v16 )
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, (struct tagWND **)v32) )
          goto LABEL_35;
        if ( *(char *)(*((_QWORD *)v13 + 5) + 20LL) >= 0
          && ((unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline()
           || (v15 & 0xFFFC9800) == 0) )
        {
          if ( (v15 & 2) == 0 )
            ConstrainWindowPos(&v34, &v35);
          if ( (v15 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v20 = v32[0];
          v21 = 0LL;
          if ( v32[0] - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
            v21 = v32[0];
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v19);
          if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
            TransformSWPCoords(v13, &v34, &v35, &a5, &a6, v15);
          if ( (v15 & 0x43) == 0x43
            && (*(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL) & 0x10) == 0
            && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x40000000, v23)
            && ShellWindowManagement::WindowSubjectToBehavior((__int64)v13, 1u, 0, 1) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
              || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v25 = 0;
            }
            v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
              LOBYTE(v28) = v26;
              LOBYTE(v29) = v25;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v29,
                v28,
                *(_QWORD *)(UserSessionState + 69160),
                4,
                12,
                11,
                (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
                (char)v13);
            }
            LOBYTE(v24) = 5;
            xxxShowWindowEx(v13, v24, 0);
            v9 = 1;
          }
          else
          {
            Win32HM_LockIntoThread<1>(v10, v21, (__int64 *)v32);
            v9 = xxxSetWindowPos(v13, v20, (unsigned int)v34, (unsigned int)v35, a5, a6, v15);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v32, v30);
          }
          goto LABEL_35;
        }
        v17 = 87;
      }
      else
      {
        v17 = 1004;
      }
      UserSetLastError(v17);
LABEL_35:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
