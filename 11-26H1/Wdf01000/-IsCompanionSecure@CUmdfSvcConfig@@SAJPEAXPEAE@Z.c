/*
 * XREFs of ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1400792A8
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x14001CE90 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140079330 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

int __fastcall CUmdfSvcConfig::IsCompanionSecure(void *UmdfServiceKey, bool *SecureCompanion)
{
  int result; // eax
  unsigned int companionType; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING umdfServiceTypeKeyName; // [rsp+28h] [rbp-40h] BYREF
  wchar_t umdfServiceTypeKeyName_buffer[16]; // [rsp+38h] [rbp-30h] BYREF

  *SecureCompanion = 0;
  companionType = 0;
  wcscpy(umdfServiceTypeKeyName_buffer, L"UmdfServiceType");
  *(_QWORD *)&umdfServiceTypeKeyName.Length = 2097182LL;
  umdfServiceTypeKeyName.Buffer = umdfServiceTypeKeyName_buffer;
  result = CUmdfSvcConfig::_QueryULong(UmdfServiceKey, &umdfServiceTypeKeyName, &companionType);
  if ( result >= 0 )
    *SecureCompanion = companionType == 2;
  return result;
}
