/*
 * XREFs of PiUEventIsClientStuck @ 0x14077C0F4
 * Callers:
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 * Callees:
 *     Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline @ 0x1405DA6FC (Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline.c)
 *     PiUEventIsProcessFrozen @ 0x1407A5950 (PiUEventIsProcessFrozen.c)
 */

bool __fastcall PiUEventIsClientStuck(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128)
    && *(unsigned int *)(a1 + 128)
     * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
      / 10000LL) > 600000 )
  {
    return !(unsigned int)Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline()
        || (unsigned __int8)PiUEventIsProcessFrozen(*(_QWORD *)(a1 + 48)) == 0;
  }
  return v1;
}
