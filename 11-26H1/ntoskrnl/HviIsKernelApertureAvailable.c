/*
 * XREFs of HviIsKernelApertureAvailable @ 0x1406378E8
 * Callers:
 *     HvipApertureDetectParameters @ 0x1406379B0 (HvipApertureDetectParameters.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1406DC730 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1406DC990 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char HviIsKernelApertureAvailable()
{
  __int64 v0; // rcx
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  HviGetHypervisorFeatures(&v8);
  if ( (v8 & 0x100000000000LL) != 0 && (unsigned __int8)HviIsHypervisorVendorMicrosoft(v0) )
  {
    _RAX = 1073741831LL;
    __asm { cpuid }
    BYTE8(v7) = _RCX;
  }
  return BYTE8(v7) & 1;
}
