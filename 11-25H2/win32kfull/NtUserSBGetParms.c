/*
 * XREFs of NtUserSBGetParms @ 0x14024C8E0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _SBGetParms @ 0x14026015C (_SBGetParms.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x140292658 (W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___.c)
 *     GetScrollbarTypeString @ 0x14029454C (GetScrollbarTypeString.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, unsigned int a2, __int128 *a3, ULONG64 a4)
{
  char v6; // di
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // rsi
  int v10; // ebx
  bool v11; // si
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 ScrollbarTypeString; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rdx
  bool v22; // si
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // r9d
  _BYTE *v30; // rdx
  int v31; // eax
  __int128 v35; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+98h] [rbp-90h]
  unsigned int v37; // [rsp+A0h] [rbp-88h]
  __int128 *v38; // [rsp+A8h] [rbp-80h]
  __int64 v39; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-48h]
  int v42; // [rsp+E8h] [rbp-40h]

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v39, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    if ( a2 == 2 )
    {
      v8 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v6 = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
        ScrollbarTypeString = GetScrollbarTypeString(2LL, v13, v14, *(_QWORD *)(UserSessionState + 69160));
        LOBYTE(v16) = v11;
        LOBYTE(v17) = v6;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          v18,
          2,
          9,
          25,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          ScrollbarTypeString);
      }
    }
    else if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
           && (v19 = *(__int64 **)(*(_QWORD *)(v9 + 16) + 464LL), v20 = *v19, PsGetCurrentProcess(v19) == v20) )
    {
      v8 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v6 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
        v26 = GetScrollbarTypeString(a2, v24, v25, *(_QWORD *)(v23 + 69160));
        LOBYTE(v27) = v22;
        LOBYTE(v28) = v6;
        WPP_RECORDER_AND_TRACE_SF_sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v28,
          v27,
          v29,
          2,
          9,
          26,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          v26,
          v20);
      }
    }
    else
    {
      v30 = (_BYTE *)a4;
      if ( a4 >= MmUserProbeAddress )
        v30 = (_BYTE *)MmUserProbeAddress;
      *v30 = *v30;
      v30[27] = v30[27];
      v40 = *(_OWORD *)a4;
      v41 = *(_QWORD *)(a4 + 16);
      v42 = *(_DWORD *)(a4 + 24);
      if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline() )
      {
        v36 = v9;
        v37 = a2;
        v38 = &v40;
        v31 = W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783_(**(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 464LL));
      }
      else
      {
        v35 = 0LL;
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v35 = *a3;
        v40 = *(_OWORD *)a4;
        v41 = *(_QWORD *)(a4 + 16);
        v42 = *(_DWORD *)(a4 + 24);
        v31 = SBGetParms(v9, a2, &v35, &v40);
      }
      v10 = v31;
      v8 = a4;
      *(_OWORD *)a4 = v40;
      *(_QWORD *)(a4 + 16) = v41;
      *(_DWORD *)(a4 + 24) = v42;
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
