/*
 * XREFs of CrmStateMonitorResourceUsageStart @ 0x180076FEC
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageStart(__int64 a1)
{
  int v1; // edi
  __int64 result; // rax
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 29 )
  {
    *(_QWORD *)(a1 + 104) = -1LL;
  }
  else if ( v1 != 42 )
  {
    return 3221225485LL;
  }
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 100;
  v4 = CrmStateMonitorStateSizeGet(v1);
  memcpy_0(v6, v5, v4);
  if ( v1 != 29
    || (result = TpAllocTimer(a1 + 88, CrmStateMonitorResourceUsageTimerCallback, a1, 0LL), (int)result >= 0) )
  {
    result = CrmRegisterToStateMonitor(a1 + 64, 8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
