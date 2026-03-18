/*
 * XREFs of ?IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ @ 0x140273B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400615D4 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 */

bool __fastcall MONITOR_MGR::IsCcdDatabaseIgnored(ADAPTER_DISPLAY **this)
{
  return (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(this[3]) != 0;
}
