/*
 * XREFs of PspCriticalProcessDeathInfoCollect @ 0x1407FAC80
 * Callers:
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404F12A0 (KeInitializeTriageDumpDataArray.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 */

BOOLEAN __fastcall PspCriticalProcessDeathInfoCollect(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  memset_0((void *)a3, 0, 0x20C0uLL);
  KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(a3 + 48), 0x2090u);
  memset_0(a4, 0, 0x88uLL);
  *a4 = 1129333809;
  a4[1] = 136;
  *((_QWORD *)a4 + 6) = a3;
  a4[30] = a2;
  if ( a1 )
  {
    *((_QWORD *)a4 + 7) = a1;
    PspCriticalProcessDeathInfoCollectScheduleApc(a4);
  }
  return KeRegisterBugCheckReasonCallback(
           (PKBUGCHECK_REASON_CALLBACK_RECORD)a3,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspCriticalProcessDeathBugcheckCallback,
           KbCallbackTriageDumpData,
           (PUCHAR)"CriticalProcessDeath");
}
