/*
 * XREFs of ?IsEqual@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18067B080
 * Callers:
 *     ?IsFrameWindowForHost@XamlGamingTaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x18067B0D0 (-IsFrameWindowForHost@XamlGamingTaskViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?IsEqual@TaskViewFrame@@UEAA_NPEAUHWND__@@@Z @ 0x1806964F0 (-IsEqual@TaskViewFrame@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsEqual(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a1;
  v5 = 0;
  v7 = 0;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v2 + 168LL))(v2, a2, &v7);
  winrt::check_hresult(&v8, v3, (__int64)&v5);
  return v7;
}
