/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x140221668
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1402213C8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1402216DC (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1402217D4 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2301;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid rect", 2301LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
