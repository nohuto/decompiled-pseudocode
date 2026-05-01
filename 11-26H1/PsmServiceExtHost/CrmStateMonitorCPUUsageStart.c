/*
 * XREFs of CrmStateMonitorCPUUsageStart @ 0x180076194
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CrmStateMonitorCPUUsageStart(__int64 a1, void *a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // r9
  NTSTATUS result; // eax
  _BYTE SystemInformation[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  v4 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 100;
  v5 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(a2, v6, v5);
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    *(_BYTE *)(a1 + 100) = SystemInformation[56];
    result = TpAllocTimer(a1 + 88, CrmStateMonitorCPUUsageTimerCallback, a1, 0LL);
    if ( result >= 0 )
      return CrmRegisterToStateMonitor(a1 + 64, 8);
  }
  return result;
}
