/*
 * XREFs of RtlGetCpuVendor @ 0x140BFEDD8
 * Callers:
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 *     RtlGetProcessorSignature @ 0x140BFEEB4 (RtlGetProcessorSignature.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 */

char RtlGetCpuVendor()
{
  char Str1[16]; // [rsp+20h] [rbp-28h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  *(_DWORD *)&Str1[4] = _RBX;
  *(_DWORD *)&Str1[8] = _RDX;
  *(_DWORD *)&Str1[12] = _RCX;
  if ( strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
  {
    if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      return 2;
    if ( !strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
      return 3;
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
  }
  return 1;
}
