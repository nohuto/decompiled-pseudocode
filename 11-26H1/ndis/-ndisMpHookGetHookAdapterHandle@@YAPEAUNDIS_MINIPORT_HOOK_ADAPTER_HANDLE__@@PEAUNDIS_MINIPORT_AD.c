/*
 * XREFs of ?ndisMpHookGetHookAdapterHandle@@YAPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_CONTEXT__@@@Z @ 0x1400CC160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *__fastcall ndisMpHookGetHookAdapterHandle(
        struct NDIS_MINIPORT_ADAPTER_CONTEXT__ *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx

  if ( a1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( i->MiniportAdapterContext == a1 )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v2);
        return i->HookAdapterHandle;
      }
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v2);
  }
  return 0LL;
}
