/*
 * XREFs of sub_140D01E30 @ 0x140D01E30
 * Callers:
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x140457230 (KeQueryTimeIncrement.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

unsigned __int64 sub_140D01E30()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant(&Mutex, 0LL, 0, 0LL);
  stru_140EF49E0.Header.Size = 6;
  LOWORD(stru_140EF49E0.Header.Lock) = 0;
  stru_140EF49E0.Header.SignalState = 0;
  stru_140EF49E0.Header.WaitListHead.Blink = &stru_140EF49E0.Header.WaitListHead;
  stru_140EF49E0.Header.WaitListHead.Flink = &stru_140EF49E0.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  ExpPlatformBinaryLock.StateSaveArea = (_XSAVE_FORMAT *)(v1 / 10000);
  ExpPlatformBinaryLock.RelativeTimerBias = v1 / 10000;
  return result;
}
