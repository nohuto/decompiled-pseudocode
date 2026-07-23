/*
 * XREFs of KeCalculateProcessDefaultQos @ 0x1405FBE10
 * Callers:
 *     PspQueryProcessDefaultQos @ 0x140618240 (PspQueryProcessDefaultQos.c)
 *     PspProcessQosChangeNotificationWorker @ 0x140B77F30 (PspProcessQosChangeNotificationWorker.c)
 * Callees:
 *     Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140461530 (Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405FBDB4 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall KeCalculateProcessDefaultQos(__int64 a1)
{
  int v1; // edi
  unsigned int v3; // ebx

  v1 = *(char *)(a1 + 144);
  v3 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)(a1 + 136) >> 7) & 0xF];
  if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() && v3 == 7 )
  {
    if ( (char)v1 >= 15
      || (KiDynamicHeteroCpuPolicyMask & 2) != 0
      && (v1 >= KiDynamicHeteroCpuPolicyImportantPriority
       || !(unsigned int)Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline()
       && (*(_DWORD *)(a1 + 1532) & 0x1000) != 0
       && (char)v1 >= 8) )
    {
      v3 = 0;
    }
    else
    {
      v3 = 6;
    }
  }
  Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline();
  return v3;
}
