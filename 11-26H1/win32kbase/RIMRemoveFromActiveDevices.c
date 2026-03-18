/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x140131468
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFindLastDeviceFrame @ 0x140131724 (rimFindLastDeviceFrame.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x140131A10 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     RIMUpdatePrimaryDevice @ 0x14013B858 (RIMUpdatePrimaryDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  struct RawInputManagerObject *v7; // rdi
  __int64 LastDeviceFrame; // rax
  __int64 v9; // rbp
  unsigned int v10; // esi
  __int64 *v11; // rsi
  char *v12; // r15
  __int64 v13; // rbp
  CTouchProcessor *v14; // rcx
  char v15; // di
  bool v16; // r12
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v23,
    (struct RawInputManagerObject *)((char *)a1 + 760));
  v6 = *(_QWORD *)(a2 + 16);
  v7 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 56);
  if ( v6 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(a1, v6);
    v9 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v10 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          if ( !gbIgnoreStressedOutStuff && (*(_DWORD *)(192LL * v10 + *(_QWORD *)(v9 + 232) + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080LL, 2773LL);
          ++v10;
        }
        while ( v10 != *(_DWORD *)(v9 + 24) );
      }
    }
  }
  if ( *((_QWORD *)a1 + 60) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( 1 )
  {
    v11 = (__int64 *)v7;
    if ( v7 == (struct RawInputManagerObject *)((char *)a1 + 448) )
      break;
    v12 = (char *)v7 - 8;
    v7 = *(struct RawInputManagerObject **)v7;
    if ( *(_QWORD *)v12 == a2 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v13 + 172) &= ~0x10u;
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v4);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          38,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
          v13);
      }
      if ( (*((_DWORD *)v12 + 6) & 1) == 0 )
      {
        if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)v14, v6) )
          ApiSetPostPointerDeviceOutOfRangeMessage(a2);
        else
          rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1);
      }
      v20 = *v11;
      if ( *(__int64 **)(*v11 + 8) != v11 || (v21 = (__int64 *)v11[1], (__int64 *)*v21 != v11) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      GreDeleteFastMutex(v12, v20, v4, v5);
      if ( !*((_DWORD *)a1 + 116) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2824LL);
      --*((_DWORD *)a1 + 116);
      break;
    }
  }
  if ( v23 )
    RIMUnlockExclusive(v23);
  return 1LL;
}
