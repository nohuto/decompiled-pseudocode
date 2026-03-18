/*
 * XREFs of _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x1401BD7D0
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1401BD890 (-MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401BD928 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 */

unsigned __int64 __fastcall UmfdLoadFontFileView_::_2_::_lambda_1_::operator()(__int64 a1, char a2, unsigned int a3)
{
  if ( a2
    && !MapFontFiles(
          **(_DWORD **)(a1 + 16),
          **(struct FONTFILEVIEW ****)(a1 + 24),
          **(void ****)(a1 + 32),
          **(unsigned int ***)(a1 + 40)) )
  {
    return 0LL;
  }
  else
  {
    return PDEVOBJ::LoadFontFile(
             *(PDEVOBJ **)a1,
             **(_DWORD **)(a1 + 16),
             **(unsigned __int64 ***)(a1 + 24),
             **(void ****)(a1 + 32),
             **(unsigned int ***)(a1 + 40),
             **(struct tagDESIGNVECTOR ***)(a1 + 8),
             *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 15488LL),
             a3);
  }
}
