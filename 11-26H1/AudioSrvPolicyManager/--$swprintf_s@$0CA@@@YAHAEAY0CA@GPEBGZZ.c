/*
 * XREFs of ??$swprintf_s@$0CA@@@YAHAEAY0CA@GPEBGZZ @ 0x1800120D0
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     vswprintf_s @ 0x180030AB8 (vswprintf_s.c)
 */

int swprintf_s<32>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list ArgList; // [rsp+50h] [rbp+18h] BYREF

  va_start(ArgList, a2);
  return vswprintf_s(a1, 0x20uLL, a2, ArgList);
}
