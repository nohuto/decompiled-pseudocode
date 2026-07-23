/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1403129C0
 * Callers:
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     ?KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z @ 0x1405F9610 (-KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
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
