/*
 * XREFs of RIMReadInput @ 0x1400979E0
 * Callers:
 *     NtRIMReadInput @ 0x1400967D0 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1400976E0 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     rimIssueReads @ 0x140098194 (rimIssueReads.c)
 *     ?ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x140098308 (-ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimCompleteReads @ 0x1400987C0 (rimCompleteReads.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1400994F8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMReadInput(char *Handle, __int64 a2, int a3, void *a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  const struct RawInputManagerObject *v9; // rbx
  bool v12; // si
  bool v13; // bp
  __int64 UserSessionState; // rax
  NTSTATUS v15; // ebp
  int v16; // edx
  int v17; // r8d
  NTSTATUS v18; // eax
  int v19; // edx
  int v20; // r8d
  PVOID v21; // rdi
  int v22; // edx
  int v23; // r8d
  bool v24; // bp
  bool v25; // r12
  char v26; // di
  char v27; // si
  __int64 v28; // rax
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  bool v33; // di
  bool v34; // si
  __int64 v35; // rax
  bool v36; // r12
  bool v37; // r13
  char v38; // di
  char v39; // si
  __int64 v40; // r9
  bool v41; // r12
  bool v42; // r13
  char CurrentThread; // di
  char v44; // si
  __int64 v45; // r9
  bool v46; // di
  bool v47; // si
  __int64 v48; // rax
  int HandleInformation; // [rsp+28h] [rbp-90h]
  HANDLE v50; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+68h] [rbp-50h] BYREF
  PVOID v52; // [rsp+70h] [rbp-48h] BYREF
  char v54; // [rsp+D8h] [rbp+20h]

  v54 = (char)a4;
  v9 = 0LL;
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      81,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v15 = -1073741816;
  }
  else
  {
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
    if ( v15 >= 0 )
    {
      if ( *((_DWORD *)Object + 1) == 1 )
      {
        v9 = (const struct RawInputManagerObject *)Object;
      }
      else
      {
        v15 = -1073741788;
        ObfDereferenceObject(Object);
      }
    }
    if ( v15 >= 0 )
    {
      InputTraceLogging::RIM::ReadInput(v9);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v9 + 104, 0LL);
      *((_QWORD *)v9 + 14) = KeGetCurrentThread();
      if ( *((_BYTE *)v9 + 81) || *((_BYTE *)v9 + 82) )
      {
        v15 = -1073741637;
        v46 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v46,
            v47,
            *(_QWORD *)(v48 + 19368),
            3,
            1,
            86,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
      }
      else
      {
        rimHandleAnyPnpRemovePendingDevices(v9);
        v50 = 0LL;
        v52 = 0LL;
        v18 = ObReferenceObjectByHandle(a4, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &v52, 0LL);
        v21 = v52;
        v15 = v18;
        if ( v18 >= 0 )
        {
          v15 = ObOpenObjectByPointer(v52, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v50);
          if ( v15 < 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 904LL);
          ObfDereferenceObject(v21);
        }
        if ( v15 < 0 )
        {
          v33 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v33,
              v34,
              *(_QWORD *)(v35 + 19368),
              3,
              1,
              85,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
              (char)a4);
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)v9 + 760, 0LL);
          *((_QWORD *)v9 + 96) = KeGetCurrentThread();
          if ( *((_QWORD *)v9 + 104) )
            rimIssueReads(v9);
          if ( *((_BYTE *)v9 + 776) )
          {
            if ( *((_QWORD *)v9 + 104) )
            {
              v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                CurrentThread = (unsigned __int8)KeGetCurrentThread();
                v44 = (char)v50;
                v45 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23) + 19368);
                WPP_RECORDER_AND_TRACE_SF_qqqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v41,
                  v42,
                  v45,
                  3,
                  HandleInformation,
                  84,
                  (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                  (char)v9,
                  v54,
                  v44,
                  CurrentThread);
              }
            }
            else
            {
              v15 = -1073740682;
              v36 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v38 = (unsigned __int8)KeGetCurrentThread();
                v39 = (char)v50;
                v40 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23) + 19368);
                WPP_RECORDER_AND_TRACE_SF_qqqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v36,
                  v37,
                  v40,
                  3,
                  HandleInformation,
                  83,
                  (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                  (char)v9,
                  v54,
                  v39,
                  v38);
              }
            }
            ZwClose(v50);
          }
          else
          {
            *((_QWORD *)v9 + 105) = v50;
            *((_QWORD *)v9 + 108) = a6;
            *((_QWORD *)v9 + 107) = a7;
            *((_QWORD *)v9 + 109) = a8;
            *((_QWORD *)v9 + 110) = a2;
            *((_DWORD *)v9 + 212) = a5;
            *((_BYTE *)v9 + 776) = 1;
            *((_DWORD *)v9 + 222) = a3;
            v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = (unsigned __int8)KeGetCurrentThread();
              v27 = (char)v50;
              v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
              WPP_RECORDER_AND_TRACE_SF_qqqq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v24,
                v25,
                *(_QWORD *)(v28 + 19368),
                4,
                HandleInformation,
                82,
                (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                (char)v9,
                (char)a4,
                v27,
                v26);
            }
            rimIssueReads(v9);
            v15 = rimCompleteReads(v9);
          }
          *((_QWORD *)v9 + 96) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v9 + 760);
          KeLeaveCriticalRegion();
        }
      }
      *((_QWORD *)v9 + 14) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v9 + 104);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
    }
  }
  v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      *(_QWORD *)(v31 + 19368),
      4,
      1,
      87,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
