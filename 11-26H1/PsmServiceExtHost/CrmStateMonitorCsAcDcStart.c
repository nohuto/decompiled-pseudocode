/*
 * XREFs of CrmStateMonitorCsAcDcStart @ 0x18007660C
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorCsAcDcStart(__int64 a1)
{
  _DWORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 60) = 0;
  v3 = *(_DWORD *)a1;
  *v1 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmRegisterToStateMonitor(a1 + 64, 4);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 88, 8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
