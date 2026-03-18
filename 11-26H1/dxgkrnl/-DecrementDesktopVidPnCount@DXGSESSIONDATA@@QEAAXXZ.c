/*
 * XREFs of ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x140064F70
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1401A4E2C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z @ 0x1403FBD8C (-SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSESSIONDATA::DecrementDesktopVidPnCount(DXGSESSIONDATA *this)
{
  if ( *((int *)this + 4632) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DesktopVidPnCount > 0", 460LL, 0LL, 0LL, 0LL, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 4632);
}
