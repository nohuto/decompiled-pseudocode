/*
 * XREFs of KxFlushSingleTb @ 0x1405FC9F8
 * Callers:
 *     KeFlushSingleTb @ 0x1405F0DF4 (KeFlushSingleTb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequestEx @ 0x140329D60 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403EF310 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int16 *p_Count; // rsi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]

  v14 = 0;
  v3 = 2147483650LL;
  v13 = a2;
  v12 = a1;
  v5 = 1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    p_Count = 0LL;
  }
  else
  {
    _InterlockedOr(v11, 0);
    p_Count = &CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count;
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    RtlpCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v5 = 0;
  }
  KiIpiSendRequestEx((__int64)CurrentPrcb, v5, p_Count, (int)&v12, v3, (__int64)KiFlushSingleTbWorker, (__int64)&v12);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
