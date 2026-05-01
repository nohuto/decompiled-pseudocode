/*
 * XREFs of PremultiplyAlphaChannel @ 0x18022891C
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802D0AA0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DF578 (_GetProcFromComCtl32.c)
 */

__int64 (__fastcall *__fastcall PremultiplyAlphaChannel(__int64 a1))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, _QWORD))qword_180897DF8;
  if ( qword_180897DF8 == -1 )
  {
    GetProcFromComCtl32(&qword_180897DF8, 392LL);
    result = (__int64 (__fastcall *)(__int64, _QWORD))qword_180897DF8;
  }
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, 0LL);
  return result;
}
