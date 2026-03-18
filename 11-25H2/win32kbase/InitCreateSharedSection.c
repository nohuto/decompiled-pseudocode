/*
 * XREFs of InitCreateSharedSection @ 0x1402EA988
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     UserCreateHeap @ 0x1401324D0 (UserCreateHeap.c)
 *     ??1ScopeGuard@@QEAA@XZ @ 0x14015A5F4 (--1ScopeGuard@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14015EC4C (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401B5378 (_lambda_301e07556f67996ceb949113357e8481_--_lambda_invoker_cdecl_.c)
 *     _lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_ @ 0x1401B53BC (_lambda_63e36bff1dba17887201b3c4e4518665_--_lambda_invoker_cdecl_.c)
 */

__int64 InitCreateSharedSection()
{
  char v0; // bl
  bool v1; // di
  _UNKNOWN **v2; // rdx
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  void *v7; // rcx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  _QWORD *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  NTSTATUS v23; // edi
  char *v24; // rsi
  void *v25; // rcx
  char v26; // di
  __int64 v27; // rax
  __int64 v28; // rax
  PVOID Heap; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+28h] [rbp-60h]
  int v36; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+90h] [rbp+8h] BYREF
  int v39; // [rsp+94h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+10h] BYREF
  void (*v41)(void); // [rsp+A0h] [rbp+18h] BYREF
  void (*v42)(void); // [rsp+A8h] [rbp+20h] BYREF

  v0 = 1;
  v1 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v2 = &WPP_RECORDER_INITIALIZED;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      11,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
    v2 = &WPP_RECORDER_INITIALIZED;
  }
  v7 = WPP_GLOBAL_Control;
  v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(v10 + 69144),
      4,
      14,
      12,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
      0,
      0);
  }
  v39 = 0;
  v38 = 2129920;
  v13 = (_QWORD *)(W32GetUserSessionState(v7, v2) + 19840);
  result = MmCreateSection(v13, 983071LL, 0LL, &v38, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ObDeleteCapturedInsertInfo(*v13);
    ViewSize = 0LL;
    v17 = (PVOID *)(W32GetUserSessionState(v16, v15) + 19856);
    *v17 = 0LL;
    v20 = W32GetUserSessionState(v19, v18);
    v23 = MmMapViewInSessionSpace(*(PVOID *)(v20 + 19840), v17, &ViewSize);
    if ( v23 < 0 )
    {
LABEL_28:
      lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(v22, v21);
      return (unsigned int)v23;
    }
    v24 = (char *)*v17;
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v0 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
      WPP_RECORDER_AND_TRACE_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v0,
        v26,
        *(_QWORD *)(v27 + 69144),
        v34,
        v35,
        v36,
        v37);
    }
    v28 = W32GetUserSessionState(v25, v21);
    Heap = UserCreateHeap(
             *(_QWORD *)(v28 + 19840),
             0x200000LL,
             v24 + 0x200000,
             0x8000u,
             (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
    *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19864) = Heap;
    if ( !Heap )
    {
      UserSetLastError(8);
      lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_(v33, v32);
      v23 = -1073741801;
      goto LABEL_28;
    }
    v42 = 0LL;
    v41 = 0LL;
    ScopeGuard::~ScopeGuard(&v41);
    ScopeGuard::~ScopeGuard(&v42);
    return 0LL;
  }
  return result;
}
