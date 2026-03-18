/*
 * XREFs of ObQuerySecurityObject @ 0x140AAE4C8
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140460C84 (SepVerifyDesktopAppxImage.c)
 *     RtlIsUntrustedObject @ 0x1404CE5D0 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AAE198 (AstLogDeviceSDDLUpdated.c)
 *     CmpCheckExeOwnerForPca @ 0x140AAE3A0 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, 1LL);
  *a5 = a4;
  return result;
}
