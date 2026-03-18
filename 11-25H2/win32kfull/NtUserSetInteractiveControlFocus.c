/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x14024DE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x14022839C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

unsigned __int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct InteractiveControlManager *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+28h] [rbp-20h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = 0LL;
  v8 = v6;
  if ( !a3 )
    goto LABEL_8;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(v6 + 464)) )
  {
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v17);
    v7 = ValidateHwnd(a3);
    if ( v18 )
    {
      v9 = v17;
      *(_BYTE *)(v17 + 1708) = 1;
    }
  }
  else
  {
    v7 = ValidateHwnd(a3);
  }
  if ( v7 )
  {
LABEL_8:
    Win32HM_LockIntoThread<1>(v8, v7, (__int64 *)BugCheckParameter3);
    v13 = InteractiveControlManager::Instance(v12, v11);
    v14 = (unsigned __int64)(unsigned int)~InteractiveControlManager::SetDeviceFocus((__int64)v13, a1, a2, v7) >> 31;
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v15);
    UserSessionSwitchLeaveCrit(v16);
    return v14;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v9);
    return 0LL;
  }
}
