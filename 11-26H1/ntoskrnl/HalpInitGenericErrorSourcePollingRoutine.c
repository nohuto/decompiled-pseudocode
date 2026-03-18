/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140BEC328
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140BEC3F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1404A5F90 (KeInitializeTimerEx.c)
 *     KeInitializeMutex @ 0x1404B26F0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140FBA688 = 0LL;
  qword_140FBA770 = 0LL;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140FBA738, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140FBA690, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140FBA6E8 = (__int64)&HalpGenericPolledContext;
  qword_140FBA6E0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140FBA6D0 = 0LL;
  KeInitializeTimerEx(&stru_140FBA6F0, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140FBA6F0, v0, HalpGenericPolledContext, 0, (__int64)&stru_140FBA690);
}
