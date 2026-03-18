/*
 * XREFs of ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140064C20
 * Callers:
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401CB12C (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsPointerVisible(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6161;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6161LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_BYTE *)(4024 * v3 + *((_QWORD *)this + 16) + 766);
}
