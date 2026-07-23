/*
 * XREFs of SeRegisterElamCertResources @ 0x1408156C0
 * Callers:
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140D0B4C4 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x140B3C614 (SepParseElamCertResources.c)
 */

__int64 __fastcall SeRegisterElamCertResources(int a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF

  v4[0] = L"MSELAMCERTINFOID";
  v5 = 0LL;
  v4[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  v6 = 0LL;
  v4[2] = 0LL;
  result = LdrResSearchResource(a1, (unsigned int)v4, 3, a3 != 0 ? 4624 : 4112, (__int64)&v5, (__int64)&v6, 0LL, 0LL);
  if ( (int)result >= 0 )
    return SepParseElamCertResources(v5, v6);
  return result;
}
