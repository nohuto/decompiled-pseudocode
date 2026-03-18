/*
 * XREFs of sub_140C4B44C @ 0x140C4B44C
 * Callers:
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x140443620 (KeQueryTimeIncrement.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044F2EC (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

unsigned __int64 sub_140C4B44C()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant(&Mutex, 0, 0, 0);
  stru_140EF0700.Header.Size = 6;
  LOWORD(stru_140EF0700.Header.Lock) = 0;
  stru_140EF0700.Header.SignalState = 0;
  stru_140EF0700.Header.WaitListHead.Blink = &stru_140EF0700.Header.WaitListHead;
  stru_140EF0700.Header.WaitListHead.Flink = &stru_140EF0700.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140FD7120 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
