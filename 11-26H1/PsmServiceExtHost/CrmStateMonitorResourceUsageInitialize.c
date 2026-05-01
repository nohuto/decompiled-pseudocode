/*
 * XREFs of CrmStateMonitorResourceUsageInitialize @ 0x180076F90
 * Callers:
 *     CrmStateMonitorInitialize @ 0x180048924 (CrmStateMonitorInitialize.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void *__fastcall CrmStateMonitorResourceUsageInitialize(__int64 a1)
{
  void *result; // rax

  result = memset_0((void *)(a1 + 56), 0, 0x48uLL);
  if ( *(_DWORD *)a1 == 29 )
  {
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorResourceUsageLocalPollCSCallback;
  }
  else
  {
    if ( *(_DWORD *)a1 != 42 )
      return result;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorResourceUsageIsolatedPollCSCallback;
  }
  *(_QWORD *)(a1 + 64) = result;
  return result;
}
