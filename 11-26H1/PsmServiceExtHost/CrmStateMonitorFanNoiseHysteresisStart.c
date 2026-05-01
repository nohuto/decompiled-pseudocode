/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisStart @ 0x18006BC24
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisStart(__int64 a1, void *a2)
{
  const void *v2; // rdi
  __int64 result; // rax
  unsigned int v6; // eax

  v2 = (const void *)(a1 + 56);
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  result = TpAllocTimer(a1 + 112, CrmStateMonitorFanNoiseHysteresisTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 152) = 0LL;
    result = CrmRegisterToStateMonitor(a1 + 88, 40);
    if ( (int)result >= 0 )
    {
      v6 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
      memcpy_0(a2, v2, v6);
      return 0LL;
    }
  }
  return result;
}
