/*
 * XREFs of RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC
 * Callers:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x140131A10 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140154200 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x14020BFB4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMFreeAsyncWorkItem @ 0x14012CDEC (RIMFreeAsyncWorkItem.c)
 *     ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CF6C (-QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueAndSignalAsyncWorkItem(struct RawInputManagerObject *a1, char **Buffer)
{
  int v4; // edx
  int v5; // r8d
  char v6; // r15
  char *v7; // rbx
  struct RawInputManagerObject **v8; // rax
  char **v9; // r14
  bool v10; // r13
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  bool v14; // bl
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 result; // rax
  bool v20; // r14
  bool v21; // r13
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  char **v25; // rax
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  NTSTATUS v29; // [rsp+B0h] [rbp+8h]
  char *v30; // [rsp+C0h] [rbp+18h]

  v30 = (char *)a1 + 352;
  RIMLockExclusive((char *)a1 + 352);
  v6 = 1;
  if ( *((_BYTE *)a1 + 10) )
  {
    v9 = Buffer;
  }
  else
  {
    v7 = (char *)a1 + 376;
    v8 = (struct RawInputManagerObject **)*((_QWORD *)a1 + 48);
    if ( *v8 != (struct RawInputManagerObject *)((char *)a1 + 376) )
      goto LABEL_3;
    *Buffer = v7;
    Buffer[1] = (char *)v8;
    *v8 = (struct RawInputManagerObject *)Buffer;
    *((_QWORD *)a1 + 48) = Buffer;
    v29 = ZwReleaseSemaphore(*((HANDLE *)a1 + 46), 1, 0LL);
    if ( v29 >= 0 )
    {
      InputTraceLogging::RIM::QueueAsyncWorkItem(a1, (const struct RIMAsyncWorkItem *)Buffer);
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          11,
          (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
          (char)a1,
          (char)Buffer);
      }
      v9 = 0LL;
      goto LABEL_18;
    }
    v4 = (int)WPP_GLOBAL_Control;
    v20 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v11 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v11 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v20 = 1;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(v11, (_DWORD)WPP_GLOBAL_Control, v5);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 19368),
        2,
        1,
        10,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v29);
    }
    v9 = (char **)*((_QWORD *)a1 + 48);
    if ( *v9 != v7 || (v25 = (char **)v9[1], *v25 != (char *)v9) )
LABEL_3:
      __fastfail(3u);
    *((_QWORD *)a1 + 48) = v25;
    *v25 = v7;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, v5);
    LOBYTE(v27) = v10;
    LOBYTE(v28) = v6;
    WPP_RECORDER_AND_TRACE_SF_qqqDSd(*((_QWORD *)WPP_GLOBAL_Control + 3), v28, v27, *(_QWORD *)(v26 + 19368), 2);
  }
LABEL_18:
  result = RIMUnlockExclusive(v30);
  if ( v9 )
    return RIMFreeAsyncWorkItem(v9);
  return result;
}
