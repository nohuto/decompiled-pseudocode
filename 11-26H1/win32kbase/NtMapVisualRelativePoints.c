/*
 * XREFs of NtMapVisualRelativePoints @ 0x1401D0840
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1401CFEB4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401D0B18 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, char *a4, char *a5)
{
  __int64 v5; // r13
  char v6; // r12
  _QWORD *UserSessionState; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  char v11; // si
  char v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  CTouchProcessor *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 i; // rbx
  NTSTATUS v26; // eax
  int v27; // edi
  ULONG v28; // eax
  bool v29; // r14
  char LastError; // bl
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx

  v5 = a3;
  v6 = (char)a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v8;
  if ( v8 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v12 = 0;
    v11 = 1;
  }
  else
  {
    v11 = 1;
    v12 = 1;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_ii(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 69136),
      4,
      2,
      10,
      (__int64)&WPP_f8d355b3ab2236f38d0e596538285f9e_Traceguids,
      (char)a1,
      v6);
  }
  if ( (unsigned __int64)(8 * v5) > 0xFFFFFFFF )
  {
    v27 = 0;
    UserSetLastError(8);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(0xFFFFFFFFLL, v9);
    ProbeForRead(a4, (unsigned int)(8 * v5), CurrentProcessWow64Process != 0 ? 1 : 4);
    v20 = PsGetCurrentProcessWow64Process(v19, v18);
    ProbeForWrite(a5, (unsigned int)(8 * v5), v20 != 0 ? 1 : 4);
    for ( i = 0LL; (_DWORD)i != (_DWORD)v5; i = (unsigned int)(i + 1) )
    {
      v26 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)&a4[8 * i],
              (struct VisualPoint *)&a5[8 * i]);
      if ( v26 < 0 )
      {
        v27 = 0;
        v28 = RtlNtStatusToDosError(v26);
        UserSetLastError(v28);
        goto LABEL_19;
      }
    }
    v27 = 1;
  }
LABEL_19:
  if ( !v27 )
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v34 = W32GetUserSessionState(v32, v31, v33);
      LOBYTE(v35) = v29;
      LOBYTE(v36) = v11;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        2,
        2,
        11,
        (__int64)&WPP_f8d355b3ab2236f38d0e596538285f9e_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v22, v21, v23, v24);
  return v27;
}
