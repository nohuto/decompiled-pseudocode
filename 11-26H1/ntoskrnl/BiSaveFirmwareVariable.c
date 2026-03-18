/*
 * XREFs of BiSaveFirmwareVariable @ 0x14077ABB0
 * Callers:
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSaveFirmwareVariable(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+40h] [rbp-68h] BYREF

  return BiSetRegistryValue(a1, L"FirmwareVariable", L"Description", 3LL, a3, a4, 5111808LL, &v5);
}
