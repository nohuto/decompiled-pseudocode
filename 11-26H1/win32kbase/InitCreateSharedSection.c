/*
 * XREFs of InitCreateSharedSection @ 0x1402F4E7C
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Win32CreateSection @ 0x1401641E4 (Win32CreateSection.c)
 *     UserCreateHeap @ 0x140169100 (UserCreateHeap.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14018D9D0 (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     ??1ScopeGuard@@QEAA@XZ @ 0x140199E04 (--1ScopeGuard@@QEAA@XZ.c)
 *     _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401D78DC (_lambda_301e07556f67996ceb949113357e8481_--_lambda_invoker_cdecl_.c)
 *     _lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_ @ 0x1401D7924 (_lambda_63e36bff1dba17887201b3c4e4518665_--_lambda_invoker_cdecl_.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  bool v4; // di
  _UNKNOWN **v5; // rdx
  bool v6; // si
  int v7; // ecx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  PVOID *v17; // rsi
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  NTSTATUS v24; // edi
  int v25; // r8d
  char *v26; // rsi
  int v27; // ecx
  char v28; // di
  __int64 v29; // rax
  PVOID Heap; // rbx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  int v44; // [rsp+20h] [rbp-68h]
  int v45; // [rsp+20h] [rbp-68h]
  int v46; // [rsp+28h] [rbp-60h]
  int v47; // [rsp+30h] [rbp-58h]
  int v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+10h] BYREF
  void (*v51)(void); // [rsp+A0h] [rbp+18h] BYREF
  void (*v52)(void); // [rsp+A8h] [rbp+20h] BYREF

  v3 = 1;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
    LOBYTE(v38) = v6;
    LOBYTE(v39) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      11,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
    v5 = &WPP_RECORDER_INITIALIZED;
  }
  v7 = (int)WPP_GLOBAL_Control;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
    LOBYTE(v41) = v9;
    LOBYTE(v42) = v8;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v41,
      *(_QWORD *)(v40 + 69136),
      4,
      14,
      12,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
      0);
  }
  v49 = 2129920LL;
  v10 = W32GetUserSessionState(v7, (_DWORD)v5, a3);
  result = Win32CreateSection((_QWORD *)(v10 + 19872), v11, v12, (__int64)&v49, v44, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    v17 = (PVOID *)(W32GetUserSessionState(v15, v14, v16) + 19888);
    *v17 = 0LL;
    v21 = W32GetUserSessionState(v19, v18, v20);
    v24 = MmMapViewInSessionSpace(*(PVOID *)(v21 + 19872), v17, &ViewSize);
    if ( v24 >= 0 )
    {
      v26 = (char *)*v17;
      v27 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v3 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v25);
        WPP_RECORDER_AND_TRACE_SF_qqD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v3,
          v28,
          *(_QWORD *)(v43 + 69136),
          v45,
          v46,
          v47,
          v48);
      }
      v29 = W32GetUserSessionState(v27, v22, v25);
      Heap = UserCreateHeap(
               *(_QWORD *)(v29 + 19872),
               0x200000,
               v26 + 0x200000,
               0x8000u,
               (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 19896) = Heap;
      if ( Heap )
      {
        v52 = 0LL;
        v51 = 0LL;
        ScopeGuard::~ScopeGuard(&v51);
        ScopeGuard::~ScopeGuard(&v52);
        return 0LL;
      }
      UserSetLastError(8);
      lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_(v35, v34, v36);
      v24 = -1073741801;
    }
    lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(v23, v22, v25);
    return (unsigned int)v24;
  }
  return result;
}
