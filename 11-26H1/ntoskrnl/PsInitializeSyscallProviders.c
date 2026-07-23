/*
 * XREFs of PsInitializeSyscallProviders @ 0x140CDDC90
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140B49DCC (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

void PsInitializeSyscallProviders()
{
  _BYTE v0[8]; // [rsp+20h] [rbp-88h] BYREF
  void *v1; // [rsp+28h] [rbp-80h]
  __int64 v2; // [rsp+30h] [rbp-78h]

  if ( VslVsmEnabled
    && (memset_0(v0, 0, 0x68uLL),
        v2 = 32LL,
        v1 = &PspServiceDescriptorGroupTable,
        (int)VslpEnterIumSecureMode(2u, 0xEBu, 0, (__int64)v0) >= 0) )
  {
    PspSyscallProvidersEnabled = 1;
    PsRegisterSyscallProviderServiceTableMetadata(0);
  }
  else
  {
    PspSyscallProvidersEnabled = 0;
  }
}
