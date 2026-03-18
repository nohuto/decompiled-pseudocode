/*
 * XREFs of PerfLogExecutiveResourceInitialize @ 0x1405263E4
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     ExReinitializeResourceLite @ 0x1404B66D0 (ExReinitializeResourceLite.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140652410 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406CE730 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CC68FC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogExecutiveResourceInitialize(int a1, __int64 a2, int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+48h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+4Ch] [rbp-34h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v10 = a1;
  v9 = a2;
  v7 = a3;
  v11 = a4;
  memset(v6, 0, sizeof(v6));
  v12[1] = 48LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v12[0] = v6;
  return EtwTraceKernelEvent((int)v12, 1, 0x20020000u, 1323, 23074818);
}
