/*
 * XREFs of DpiIsPowerRuntimeDStateTransition @ 0x14030D094
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14042D348 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall DpiIsPowerRuntimeDStateTransition(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = a1;
  if ( a1 && *(_DWORD *)(a1 + 16) == 1953656900 && *(_DWORD *)(a1 + 20) == 3 )
  {
    v2 = *(_QWORD *)(a1 + 2832);
    if ( !v2 )
      return v2;
    v1 = *(_QWORD *)(v2 + 64);
  }
  if ( !*(_BYTE *)(a1 + 1158) && !*(_BYTE *)(v1 + 482)
    || (LOBYTE(v2) = 1, *(_DWORD *)(a1 + 280) > 1u)
    || *(_BYTE *)(a1 + 483) )
  {
    LOBYTE(v2) = 0;
  }
  return v2;
}
