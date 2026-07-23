/*
 * XREFs of ObQuerySecurityObject @ 0x140AA74AC
 * Callers:
 *     RtlIsUntrustedObject @ 0x1404C8000 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AA717C (AstLogDeviceSDDLUpdated.c)
 *     CmpCheckExeOwnerForPca @ 0x140AA7384 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, 1LL);
  *a5 = a4;
  return result;
}
