/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14004176C
 * Callers:
 *     VidSchSetVidPnSourceAddress @ 0x140123A10 (VidSchSetVidPnSourceAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_DISPLAY *, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))DxgCoreInterface[32])(
           this,
           a2);
}
