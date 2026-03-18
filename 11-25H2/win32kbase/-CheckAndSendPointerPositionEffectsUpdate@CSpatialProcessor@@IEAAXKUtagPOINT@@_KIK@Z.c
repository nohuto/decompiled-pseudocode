/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140067380
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x140037658 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140067578 (ApiSetAddMagnificationOutputTransform.c)
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x1400676FC (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x140067768 (CoreMsgSend.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // rsi
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-1B8h] BYREF
  _DWORD v16[104]; // [rsp+30h] [rbp-1A8h] BYREF

  if ( (unsigned __int8)IsInputProcessingActivated() )
  {
    v10 = *((_DWORD *)this + 6);
    if ( v10 == a2 && (v10 != 2 || *((_DWORD *)this + 7) == a5) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( a4 - *((_QWORD *)this + 2) > PerformanceFrequency.QuadPart / 0x1EuLL )
      {
        *((_QWORD *)this + 2) = a4;
        memset(v16, 0, 0x198uLL);
        v16[6] = a6;
        v16[0] = 1;
        v16[2] = a2;
        *(struct tagPOINT *)&v16[3] = a3;
        v16[5] = a5;
        ApiSetAddMagnificationOutputTransform(&v16[3]);
        v13 = 0LL;
        v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 16408);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v14 + 8, 0LL);
        if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v14, 4LL) )
        {
          InputTraceLogging::Win32k::SendCoreMessagingK(4LL);
          v13 = *(void **)(v14 + 184);
        }
        ExReleasePushLockSharedEx(v14 + 8, 0LL);
        KeLeaveCriticalRegion();
        if ( v13 )
          CoreMsgSend(v13);
      }
    }
  }
}
