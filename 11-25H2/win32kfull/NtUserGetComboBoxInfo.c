/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1401CDE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxGetComboBoxInfo @ 0x1401CE000 (xxxGetComboBoxInfo.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  int ComboBoxInfo; // ebx
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v19; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v20[3]; // [rsp+80h] [rbp-48h] BYREF

  memset_0(&v19, 0, 0x40uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v7 = v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    v10 = -PsGetCurrentProcessWow64Process(v9, v8);
    v11 = (_BYTE *)a2;
    if ( ((v10 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[63] = v11[63];
    LODWORD(v19) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v7, &v19);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
    {
      TransformRectBetweenCoordinateSpaces((char *)v20 + 4, (char *)v20 + 4, 0LL, v7);
      TransformRectBetweenCoordinateSpaces((char *)&v19 + 4, (char *)&v19 + 4, 0LL, v7);
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v19;
      *(_OWORD *)(a2 + 16) = v20[0];
      *(_OWORD *)(a2 + 32) = v20[1];
      *(_OWORD *)(a2 + 48) = v20[2];
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ComboBoxInfo;
}
