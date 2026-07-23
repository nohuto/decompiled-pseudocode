/*
 * XREFs of CmSiAcquireProcessLockedPagesCharge @ 0x1403C6098
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x1408BE42C (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall CmSiAcquireProcessLockedPagesCharge(__int64 a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  int v7; // ecx
  int v8; // r9d
  int v9; // edi
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(struct _KPROCESS **)(a1 + 8);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmpVolumeManagerLockContextListExclusive(a1 + 16);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = a2 + *(_QWORD *)(a1 + 32);
  v7 = a2 + *(_DWORD *)(a1 + 32);
  LOBYTE(v8) = 1;
  v11[0] = 0;
  v9 = MmAdjustWorkingSetSizeEx(v7, v5, 0, v8, 0, (__int64)v11);
  if ( v9 >= 0 )
  {
    *(_QWORD *)(a1 + 24) += a2;
    v9 = 0;
    *(_QWORD *)(a1 + 32) = v6;
  }
  CmSiRWLockReleaseExclusive((struct _KTHREAD *)(a1 + 16));
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return (unsigned int)v9;
}
