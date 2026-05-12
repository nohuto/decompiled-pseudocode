/*
 * XREFs of StorChildAdapterPdoRemoveDevice @ 0x14012F524
 * Callers:
 *     StorChildAdapterPdoPnpIrp @ 0x14012EFE0 (StorChildAdapterPdoPnpIrp.c)
 * Callees:
 *     StorGetCommonAdapterMiniport @ 0x140078958 (StorGetCommonAdapterMiniport.c)
 */

__int64 __fastcall StorChildAdapterPdoRemoveDevice(ULONG_PTR BugCheckParameter2, PIRP Irp)
{
  _DWORD *CommonAdapterMiniport; // rax
  ULONG_PTR v5; // rcx
  struct _DEVICE_OBJECT *v6; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedExchange((volatile __int32 *)(BugCheckParameter2 + 60), 6);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(BugCheckParameter2 + 64));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(BugCheckParameter2 + 64));
  CommonAdapterMiniport = StorGetCommonAdapterMiniport(*(_DWORD **)(BugCheckParameter2 + 72));
  if ( !CommonAdapterMiniport )
    KeBugCheckEx(0x176u, 5uLL, BugCheckParameter2, v5, 0LL);
  CommonAdapterMiniport[62] &= 0xFFFFFE7F;
  _InterlockedOr(v8, 0);
  *((_QWORD *)CommonAdapterMiniport + 48) = 0LL;
  *((_QWORD *)CommonAdapterMiniport + 47) = 0LL;
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(BugCheckParameter2 + 64));
  v6 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  IoDeleteDevice(v6);
  return 0LL;
}
