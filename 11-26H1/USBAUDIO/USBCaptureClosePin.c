/*
 * XREFs of USBCaptureClosePin @ 0x1400398C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBCaptureWaitForWorkerComplete @ 0x14000BBD0 (USBCaptureWaitForWorkerComplete.c)
 *     USBHwFreePipes @ 0x14003BFC0 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x14004146C (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  bool v4; // dl

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 224), (struct _KEVENT *)(v3 + 232));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 256));
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 264), (struct _KEVENT *)(v3 + 272));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 296));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
