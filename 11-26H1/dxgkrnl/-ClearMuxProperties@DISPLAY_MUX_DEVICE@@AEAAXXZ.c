/*
 * XREFs of ?ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x14008B470
 * Callers:
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008C758 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x14008F3DC (-SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DISPLAY_MUX_DEVICE::ClearMuxProperties(DISPLAY_MUX_DEVICE *this)
{
  int v2; // edi
  _DWORD v3[20]; // [rsp+20h] [rbp-68h] BYREF

  memset(v3, 0, 0x48uLL);
  v3[0] = 3;
  v3[1] = 2;
  v2 = DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v3);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1381;
  }
  v3[0] = 0;
  DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v3);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1389;
  }
  v3[0] = 1;
  DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v3);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1397;
  }
}
