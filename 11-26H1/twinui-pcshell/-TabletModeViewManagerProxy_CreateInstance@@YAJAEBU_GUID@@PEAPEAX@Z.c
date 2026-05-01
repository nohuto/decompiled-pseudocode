/*
 * XREFs of ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B355C
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTabletModeViewManagerProxy@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeViewManagerProxy@@@Z @ 0x18022526C (--$MakeAndInitialize@VTabletModeViewManagerProxy@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTablet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManagerProxy_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  TabletModeViewManagerProxy *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TabletModeViewManagerProxy *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManagerProxy,TabletModeViewManagerProxy,>(&v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(TabletModeViewManagerProxy *, GUID *, void **))v9)(
           v9,
           &GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b,
           a2);
    v4 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)v3);
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(TabletModeViewManagerProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return v4;
}
