/*
 * XREFs of ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC
 * Callers:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     NtUserRegisterTouchPadCapable @ 0x1401A01A0 (NtUserRegisterTouchPadCapable.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401CF45C (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall AtomicExecutionCheck::Arm(AtomicExecutionCheck *this, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentThreadWin32Thread; // rax

  if ( !*(_BYTE *)this )
  {
    if ( !*(_QWORD *)W32GetUserSessionState((_DWORD)this, a2, a3) || !(unsigned int)GET_USERCRIT_DISPOSITION(v5, v4) )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6);
    *((_QWORD *)this + 1) = CurrentThreadWin32Thread;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    *(_BYTE *)this = 1;
  }
}
