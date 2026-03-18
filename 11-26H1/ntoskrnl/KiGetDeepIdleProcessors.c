/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1403EDF4C
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlAndAffinityEx @ 0x140252394 (RtlAndAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1403EDFE0 (PoCopyDeepIdleMask.c)
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403EE0E4 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  struct _KAFFINITY_EX *v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int16 *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1;
  _InterlockedOr(v7, 0);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  PoCopyDeepIdleMask(v3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  RtlpComplementAffinityEx(a2, a2->Size, v3);
  return RtlAndAffinityEx(v5, (unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags, (__int64)a2);
}
