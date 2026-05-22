/*
 * XREFs of ?IsXbox@GameInputModule@@CA_NXZ @ 0x18010ED18
 * Callers:
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18010F420 (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18010F5E8 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     <none>
 */

bool GameInputModule::IsXbox(void)
{
  struct _UNICODE_STRING v1; // [rsp+30h] [rbp-18h] BYREF
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  v1 = 0LL;
  RtlInitUnicodeString(&v1, L"Kernel-ProductInfo");
  if ( (int)NtQueryLicenseValue(&v1, 0LL, &v2, 4LL, &v3) < 0 )
    return 0;
  if ( ((v2 - 192) & 0xFFFFFFFD) != 0 )
    return v2 == 195;
  return 1;
}
