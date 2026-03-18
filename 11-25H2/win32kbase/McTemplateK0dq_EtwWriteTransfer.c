/*
 * XREFs of McTemplateK0dq_EtwWriteTransfer @ 0x1400E0DF0
 * Callers:
 *     EtwTraceStartInputDeviceRead @ 0x1400E0D90 (EtwTraceStartInputDeviceRead.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1400E0DC0 (EtwTraceCompleteInputDeviceRead.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1400F2830 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceFocusChange @ 0x1400F2860 (EtwTraceFocusChange.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1400F28D0 (EtwTraceDwmManipulationFrameStart.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(4LL, a2, &W32kControlGuid, 3u, &v6);
}
