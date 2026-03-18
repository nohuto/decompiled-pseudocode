/*
 * XREFs of PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B77F8C
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8 (PspEnqueueProcessQosChangeNotification.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405F9394 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PspSetProcessPriorityByClassIgnoreForegroundBoost(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9

  KeSetPriorityAndQuantumProcess(a1, *(unsigned int *)&PspPriorityTable[2 * *(unsigned __int8 *)(a1 + 839)], 0, 0, 0);
  if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() )
    PspEnqueueProcessQosChangeNotification(a1, v2, v3, v4);
}
