/*
 * XREFs of PspSetProcessPriorityByClass @ 0x140518324
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140ABC220 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C (PspSetProcessForegroundBackgroundRequest.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405FBDB4 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 *     PspComputeQuantumAndPriority @ 0x140AB8340 (PspComputeQuantumAndPriority.c)
 */

void __fastcall PspSetProcessPriorityByClass(void *a1, int a2)
{
  unsigned int v3; // eax
  UCHAR v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v4 = 0;
  v6 = 0;
  v3 = PspComputeQuantumAndPriority((_DWORD)a1, a2, (unsigned int)&v4, (unsigned int)&v6, (__int64)&v5);
  KeSetPriorityAndQuantumProcess((__int64)a1, v3, v4, v6, v5);
  if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() )
    PspEnqueueProcessQosChangeNotification(a1);
}
