/*
 * XREFs of ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A520
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401D4478 (xxxWaitForDITMouseInjectionFlush.c)
 * Callees:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

void __fastcall xxxReceiveMessages(struct tagTHREADINFO *a1)
{
  __int64 i; // rcx

  for ( i = *((_QWORD *)a1 + 61); (INTERLOCKEDINT::operator int(i + 8) & 0x40) != 0; i = *((_QWORD *)a1 + 61) )
    xxxReceiveMessage(a1);
}
