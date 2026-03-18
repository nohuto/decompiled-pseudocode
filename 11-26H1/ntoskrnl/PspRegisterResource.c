/*
 * XREFs of PspRegisterResource @ 0x140614DC0
 * Callers:
 *     PsInitializeQuotaSystem @ 0x140CD8E40 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRegisterResource(int a1, unsigned __int8 a2, int a3)
{
  __int64 result; // rax

  stru_140FC01F0.SchedulerApcFill3[8 * a1 + 48] = a2;
  *(_DWORD *)&stru_140FC01F0.SchedulerApcFill5[8 * a1 + 52] = a3;
  if ( (a2 & 2) != 0 )
    result = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[4 * a1 + 16] & 0xFFFFFF80 | 0x64;
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[4 * a1 + 16] = result;
  return result;
}
