/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800067AC
 * Callers:
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180006670 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     MsixvcAddGameToGCS @ 0x180006800 (MsixvcAddGameToGCS.c)
 *     MsixvcAddPackageAsync @ 0x180006F10 (MsixvcAddPackageAsync.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x1800070A0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x1800071EC (MsixvcUpdatePolicyInternal.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000E500 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
