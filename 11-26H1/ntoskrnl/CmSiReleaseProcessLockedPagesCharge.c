/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C
 * Callers:
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x1408BE42C (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408BFBB4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall CmSiReleaseProcessLockedPagesCharge(__int64 a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // ecx
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(struct _KPROCESS **)(a1 + 8);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmpVolumeManagerLockContextListExclusive(a1 + 16);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 32) - a2;
  v7 = *(_DWORD *)(a1 + 32) - a2;
  v9[0] = 0;
  MmAdjustWorkingSetSizeEx(v7, v5, 0, 0, 0, (__int64)v9);
  *(_QWORD *)(a1 + 24) -= a2;
  *(_QWORD *)(a1 + 32) = v6;
  CmSiRWLockReleaseExclusive((struct _KTHREAD *)(a1 + 16));
  return KiUnstackDetachProcess((__int64)&ApcState, 0);
}
