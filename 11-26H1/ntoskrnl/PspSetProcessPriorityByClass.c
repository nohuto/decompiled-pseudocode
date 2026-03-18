/*
 * XREFs of PspSetProcessPriorityByClass @ 0x14051C2E4
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140A8FEB8 (PspApplyJobLimitsToProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140ABAD60 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8 (PspEnqueueProcessQosChangeNotification.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405F9394 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 *     PspComputeQuantumAndPriority @ 0x140966A94 (PspComputeQuantumAndPriority.c)
 */

void __fastcall PspSetProcessPriorityByClass(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  UCHAR v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  v9 = 0;
  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v7, (unsigned int)&v9, (__int64)&v8);
  KeSetPriorityAndQuantumProcess(a1, v3, v7, v9, v8);
  if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() )
    PspEnqueueProcessQosChangeNotification(a1, v4, v5, v6);
}
