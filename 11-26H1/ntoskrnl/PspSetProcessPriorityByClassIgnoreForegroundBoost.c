/*
 * XREFs of PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B7D69C
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405FBDB4 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PspSetProcessPriorityByClassIgnoreForegroundBoost(unsigned __int8 *a1)
{
  KeSetPriorityAndQuantumProcess((__int64)a1, *(unsigned int *)&PspPriorityTable[2 * a1[839]], 0, 0, 0);
  if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() )
    PspEnqueueProcessQosChangeNotification(a1);
}
