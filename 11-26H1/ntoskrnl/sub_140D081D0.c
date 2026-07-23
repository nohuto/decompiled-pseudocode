/*
 * XREFs of sub_140D081D0 @ 0x140D081D0
 * Callers:
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14044EAA0 (KeQueryTimeIncrement.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

unsigned __int64 sub_140D081D0()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant(&Mutex, 0LL, 0, 0LL);
  stru_140EF4D40.Header.Size = 6;
  LOWORD(stru_140EF4D40.Header.Lock) = 0;
  stru_140EF4D40.Header.SignalState = 0;
  stru_140EF4D40.Header.WaitListHead.Blink = &stru_140EF4D40.Header.WaitListHead;
  stru_140EF4D40.Header.WaitListHead.Flink = &stru_140EF4D40.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  ExpPlatformBinaryLock.StateSaveArea = (_XSAVE_FORMAT *)(v1 / 10000);
  ExpPlatformBinaryLock.RelativeTimerBias = v1 / 10000;
  return result;
}
