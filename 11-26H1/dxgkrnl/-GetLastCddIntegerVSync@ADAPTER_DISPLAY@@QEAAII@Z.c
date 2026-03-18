/*
 * XREFs of ?GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140038978
 * Callers:
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403EF088 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetLastCddIntegerVSync(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6608;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6608LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6609;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6609LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(unsigned int *)(4024 * v2 + *((_QWORD *)this + 16) + 1076);
}
