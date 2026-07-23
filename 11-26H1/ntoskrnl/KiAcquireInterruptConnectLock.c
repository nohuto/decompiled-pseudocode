/*
 * XREFs of KiAcquireInterruptConnectLock @ 0x14043081C
 * Callers:
 *     KiConnectInterrupt @ 0x140431660 (KiConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _KPRCB *__fastcall KiAcquireInterruptConnectLock(int a1, unsigned __int8 *a2, _GROUP_AFFINITY *a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bl
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v5 = KiProcessorBlock[a1];
  Affinity.Group = *(unsigned __int8 *)(v5 + 208);
  Affinity.Mask = *(_QWORD *)(v5 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  result = KeGetCurrentPrcb();
  if ( a1 != result->Number )
    __fastfail(0x28u);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    result = (struct _KPRCB *)KiRaiseIrqlProcessIrqlFlags(v6, 15LL);
  }
  *a2 = CurrentIrql;
  return result;
}
