/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1407A71F8
 * Callers:
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1409A4110 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1409A7EC4 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, __int64 a2)
{
  int Object; // eax
  int v4; // esi
  struct _KTHREAD *v5; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+60h] [rbp+30h] BYREF
  PVOID v11; // [rsp+68h] [rbp+38h] BYREF

  P = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  Object = PiDmGetObject(1LL, a2, &P);
  v4 = Object;
  if ( Object >= 0 )
  {
    v4 = 0;
LABEL_3:
    v5 = (struct _KTHREAD *)P;
    goto LABEL_4;
  }
  if ( Object != -1073741772 )
    goto LABEL_3;
  v4 = PiDmAddCacheReferenceForObject(1LL, a2, &P);
  if ( v4 < 0 )
    goto LABEL_3;
  v5 = (struct _KTHREAD *)P;
  KsepCacheLock(P);
  LODWORD(v5->QuantumTarget) |= 1u;
  CmpUnlockSiloKeyLockTracker(v5);
  if ( (int)PiPnpRtlBeginOperation(&v11, v7) >= 0 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    v8 = PiPnpRtlObjectEventCreate(a2, 1LL, v11, &v9);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    if ( v8 >= 0 && v9 )
      *(_DWORD *)(v9 + 4) |= 1u;
    PiPnpRtlEndOperation(v11);
  }
LABEL_4:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v4;
}
