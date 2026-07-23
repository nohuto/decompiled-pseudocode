/*
 * XREFs of HalFreeCommonBufferVector @ 0x140345C80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferVector(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = a2[4];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = a2[2] * *((unsigned int *)a2 + 6);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 104));
  v7 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v8 = (__int64 **)a2[1], *v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 104), v6);
  if ( *((_BYTE *)a2 + 72) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), a2[7], v5 >> 12);
  HalpDmaDereferenceDomainObject(v2);
  MmUnmapLockedPages((PVOID)a2[6], (PMDL)a2[5]);
  MiFreePagesFromMdl(a2[5]);
  ExFreePoolWithTag((PVOID)a2[5], 0);
  HalpMmAllocCtxFree(v9, a2[8]);
  return HalpMmAllocCtxFree(v10, a2);
}
