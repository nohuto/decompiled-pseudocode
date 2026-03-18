/*
 * XREFs of ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1401BD890
 * Callers:
 *     _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x1401BD7D0 (_UmfdLoadFontFileView_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 */

char __fastcall MapFontFiles(unsigned int a1, struct FONTFILEVIEW **a2, void **a3, unsigned int *a4)
{
  __int64 i; // rdi
  __int64 v9; // rbp
  signed __int64 v11; // r14

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a1 )
      return 1;
    v9 = (unsigned int)i;
    if ( !(unsigned int)EngMapFontFileFDInternal(a2[i], &a3[i], &a4[i], 0) )
      break;
  }
  if ( (_DWORD)i )
  {
    v11 = (char *)a2 - (char *)a3;
    do
    {
      EngUnmapFontFileFD(*(ULONG_PTR *)((char *)a3 + v11));
      *a3++ = 0LL;
      *a4++ = 0;
      --v9;
    }
    while ( v9 );
  }
  return 0;
}
