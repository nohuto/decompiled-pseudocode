/*
 * XREFs of ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     NtUserGetProp2 @ 0x140279820 (NtUserGetProp2.c)
 *     NtUserLockWindowUpdate @ 0x140279BF0 (NtUserLockWindowUpdate.c)
 *     NtUserRemoveProp @ 0x140279DB0 (NtUserRemoveProp.c)
 *     NtUserSetProp @ 0x14027A1C0 (NtUserSetProp.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402ADF68 (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     NtUserConvertToInterceptWindow @ 0x1402B08D0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGrantJobUIRestrictionException @ 0x1402B5E40 (NtUserGrantJobUIRestrictionException.c)
 *     NtUserSetShellWindowEx @ 0x1402BDEB0 (NtUserSetShellWindowEx.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall AtomicExecutionCheck::Arm(AtomicExecutionCheck *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 CurrentThreadWin32Thread; // rax

  if ( !*(_BYTE *)this )
  {
    if ( !*(_QWORD *)W32GetUserSessionState(this, a2) || !(unsigned int)GET_USERCRIT_DISPOSITION(v3) )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v4);
    *((_QWORD *)this + 1) = CurrentThreadWin32Thread;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    *(_BYTE *)this = 1;
  }
}
