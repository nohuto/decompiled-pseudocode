/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x14020AFA4 (W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 *     W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x14020B10C (W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1400475D0 (RIMAllocateAsyncInputWorkItem.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x140091478 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // r8d
  void *v6; // r14
  unsigned int v7; // r13d
  int v8; // r12d
  char v9; // r15
  bool v10; // di
  bool v11; // si
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rax
  bool v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  char **v20; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v24; // rbx
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // r12
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  _BYTE v32[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v32);
  v6 = *(void **)a2;
  v7 = 0;
  v8 = *(_DWORD *)(a2 + 8);
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    UserSessionState = W32GetUserSessionState(v4, (_DWORD)WPP_GLOBAL_Control, v5);
    LOBYTE(v26) = v11;
    LOBYTE(v27) = v10;
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      13,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v24);
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40));
  v14 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v14 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v14 )
  {
    v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19368),
        4,
        1,
        14,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
    }
    v20 = (char **)RIMAllocateAsyncInputWorkItem(
                     v6,
                     0LL,
                     v8,
                     (_OWORD *)(a1 + 20),
                     (_OWORD *)(a1 + 4),
                     *(PCUNICODE_STRING *)(a1 + 40),
                     0,
                     0);
    if ( v20 )
    {
      RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v6, v20);
    }
    else
    {
      v7 = -1073741801;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v9;
        WPP_RECORDER_AND_TRACE_SF_qqqDSd(*((_QWORD *)WPP_GLOBAL_Control + 3), v31, v30, *(_QWORD *)(v29 + 19368), 2);
      }
    }
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v32);
  return v7;
}
