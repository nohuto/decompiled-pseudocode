/*
 * XREFs of ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x14028B784 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14014B798 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x140225D20 (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxReportHotKeyToShell(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // bx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  char result; // al
  __int64 v25; // rdx
  ShellWindowManagement *v26; // rcx
  __int64 v27; // r8
  const struct tagTHREADINFO *Thread; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v30[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v7 = a2;
  if ( a4 )
  {
    LOBYTE(a2) = 1;
    v11 = HMValidateHandleNoSecure(a4, a2);
    if ( v11 )
    {
      v12 = PtiCurrent(v10, v9);
      Win32HM_LockIntoThread<1>((__int64)v12, (__int64)a1, (__int64 *)v30);
      v15 = PtiCurrent(v14, v13);
      Win32HM_LockIntoThread<1>((__int64)v15, v11, (__int64 *)BugCheckParameter3);
      if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
      {
        v19 = 1026;
        v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18888);
        if ( (a5 & 2) != 0 && v20 && (*(_BYTE *)(v20 + 412) & 1) == 0 )
          v19 = 1538;
        v5 = (unsigned __int8)xxxSetForegroundWindowWithOptions(v11, 31LL, v19, 0);
      }
      else
      {
        v5 = xxxSetForegroundWindow2(v11, 0LL, 2u) != 0;
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v18);
      a1 = (_QWORD *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v30, v21);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v22);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v30, v23);
    }
  }
  result = NotifyShell::ShellHotKey(a1, v7, a3, v5);
  if ( result )
  {
    if ( a1 )
      Thread = (const struct tagTHREADINFO *)a1[2];
    else
      Thread = ShellWindowManagement::GetThread(v26, v25);
    LOBYTE(v27) = a5 & 1;
    return LastWokenThread::Set(Thread, 1LL, v27);
  }
  return result;
}
