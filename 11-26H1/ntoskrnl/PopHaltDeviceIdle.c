/*
 * XREFs of PopHaltDeviceIdle @ 0x1404FA45C
 * Callers:
 *     PoInitializeBroadcast @ 0x140AC58BC (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  KIRQL v1; // al
  __int128 v2; // [rsp+30h] [rbp-20h] BYREF
  char *v3; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
  BYTE4(stru_140E66FF0.KcsanThread) = 1;
  if ( LODWORD(stru_140E66FF0.KcsanThread) )
  {
    LOWORD(v2) = 1;
    v3 = (char *)&v2 + 8;
    BYTE2(v2) = 6;
    *((_QWORD *)&v2 + 1) = (char *)&v2 + 8;
    v0 = &v2;
    DWORD1(v2) = 0;
    stru_140E66FF0.Spare32 = &v2;
  }
  KeReleaseSpinLock(&qword_140F10808, v1);
  if ( v0 )
    KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
}
