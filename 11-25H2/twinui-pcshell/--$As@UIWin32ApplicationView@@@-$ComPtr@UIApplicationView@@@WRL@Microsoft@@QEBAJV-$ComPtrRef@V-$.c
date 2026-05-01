/*
 * XREFs of ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F3A1C
 * Callers:
 *     ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1800F36F4 (-ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV-$CCoSimpleArray@PEAUHWND_.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x180171790 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1804FFC54 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 *     ?GetSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18057C140 (-GetSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806A1238 (-_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, a2);
}
