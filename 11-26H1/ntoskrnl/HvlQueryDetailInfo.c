/*
 * XREFs of HvlQueryDetailInfo @ 0x140779AFC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404DF8B8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorInterface @ 0x1406E0A18 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorVersion @ 0x1406E0A60 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406E0AA8 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall HvlQueryDetailInfo(void *a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  _DWORD Src[4]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v11[4]; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v12[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+70h] [rbp-58h] BYREF
  _DWORD v14[4]; // [rsp+80h] [rbp-48h] BYREF
  _DWORD v15[4]; // [rsp+90h] [rbp-38h] BYREF

  if ( a2 == 112 )
  {
    memset_0(Src, 0, 0x70uLL);
    HviGetHypervisorVendorAndMaxFunction(Src);
    HviGetHypervisorInterface(v10);
    HviGetHypervisorVersion(v11);
    HviGetHypervisorFeatures(v12);
    HviGetHardwareFeatures((__int64)v13);
    HviGetEnlightenmentInformation(v14);
    HviGetImplementationLimits(v15);
    v7 = 0;
    if ( a3 )
      RtlCopyToUser(a1, Src, 0x70uLL);
    else
      RtlCopyVolatileMemory(a1, Src, 0x70uLL);
    *a4 = 112;
  }
  else
  {
    v7 = -1073741584;
    *a4 = 0;
  }
  return v7;
}
