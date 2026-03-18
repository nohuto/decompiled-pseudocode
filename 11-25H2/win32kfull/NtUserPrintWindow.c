/*
 * XREFs of NtUserPrintWindow @ 0x14024BC20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      if ( (a3 & 3) == a3 )
      {
        if ( !(unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
          || (unsigned __int8)Win32ProcessCapability::CheckAccess(*(_QWORD *)(v6 + 464), 2LL) )
        {
          v9 = xxxPrintWindow(v10, a2, a3);
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        UserSetLastError(87);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
