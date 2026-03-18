/*
 * XREFs of IsDeviceSelectedForPaging @ 0x1400E2704
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeviceSelectedForPaging(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  bool v5; // zf

  v3 = a1 + 184;
  v4 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  v5 = a2 == *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v3 + 8) = 0LL;
  LOBYTE(v4) = v5;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
