/*
 * XREFs of RIMQueueAndSignalAsyncWorkItem @ 0x140199F14
 * Callers:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7374 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1401154CC (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140118F68 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401ED8B4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401F0720 (RIMDeviceNotifyUsingAsyncInputWork.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A210 (-QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@.c)
 *     RIMFreeAsyncWorkItem @ 0x14019A398 (RIMFreeAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMQueueAndSignalAsyncWorkItem(struct RawInputManagerObject *a1, struct RIMAsyncWorkItem *a2)
{
  void *v4; // rdx
  char v5; // r15
  char *v6; // rbx
  struct RawInputManagerObject **v7; // rax
  __int64 v8; // rcx
  bool v9; // r14
  bool v10; // r13
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  struct RIMAsyncWorkItem *v14; // r14
  struct RIMAsyncWorkItem **v15; // rax
  __int64 v16; // rdx
  bool v17; // bl
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // r13
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // [rsp+28h] [rbp-80h]
  NTSTATUS v33; // [rsp+B0h] [rbp+8h]
  char *v34; // [rsp+C0h] [rbp+18h]

  v34 = (char *)a1 + 352;
  RIMLockExclusive((__int64)a1 + 352);
  v5 = 1;
  if ( *((_BYTE *)a1 + 10) )
  {
    v14 = a2;
    LOBYTE(v33) = -69;
LABEL_26:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *((_QWORD *)a2 + 7);
      if ( v23 )
        v24 = *(_QWORD *)(v23 + 272);
      else
        v24 = *((_QWORD *)a2 + 6);
      v25 = *((_DWORD *)a1 + 21);
      v26 = *((_QWORD *)a1 + 5);
      v27 = *((_QWORD *)a1 + 4);
      v28 = *((_QWORD *)a1 + 9);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v30) = v22;
      LOBYTE(v31) = v5;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        v32,
        12,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v28,
        v27,
        v26,
        v25,
        v24,
        v33);
    }
    goto LABEL_36;
  }
  v6 = (char *)a1 + 376;
  v7 = (struct RawInputManagerObject **)*((_QWORD *)a1 + 48);
  if ( *v7 != (struct RawInputManagerObject *)((char *)a1 + 376) )
LABEL_24:
    __fastfail(3u);
  *(_QWORD *)a2 = v6;
  *((_QWORD *)a2 + 1) = v7;
  *v7 = a2;
  *((_QWORD *)a1 + 48) = a2;
  v33 = ZwReleaseSemaphore(*((HANDLE *)a1 + 46), 1, 0LL);
  if ( v33 < 0 )
  {
    v4 = WPP_GLOBAL_Control;
    v9 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v8 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v8 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v9 = 1;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(v8, WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 19336),
        2,
        1,
        10,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v33);
    }
    v14 = (struct RIMAsyncWorkItem *)*((_QWORD *)a1 + 48);
    if ( *(char **)v14 == v6 )
    {
      v15 = (struct RIMAsyncWorkItem **)*((_QWORD *)v14 + 1);
      if ( *v15 == v14 )
      {
        *((_QWORD *)a1 + 48) = v15;
        *v15 = (struct RIMAsyncWorkItem *)v6;
        goto LABEL_26;
      }
    }
    goto LABEL_24;
  }
  InputTraceLogging::RIM::QueueAsyncWorkItem(a1, a2);
  v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19336),
      4,
      1,
      11,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      (char)a1,
      a2);
  }
  v14 = 0LL;
LABEL_36:
  RIMUnlockExclusive((__int64)v34);
  if ( v14 )
    RIMFreeAsyncWorkItem(v14);
}
