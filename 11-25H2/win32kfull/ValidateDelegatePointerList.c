/*
 * XREFs of ValidateDelegatePointerList @ 0x140138708
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x140137918 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138920 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140138A2C (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 */

__int64 __fastcall ValidateDelegatePointerList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int *v9; // rdx
  int v10; // r14d
  unsigned int *v11; // rdx
  unsigned int v12; // r13d
  char v13; // di
  bool v14; // r12
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+38h] [rbp-80h]
  unsigned int v26; // [rsp+C0h] [rbp+8h]

  v26 = a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  PtiCurrent(a1, a2);
  v7 = 1;
  v8 = 0;
  while ( v8 < v6 )
  {
    v9 = (int *)(v5 + 4LL * v8);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (int *)MmUserProbeAddress;
    v10 = *v9;
    v11 = (unsigned int *)(v4 + 4LL * v8);
    if ( (unsigned __int64)v11 >= MmUserProbeAddress )
      v11 = (unsigned int *)MmUserProbeAddress;
    v12 = *v11;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_LLL(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        v23,
        v24,
        23,
        v25,
        v8,
        v10,
        v12);
    }
    if ( !v10 || HIWORD(v10) || !v12 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v7;
        WPP_RECORDER_AND_TRACE_SF_LLL(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(v20 + 69160),
          v23,
          v24,
          24,
          v25,
          v8,
          v10,
          v12);
      }
      return 0;
    }
    PointerDelegateGetClient(v10, v12, (struct tagDELEGATEPOINTERMAP *)(a4 + ((unsigned __int64)v8++ << 7)));
    v6 = v26;
    v4 = a3;
    v5 = a2;
  }
  return v7;
}
