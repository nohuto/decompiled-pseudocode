/*
 * XREFs of ?ndisMpHookGetHookDriverHandle@@YAPEAUNDIS_MINIPORT_HOOK_DRIVER_HANDLE__@@PEAUNDIS_MINIPORT_DRIVER_CONTEXT__@@@Z @ 0x1400CC1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__ *__fastcall ndisMpHookGetHookDriverHandle(
        struct NDIS_MINIPORT_DRIVER_CONTEXT__ *a1)
{
  KIRQL v2; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rbx

  if ( a1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( i = ndisMiniDriverList; i; i = i->NextDriver )
    {
      if ( i->MiniportDriverContext == a1 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
        return i->HookDriverHandle;
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
  }
  return 0LL;
}
