/*
 * XREFs of NtUserValidateRect @ 0x14002D070
 * Callers:
 *     <none>
 * Callees:
 *     xxxValidateRect @ 0x14002D168 (xxxValidateRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v8 = *a2;
    a2 = &v8;
  }
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_4;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
LABEL_4:
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v5);
    v4 = xxxValidateRect(v5, a2);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
