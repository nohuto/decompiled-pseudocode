/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 *     KeInitializeMutex @ 0x1404ABC00 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140FBAA48 = 0LL;
  qword_140FBAB30 = 0LL;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140FBAAF8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140FBAA50, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140FBAAA8 = (__int64)&HalpGenericPolledContext;
  qword_140FBAAA0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140FBAA90 = 0LL;
  KeInitializeTimerEx(&stru_140FBAAB0, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140FBAAB0, v0, HalpGenericPolledContext, 0, (__int64)&stru_140FBAA50);
}
