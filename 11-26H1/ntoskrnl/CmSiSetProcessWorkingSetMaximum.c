/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  unsigned int v0; // ebx
  int v1; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v4[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  KiStackAttachProcess((_KPROCESS *)CmpFreezeListLock.CycleTime, 0, (__int64)v4);
  CmpVolumeManagerLockContextListExclusive(&CmpFreezeListLock.CurrentRunTime);
  v0 = 0;
  v3[0] = 0;
  v1 = MmAdjustWorkingSetSizeEx((unsigned __int64)CmpFreezeListLock.StateSaveArea, 0x4000000LL, 0LL, 1, 0, v3);
  if ( v1 < 0 )
    v0 = v1;
  else
    CmpFreezeListLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)0x4000000;
  CmSiRWLockReleaseExclusive((struct _KTHREAD *)&CmpFreezeListLock.CurrentRunTime);
  KiUnstackDetachProcess((__int64)v4, 0);
  return v0;
}
