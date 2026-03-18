/*
 * XREFs of ?SetMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140046A74
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 DXGADAPTER::SetMockDriverState()
{
  return ((__int64 (*)(void))DxgCoreInterface[87])();
}
