/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x140905AA4 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140905BD0 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  unsigned int v0; // ebx
  int v1; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v4[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  KiStackAttachProcess((_KPROCESS *)CmpFreezeListLock.RelativeTimerBias, 0, (__int64)v4);
  CmpVolumeManagerLockContextListExclusive(&CmpFreezeListLock.Timer);
  v0 = 0;
  v3[0] = 0;
  v1 = MmAdjustWorkingSetSizeEx(
         (unsigned __int64)CmpFreezeListLock.Timer.Header.WaitListHead.Blink,
         0x4000000LL,
         0LL,
         1,
         0,
         v3);
  if ( v1 < 0 )
    v0 = v1;
  else
    CmpFreezeListLock.Timer.DueTime.QuadPart = 0x4000000LL;
  CmSiRWLockReleaseExclusive((struct _KTHREAD *)&CmpFreezeListLock.Timer);
  KiUnstackDetachProcess((__int64)v4, 0);
  return v0;
}
