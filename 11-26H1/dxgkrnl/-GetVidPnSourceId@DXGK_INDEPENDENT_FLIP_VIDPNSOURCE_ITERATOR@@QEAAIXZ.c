/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x140059A44
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1403BD518 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1939;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"vidPnSourceMask != 0", 1939LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *((unsigned int *)this + 1);
}
