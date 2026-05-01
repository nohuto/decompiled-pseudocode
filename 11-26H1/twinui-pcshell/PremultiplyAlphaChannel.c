/*
 * XREFs of PremultiplyAlphaChannel @ 0x180219AEC
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802C7BF0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802D8288 (_GetProcFromComCtl32.c)
 */

__int64 (__fastcall *__fastcall PremultiplyAlphaChannel(__int64 a1))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, _QWORD))qword_1808D8408;
  if ( qword_1808D8408 == -1 )
  {
    GetProcFromComCtl32(&qword_1808D8408, 392LL);
    result = (__int64 (__fastcall *)(__int64, _QWORD))qword_1808D8408;
  }
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, 0LL);
  return result;
}
