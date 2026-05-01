/*
 * XREFs of ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116634
 * Callers:
 *     ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x1801164BC (-ReconcileTitleBarconfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_e.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1801167AC (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180117340 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ?SetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x180224BB0 (-SetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SHOW_OPTIONS@@0@Z.c)
 *     ?SetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z @ 0x180224BF0 (-SetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SUPPRESSIBLE_BUTTON.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CloneTitleBarConfiguration(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-2Ch] BYREF
  int v10; // [rsp+28h] [rbp-28h] BYREF
  int v11; // [rsp+2Ch] [rbp-24h] BYREF
  unsigned int v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+28h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+88h] [rbp+38h] BYREF

  v15 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v14);
  v16 = 0;
  LODWORD(v15) = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *, _QWORD **))(*(_QWORD *)a2 + 48LL))(a2, &v16, &v15) >= 0 )
    ApplicationViewTitlebarConfiguration::SetShowOptions(v14, v16, (unsigned int)v15);
  v17 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v17) >= 0 )
    *(_DWORD *)(v14 + 88) = v17;
  v18 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 32LL))(a2, &v18) >= 0 )
  {
    v4 = v14;
    v5 = v18;
    *(_BYTE *)(v14 + 48) = 1;
    *(_BYTE *)(v4 + 49) = v5 != 0;
  }
  v9 = 0;
  v8 = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 64LL))(a2, &v9, &v8) >= 0 )
    ApplicationViewTitlebarConfiguration::SetVisibleButtons(v14, v9, v8);
  v10 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v10) >= 0 )
    *(_DWORD *)(v14 + 76) = v10;
  v11 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 96LL))(a2, &v11) >= 0 )
  {
    v6 = v14;
    *(_DWORD *)(v14 + 80) = v11;
    *(_BYTE *)(v6 + 84) = 1;
  }
  v13[0] = 0;
  v12 = 0;
  if ( (*(int (__fastcall **)(__int64, _DWORD *, unsigned int *))(*(_QWORD *)a2 + 128LL))(a2, v13, &v12) >= 0 )
    ApplicationViewTitlebarConfiguration::SetSuppressedButtons(v14, v13[0], v12);
  *a1 = v14;
  return a1;
}
