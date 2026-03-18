/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x140240494
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiPdoRemovePdoObjects @ 0x140256E10 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1402572A4 (DpiGdoDestroyGdiObjects.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x14030B7CC (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  DpiGdoDestroyGdiObjects();
  KeWaitForSingleObject((PVOID)(v2 + 3720), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3720), 0);
  LOBYTE(v5) = 1;
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, v5) >= 0 )
  {
    DmmResetModeState(*(void *const *)(v2 + 4032), 0xFFFFFFFF);
    LOBYTE(v6) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v6);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
