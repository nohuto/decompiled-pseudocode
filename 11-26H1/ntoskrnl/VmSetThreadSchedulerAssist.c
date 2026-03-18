/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x1403BFAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x1403BFAB8 (KeSetThreadSchedulerAssist.c)
 */

__int64 __fastcall VmSetThreadSchedulerAssist(ULONG_PTR a1)
{
  return KeSetThreadSchedulerAssist(a1);
}
