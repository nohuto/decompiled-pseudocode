/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x1409153D4
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x140914F6C (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x140918E5C (_CmGetInstallerClassRegProp.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14094DC20 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  bool v8; // di
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v11; // esi
  int InstallerClassRegProp; // eax
  int v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  ULONG SecurityDescriptorLength; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  SecurityDescriptorLength = 128;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    a2,
                    a3,
                    24,
                    (__int64)&v14,
                    (__int64)Pool2,
                    (__int64)&SecurityDescriptorLength,
                    0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      a2,
                      a3,
                      24,
                      (__int64)&v14,
                      (__int64)Pool2,
                      (__int64)&SecurityDescriptorLength,
                      0);
  }
  if ( DeviceRegProp >= 0
    && v14 == 3
    && RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0)
    && (int)SeCaptureSecurityDescriptor(Pool2, (__int64)&v15) >= 0 )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v14,
                                (__int64)Pool2,
                                (__int64)&SecurityDescriptorLength);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  a4,
                                  v11,
                                  24,
                                  (__int64)&v14,
                                  (__int64)Pool2,
                                  (__int64)&SecurityDescriptorLength);
      }
      if ( InstallerClassRegProp >= 0 && v14 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0) )
          v8 = (int)SeCaptureSecurityDescriptor(Pool2, (__int64)&v15) >= 0;
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( !v8 )
    return 0LL;
  return v15;
}
