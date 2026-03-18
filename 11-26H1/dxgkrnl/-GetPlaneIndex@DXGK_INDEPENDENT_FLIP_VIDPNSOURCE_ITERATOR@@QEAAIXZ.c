/*
 * XREFs of ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1400596DC
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1403BD518 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1945;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"vidPnSourceMask != 0", 1945LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *(unsigned int *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 2));
}
