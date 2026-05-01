/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisSetTimer @ 0x1800682AC
 * Callers:
 *     CrmStateMonitorFanNoiseHysteresisCallback @ 0x180068210 (CrmStateMonitorFanNoiseHysteresisCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x18006BFD0 (CrmStateMonitorFanNoiseHysteresisTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisSetTimer(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 152);
  v3 = MEMORY[0x7FFE0008];
  if ( !a2 )
    *v2 = MEMORY[0x7FFE0008] + 300000000LL;
  if ( v3 < *v2 )
    v4 = v3 - *v2;
  else
    v4 = -1LL;
  v5 = *(_QWORD *)(a1 + 112);
  v7 = v4;
  return TpSetTimer(v5, &v7, 0LL, 1000LL);
}
