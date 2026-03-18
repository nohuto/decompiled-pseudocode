/*
 * XREFs of ZwAlpcConnectPort @ 0x140724350
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x14069A620 (DifZwAlpcConnectPortWrapper.c)
 *     IopConnectLinkTrackingPort @ 0x1407945D0 (IopConnectLinkTrackingPort.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
