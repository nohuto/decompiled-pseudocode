/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1401F33CC
 * Callers:
 *     NtRIMAddInputObserver @ 0x1401D7BC0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D87E0 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsTestSigningOn @ 0x14019F5D4 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1401F2268 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v7; // rdx
  bool v8; // bl
  bool v9; // di
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // esi
  bool v19; // bl
  bool v20; // di
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // esi
  __int16 v26; // [rsp+30h] [rbp-38h]
  __int16 v27; // [rsp+30h] [rbp-38h]
  char v28; // [rsp+40h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v30; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1 & 2;
  v2 = a1 & 1;
  v3 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v3 )
    {
      v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          1,
          75,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      return 0LL;
    }
    v30 = 0;
    DestinationString = 0LL;
    if ( !v2
      || (RtlInitUnicodeString(&DestinationString, L"inputObservation"),
          v18 = RtlCapabilityCheck(0LL, &DestinationString, &v30),
          v18 >= 0)
      && v30 )
    {
      if ( !v1
        || (RtlInitUnicodeString(&DestinationString, L"inputSuppression"),
            v24 = RtlCapabilityCheck(0LL, &DestinationString, &v30),
            v24 >= 0)
        && v30 )
      {
        v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1LL;
        v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69144);
        v26 = 78;
        goto LABEL_51;
      }
      v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v28 = v24;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69144);
      v27 = 77;
    }
    else
    {
      v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v28 = v18;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69144);
      v27 = 76;
    }
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      3,
      1,
      v27,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v28);
    return 0LL;
  }
  v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 1LL;
  v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69144);
  v26 = 74;
LABEL_51:
  LOBYTE(v11) = v9;
  LOBYTE(v10) = v8;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v10,
    v11,
    v12,
    4,
    1,
    v26,
    (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  return 1LL;
}
