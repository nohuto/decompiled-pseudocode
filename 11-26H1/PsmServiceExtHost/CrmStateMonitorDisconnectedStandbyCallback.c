/*
 * XREFs of CrmStateMonitorDisconnectedStandbyCallback @ 0x18001CF00
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineSebLevel @ 0x18001CFAC (CrmStateRoutineSebLevel.c)
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmStateMonitorDisconnectedStandbyCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v6; // rdi
  int v7; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 64LL;
  if ( a2 != 8 )
    v3 = 88LL;
  v6 = (_DWORD *)(a1 - v3);
  CempLockAcquireExclusive(a1 - v3 + 8);
  if ( a2 == 8 )
    v6[28] = CrmStateRoutineConnectedStandby(a3);
  else
    v6[29] = CrmStateRoutineSebLevel(a3);
  if ( !v6[28] || (v7 = 1, v6[29]) )
    v7 = 0;
  v9 = v7;
  CrmStateMonitorStateSet(v6, &v9, 4LL);
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
