/*
 * XREFs of PoFxAbandonDevice @ 0x140B083E4
 * Callers:
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopPluginAbandonDevice @ 0x140512DE4 (PopPluginAbandonDevice.c)
 *     PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140B0849C (PopDirectedDripsDiagDestroyDeviceDiagnostic.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B08574 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140B085EC (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x140B086F4 (PopFxFreeUniqueId.c)
 */

__int64 __fastcall PoFxAbandonDevice(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  ULONG_PTR v4; // rcx
  __int64 result; // rax

  PopDirectedDripsDiagDestroyDeviceDiagnostic();
  _m_prefetchw((const void *)(a1 + 296));
  v2 = *(_DWORD *)(a1 + 296);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 1) != 0 )
  {
    PopFxUnregisterDeviceOrWait(a1);
    v4 = *(_QWORD *)(a1 + 144);
    if ( v4 )
      PopPluginAbandonDevice(v4, a1 + 128);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 144), a1 + 128, 0LL);
    *(_QWORD *)(a1 + 144) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFE);
  }
  _m_prefetchw((const void *)(a1 + 296));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFD);
  if ( (result & 2) != 0 )
    return PopFxFreeUniqueId(a1);
  return result;
}
