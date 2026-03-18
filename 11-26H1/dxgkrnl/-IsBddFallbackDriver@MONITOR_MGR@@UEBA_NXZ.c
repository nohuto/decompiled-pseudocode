/*
 * XREFs of ?IsBddFallbackDriver@MONITOR_MGR@@UEBA_NXZ @ 0x1404278D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall MONITOR_MGR::IsBddFallbackDriver(MONITOR_MGR *this)
{
  return DXGADAPTER::IsBddFallbackDriver(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL));
}
