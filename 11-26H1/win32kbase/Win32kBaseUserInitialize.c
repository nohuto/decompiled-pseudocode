/*
 * XREFs of Win32kBaseUserInitialize @ 0x1401D8B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x140180418 (InitializeGreCSRSS.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     InitializePowerRequestList @ 0x1402F51D0 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2)
{
  char v4; // bl
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // r8d
  bool v13; // di
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int (*v17)(void); // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int8 (*v20)(void); // rax
  ULONG_PTR CurrentProcess; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  int (*v24)(void); // rax
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r8d
  char BugCheckParameter4; // [rsp+20h] [rbp-38h]
  __int16 v39; // [rsp+30h] [rbp-28h]

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)Handle, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      30,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  v11 = W32RegisterSessionProcess();
  if ( (v11 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v14 = W32GetUserSessionState(v10, (_DWORD)WPP_GLOBAL_Control, v12);
    v39 = 31;
    BugCheckParameter4 = 2;
LABEL_43:
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v14 + 69136),
      BugCheckParameter4,
      14,
      v39,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
    return v11;
  }
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 3088LL);
  if ( v17 )
  {
    if ( v17() >= 0 )
    {
      v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48);
      v20 = *(unsigned __int8 (**)(void))(v19 + 3096);
      if ( !v20 || !v20() )
      {
        CurrentProcess = PsGetCurrentProcess(v19);
        KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, CurrentProcess);
      }
    }
  }
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    v24 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 3104LL);
    if ( v24 && v24() >= 0 )
    {
      v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48) + 3112LL);
      if ( !v26 )
        return 3221225659LL;
      result = v26(a2);
      if ( (int)result < 0 )
        return result;
    }
    if ( !(unsigned int)InitializeGreCSRSS() )
      return 3221225473LL;
    UserGdiSessionState = W32GetUserGdiSessionState(v27);
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    if ( ProcessWin32Process )
    {
      v30 = -*(_QWORD *)ProcessWin32Process;
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    }
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
    v31 = W32GetUserGdiSessionState(v30);
    v32 = PsGetProcessWin32Process(*(_QWORD *)(v31 + 40));
    if ( v32 )
    {
      v33 = -*(_QWORD *)v32;
      v32 &= -(__int64)(*(_QWORD *)v32 != 0LL);
    }
    *(_QWORD *)(v32 + 808) |= 0x400000uLL;
    v34 = W32GetUserGdiSessionState(v33);
    v35 = PsGetProcessWin32Process(*(_QWORD *)(v34 + 40));
    if ( v35 )
      v35 &= -(__int64)(*(_QWORD *)v35 != 0LL);
    *(_DWORD *)(v35 + 268) = 18;
    v11 = UserInitialize();
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v14 = W32GetUserSessionState(v36, (_DWORD)WPP_GLOBAL_Control, v37);
    v39 = 32;
    BugCheckParameter4 = 4;
    goto LABEL_43;
  }
  return result;
}
