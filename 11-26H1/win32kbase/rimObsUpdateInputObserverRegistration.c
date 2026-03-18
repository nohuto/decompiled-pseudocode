/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x14021076C
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1401FF800 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x140202AF0 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401C2394 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x14020DE84 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddq @ 0x14020E1B4 (WPP_RECORDER_AND_TRACE_SF_dddq.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  int v7; // r12d
  char v9; // bl
  char v10; // di
  char v11; // si
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // r8d
  __int64 v17; // rax
  _DWORD *v18; // rdi
  int v19; // edx
  int v20; // r8d
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
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rax
  bool v41; // di
  bool v42; // bp
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+38h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF

  v7 = a2;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)Handle, a2, a3);
    WPP_RECORDER_AND_TRACE_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *(_QWORD *)(UserSessionState + 69136),
      v47,
      1u,
      0x27u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  Object = 0LL;
  v15 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v15 >= 0 )
  {
    v17 = W32GetUserSessionState(v14, v13, v16);
    RIMLockExclusive(v17 + 72);
    v18 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v21 = v18[28];
    v22 = v18[27];
    v23 = v18[29];
    LODWORD(Object) = v21;
    if ( a4 >= 0x30 )
    {
      *(_QWORD *)(v18 + 27) = 3LL;
      if ( rimObsCheckForRegistrationConflicts(v7, v22, v21, v23) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
          v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
          v36 = (int)Object;
          WPP_RECORDER_AND_TRACE_SF_dddq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v34,
            *(_QWORD *)(v35 + 69136),
            v47,
            v48,
            v49,
            v50);
        }
        v18[27] = v22;
        v18[28] = v36;
        v18[30] = v7;
        if ( a3 )
        {
          *((_QWORD *)v18 + 12) = a3;
          v18[26] = a4;
        }
        goto LABEL_41;
      }
      v15 = -1073741823;
    }
    else
    {
      v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69136),
          3,
          1,
          40,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          a4);
      }
      v15 = -1073741789;
    }
    v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69136),
        3,
        1,
        42,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_41:
    RIMUnlockExclusive((__int64)(v18 + 44));
    ObfDereferenceObject(v18);
    v40 = W32GetUserSessionState(v38, v37, v39);
    RIMUnlockExclusive(v40 + 72);
    return (unsigned int)v15;
  }
  v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v16);
    LOBYTE(v44) = v42;
    LOBYTE(v45) = v41;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v45,
      v44,
      *(_QWORD *)(v43 + 69136),
      3,
      1,
      43,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v15;
}
