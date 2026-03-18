/*
 * XREFs of ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x14029122C
 * Callers:
 *     _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x140326A10 (_UmfdLoadFontFileView_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 */

char __fastcall MapFontFiles(unsigned int a1, struct FONTFILEVIEW **a2, void **a3, unsigned int *a4)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(a2[i], &a3[i], &a4[i], 0) )
    {
      ResetFontFileView(a2, i, a3, a4);
      return 0;
    }
  }
  return 1;
}
