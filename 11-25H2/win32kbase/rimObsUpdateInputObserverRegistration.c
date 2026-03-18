/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1401F4CF0
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D87E0 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1401DC600 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401A0190 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1401F2310 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddq @ 0x1401F26DC (WPP_RECORDER_AND_TRACE_SF_dddq.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v7; // r12d
  char v9; // bl
  bool v10; // di
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // r9d
  bool v24; // si
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // bp
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // bp
  __int64 v35; // rax
  int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  bool v40; // di
  bool v41; // bp
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+28h] [rbp-70h]
  int v48; // [rsp+30h] [rbp-68h]
  void *v49; // [rsp+38h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF

  v7 = a2;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle, a2);
    LOBYTE(v13) = v11;
    v49 = &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids;
    LOBYTE(v14) = v10;
    LOWORD(v48) = 39;
    v47 = 1;
    WPP_RECORDER_AND_TRACE_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v13, *(_QWORD *)(UserSessionState + 69144));
  }
  Object = 0LL;
  v17 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v17 >= 0 )
  {
    v18 = W32GetUserSessionState(v16, v15);
    RIMLockExclusive(v18 + 72);
    v19 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v21 = v19[28];
    v22 = v19[27];
    v23 = v19[29];
    LODWORD(Object) = v21;
    if ( a4 >= 0x30 )
    {
      v19[27] = 3;
      v19[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v7, v22, v21, v23) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v9 = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = (int)Object;
        }
        else
        {
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          v36 = (int)Object;
          WPP_RECORDER_AND_TRACE_SF_dddq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v34,
            *(_QWORD *)(v35 + 69144),
            v46,
            v47,
            v48,
            (int)v49);
        }
        v19[27] = v22;
        v19[28] = v36;
        v19[30] = v7;
        if ( a3 )
        {
          *((_QWORD *)v19 + 12) = a3;
          v19[26] = a4;
        }
        goto LABEL_41;
      }
      v17 = -1073741823;
    }
    else
    {
      v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69144),
          3,
          1,
          40,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          a4);
      }
      v17 = -1073741789;
    }
    v29 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69144),
        3,
        1,
        42,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_41:
    RIMUnlockExclusive((__int64)(v19 + 44));
    ObfDereferenceObject(v19);
    v39 = W32GetUserSessionState(v38, v37);
    RIMUnlockExclusive(v39 + 72);
    return (unsigned int)v17;
  }
  v40 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v43) = v41;
    LOBYTE(v44) = v40;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v43,
      *(_QWORD *)(v42 + 69144),
      3,
      1,
      43,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v17;
}
