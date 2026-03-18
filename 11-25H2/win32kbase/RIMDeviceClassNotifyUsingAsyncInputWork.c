/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401EC630 (W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 *     W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401EC798 (W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x14011FD30 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  void *v7; // r14
  unsigned int v8; // r13d
  int v9; // r12d
  char v10; // r15
  bool v11; // di
  bool v12; // si
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  struct RIMAsyncWorkItem *v24; // rax
  __int64 v25; // rdx
  char v26; // r12
  __int64 v27; // rax
  int SourceString; // [rsp+28h] [rbp-170h]
  _BYTE v30[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v30);
  v7 = *(void **)a2;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 8);
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      13,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v13);
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40),
    v5,
    v6);
  v18 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v18 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v18 )
  {
    v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 19336),
        4,
        1,
        14,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
    }
    v24 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(
                                       v7,
                                       0LL,
                                       v9,
                                       (_OWORD *)(a1 + 20),
                                       (_OWORD *)(a1 + 4),
                                       *(PCUNICODE_STRING *)(a1 + 40),
                                       0,
                                       0);
    if ( v24 )
    {
      RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v7, v24);
    }
    else
    {
      v8 = -1073741801;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        WPP_RECORDER_AND_TRACE_SF_qqqDSd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v26,
          *(_QWORD *)(v27 + 19336),
          2u,
          SourceString,
          0xFu,
          (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
      }
    }
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v30);
  return v8;
}
