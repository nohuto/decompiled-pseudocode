/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x14004D210
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EtwTraceEnumDisplayMonitors @ 0x14004D2F8 (EtwTraceEnumDisplayMonitors.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(
        HDC a1,
        int *a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4)
{
  int *v6; // rbx
  HDC v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BYTE v12[16]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v13; // [rsp+58h] [rbp-40h] BYREF

  v6 = a2;
  v7 = a1;
  v13 = 0LL;
  LOBYTE(a2) = a2 != 0LL;
  LOBYTE(a1) = a1 != 0LL;
  EtwTraceEnumDisplayMonitors(a1, a2);
  EnterLeaveCritShared::EnterLeaveCritShared(v12, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    if ( v6 )
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (int *)MmUserProbeAddress;
      v13 = *(_OWORD *)v6;
      v6 = (int *)&v13;
    }
    v9 = (int)xxxEnumDisplayMonitors(v7, v6, a3, a4, 0);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
    return v9;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
    return 0LL;
  }
}
