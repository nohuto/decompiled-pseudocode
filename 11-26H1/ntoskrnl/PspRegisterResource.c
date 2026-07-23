/*
 * XREFs of PspRegisterResource @ 0x140617C00
 * Callers:
 *     PsInitializeQuotaSystem @ 0x140CDF1C0 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRegisterResource(int a1, unsigned __int8 a2, int a3)
{
  __int64 result; // rax

  stru_140FC11F0.SchedulerApcFill3[8 * a1 + 40] = a2;
  *(_DWORD *)&stru_140FC11F0.SchedulerApcFill5[8 * a1 + 44] = a3;
  if ( (a2 & 2) != 0 )
    result = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[4 * a1 + 16] & 0xFFFFFF80 | 0x64;
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[4 * a1 + 16] = result;
  return result;
}
