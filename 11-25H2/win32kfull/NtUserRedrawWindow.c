/*
 * XREFs of NtUserRedrawWindow @ 0x14002D3B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // r9
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF

  v14 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = 0LL;
  }
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v8, v10);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v14 = *a2;
    a2 = &v14;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v11 = a4;
    LODWORD(v11) = a4 | 0x10000;
    if ( v10 )
      v11 = a4;
    v9 = xxxRedrawWindow(v10, a2, a3, v11);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v9;
}
