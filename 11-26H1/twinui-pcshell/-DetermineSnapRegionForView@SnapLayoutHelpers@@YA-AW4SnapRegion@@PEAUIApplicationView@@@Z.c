/*
 * XREFs of ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x18016CAE8
 * Callers:
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180034DF0 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x18059FE60 (-IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x18059FE90 (-IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A7260 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionForView(__int64 a1)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v4 = v3(a1, &v9);
  v5 = retaddr;
  if ( v4 < 0 )
  {
    v8 = 378LL;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 128LL))(a1, &v10);
    v5 = retaddr;
    if ( v4 >= 0 )
    {
      v2 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(&v10, v9);
      goto LABEL_4;
    }
    v8 = 379LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v5,
    (void *)v8,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v4);
LABEL_4:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v2;
}
