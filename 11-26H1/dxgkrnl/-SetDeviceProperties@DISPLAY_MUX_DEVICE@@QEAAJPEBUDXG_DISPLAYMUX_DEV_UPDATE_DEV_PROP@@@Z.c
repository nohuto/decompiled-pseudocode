/*
 * XREFs of ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x14008F3DC
 * Callers:
 *     ?ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x14008B470 (-ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008BA7C (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400900B8 (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DISPLAY_MUX_DEVICE::SetDeviceProperties(
        DISPLAY_MUX_DEVICE *this,
        const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *a2)
{
  return (*((__int64 (__fastcall **)(_QWORD, const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *))this + 20))(
           *((_QWORD *)this + 14),
           a2);
}
