/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1402217D4
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1402213C8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x140221668 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG right; // r9d
  LONG left; // eax
  LONG v6; // r11d
  LONG v7; // ecx
  LONG bottom; // r10d
  LONG top; // edx
  LONG v10; // edi
  LONG v11; // r8d

  if ( ValidateRect(a1) )
  {
    right = a2->right;
    left = a1->left;
    if ( a1->left < right )
    {
      v6 = a2->left;
      v7 = a1->right;
      if ( v7 > a2->left || v7 == left )
      {
        bottom = a2->bottom;
        top = a1->top;
        if ( top < bottom )
        {
          v10 = a2->top;
          v11 = a1->bottom;
          if ( (v11 > v10 || top == v11) && left >= v6 && v7 <= right && top >= v10 && v11 <= bottom )
            return 1;
        }
      }
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2373;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid bounding rect", 2373LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
