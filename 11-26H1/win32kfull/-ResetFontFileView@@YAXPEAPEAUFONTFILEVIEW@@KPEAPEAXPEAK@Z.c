/*
 * XREFs of ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64
 * Callers:
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400C258C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x14029122C (-MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 */

void __fastcall ResetFontFileView(struct FONTFILEVIEW **a1, unsigned int a2, void **a3, unsigned int *a4)
{
  void **v4; // rbx
  __int64 v5; // rsi
  signed __int64 v7; // rbp

  if ( a2 )
  {
    v4 = a3;
    v5 = a2;
    v7 = (char *)a1 - (char *)a3;
    do
    {
      if ( *v4 )
      {
        EngUnmapFontFileFD(*(ULONG_PTR *)((char *)v4 + v7));
        *v4 = 0LL;
        *a4 = 0;
      }
      ++v4;
      ++a4;
      --v5;
    }
    while ( v5 );
  }
}
