/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1401E65E0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     DwmAsyncSetTransition @ 0x1401E6884 (DwmAsyncSetTransition.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  BOOL v16; // ebx
  __int64 v18; // rdx
  void *v19; // rax
  __int128 v20; // [rsp+98h] [rbp-80h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v14 = ValidateReceivingHwnd(a1, 1LL);
  if ( v14 )
  {
    v15 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v20 = *a4;
        a4 = &v20;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v21 = *v10;
        v10 = &v21;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v22 = *v11;
        v11 = &v22;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v23 = *v12;
        v12 = &v23;
      }
      if ( IsTopLevelWindow(v14) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v14) )
        {
          v19 = (void *)ReferenceDwmApiPort(v13, v18);
          v15 = DwmAsyncSetTransition(v19, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v15 = -1073741816;
      }
    }
    else
    {
      v15 = -1073741811;
    }
    v16 = v15 >= 0;
    if ( v15 < 0 )
    {
      v16 = 0;
      UserSetLastStatus(v15, 1);
    }
  }
  else
  {
    v16 = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v16;
}
