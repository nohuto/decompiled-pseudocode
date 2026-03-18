/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x140A7CEC0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403D0998 (SepVerifyDesktopAppxPackageName.c)
 *     RtlQueryPackageIdentityEx @ 0x1404602F0 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     RtlQueryPackageIdentity @ 0x140460890 (RtlQueryPackageIdentity.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x14047F3E0 (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  size_t v15; // [rsp+30h] [rbp-18h]

  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      LODWORD(v15) = a5;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, 0, a2, a3, 0, a4, v15, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
