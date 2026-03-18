/*
 * XREFs of McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     EtwTraceStartInputDeviceRead @ 0x14012B450 (EtwTraceStartInputDeviceRead.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x14012B480 (EtwTraceCompleteInputDeviceRead.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x14013ABA0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceFocusChange @ 0x14013ABD0 (EtwTraceFocusChange.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x14013AC40 (EtwTraceDwmManipulationFrameStart.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v8 = 4LL;
  v7 = &v11;
  v10 = 4LL;
  v9 = &a5;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
