/*
 * XREFs of Win32kBaseUserInitialize @ 0x14016B320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InitializeGreCSRSS @ 0x14006D744 (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     InitializePowerRequestList @ 0x1402EACAC (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2)
{
  char v4; // bl
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  bool v13; // di
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 (*v22)(void); // rax
  ULONG_PTR CurrentProcess; // rax
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int (*v29)(void); // rax
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-38h]
  __int16 v42; // [rsp+30h] [rbp-28h]

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      30,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  v12 = W32RegisterSessionProcess();
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v14 = W32GetUserSessionState(v11, WPP_GLOBAL_Control);
    v42 = 31;
    BugCheckParameter4 = 2;
LABEL_43:
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v14 + 69144),
      BugCheckParameter4,
      14,
      v42,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
    return v12;
  }
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 3488LL);
  if ( v17 )
  {
    if ( v17() >= 0 )
    {
      v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48);
      v22 = *(unsigned __int8 (**)(void))(v21 + 3496);
      if ( !v22 || !v22() )
      {
        CurrentProcess = PsGetCurrentProcess(v21, v20);
        KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, CurrentProcess);
      }
    }
  }
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    v28 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48);
    v29 = *(int (**)(void))(v28 + 3504);
    if ( v29 && v29() >= 0 )
    {
      v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48) + 3512LL);
      if ( !v30 )
        return 3221225659LL;
      result = v30(a2);
      if ( (int)result < 0 )
        return result;
    }
    *(_BYTE *)(W32GetUserSessionState(v28, v27) + 604) = 0;
    if ( !(unsigned int)InitializeGreCSRSS() )
      return 3221225473LL;
    UserGdiSessionState = W32GetUserGdiSessionState(v31);
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    if ( ProcessWin32Process )
    {
      v34 = -*(_QWORD *)ProcessWin32Process;
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    }
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
    v35 = W32GetUserGdiSessionState(v34);
    v36 = PsGetProcessWin32Process(*(_QWORD *)(v35 + 40));
    if ( v36 )
    {
      v37 = -*(_QWORD *)v36;
      v36 &= -(__int64)(*(_QWORD *)v36 != 0LL);
    }
    *(_QWORD *)(v36 + 808) |= 0x400000uLL;
    v38 = W32GetUserGdiSessionState(v37);
    v39 = PsGetProcessWin32Process(*(_QWORD *)(v38 + 40));
    if ( v39 )
      v39 &= -(__int64)(*(_QWORD *)v39 != 0LL);
    *(_DWORD *)(v39 + 268) = 18;
    v12 = UserInitialize();
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v14 = W32GetUserSessionState(v40, WPP_GLOBAL_Control);
    v42 = 32;
    BugCheckParameter4 = 4;
    goto LABEL_43;
  }
  return result;
}
