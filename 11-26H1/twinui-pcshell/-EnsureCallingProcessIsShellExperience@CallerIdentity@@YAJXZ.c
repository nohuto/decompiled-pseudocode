/*
 * XREFs of ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679928
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1803E7DC0 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1803E80B0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1803E8890 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803E8910 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1803E8A80 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1803EF2CC (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18002E6B4 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802B6B50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18067A1D4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::EnsureCallingProcessIsShellExperience(CallerIdentity *this, __int64 a2, bool *a3)
{
  unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // rdx
  signed int CallingProcessAppId; // ebx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(pv) = 0;
  if ( CallerIdentity::CheckCallerCapability(this, (const unsigned __int16 *)&pv, a3) >= 0 && (_BYTE)pv )
    return 0LL;
  pv = 0LL;
  CoTaskMemFree(0LL);
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&pv, v4);
  if ( CallingProcessAppId >= 0 )
    CallingProcessAppId = CallerIdentity::IsShellExperienceAppId((LPCWCH)pv, v5) == 0 ? 0x80070005 : 0;
  CoTaskMemFree(pv);
  return (unsigned int)CallingProcessAppId;
}
