/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1402C7D20
 * Callers:
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     ?KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z @ 0x1405F6C50 (-KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 */

void __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  char v2; // r8
  unsigned int v3; // edx
  bool v4; // al
  __int64 v5; // r10
  int v6; // r9d
  bool v7; // r11
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]

  v2 = a2;
  if ( a2 == 2 )
  {
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
      return;
    }
  }
  v9 = 0LL;
  if ( (KiTrapFeatures & 0x10) != 0 )
  {
    if ( (unsigned __int8)(a2 - 1) > 1u )
      goto LABEL_8;
    v4 = HalpDisableInterrupts();
    v6 = *(_DWORD *)(v5 + 168);
    v7 = v4;
    *(_DWORD *)(v5 + 168) = v6 | (1 << v2);
    if ( !v6 )
      __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
    if ( v7 )
      _enable();
  }
  if ( v2 == 1 )
  {
    v3 = 31;
    goto LABEL_9;
  }
LABEL_8:
  v3 = 47;
LABEL_9:
  v8 = 5;
  HalpInterruptSendIpi(&v8, v3);
}
