/*
 * XREFs of CrmStateMonitorPostShellReadyUsageCallback @ 0x180063770
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorPostShellReadyUsageCheck @ 0x180063830 (CrmStateMonitorPostShellReadyUsageCheck.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyUsageCallback(__int64 a1, int a2, int *a3)
{
  int v3; // ebp
  __int64 v4; // rax
  _DWORD *v6; // rdi
  unsigned int *v7; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a3;
  v4 = 88LL;
  if ( a2 != 24 )
    v4 = 112LL;
  v6 = (_DWORD *)(a1 - v4);
  CempLockAcquireExclusive(a1 - v4 + 8);
  if ( a2 == 24 )
    v6[(v6[40]++ & 3) + 36] = v3;
  else
    v6[(v6[45]++ & 3) + 41] = v3;
  v9 = CrmStateMonitorPostShellReadyUsageCheck(v6);
  if ( v9 )
    CrmStateMonitorStateSet(v7, &v9, 4uLL, 1);
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
