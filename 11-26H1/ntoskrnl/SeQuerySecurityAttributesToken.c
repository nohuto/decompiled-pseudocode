/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x140A82D30
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     RtlQueryPackageIdentityEx @ 0x140459830 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140459AB0 (RtlQueryPackageClaims.c)
 *     RtlQueryPackageIdentity @ 0x140459DD0 (RtlQueryPackageIdentity.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x140478D50 (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 */

__int64 __fastcall SeQuerySecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        int a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SecurityAttributesToken; // ebx
  size_t v13; // [rsp+30h] [rbp-18h]

  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      LODWORD(v13) = a5;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, 0, a2, a3, 0, a4, v13, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
