/*
 * XREFs of ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x18020DE38
 * Callers:
 *     ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x180079B54 (-SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x1800BB954 (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HotkeyHandler@@QEAA@XZ @ 0x18058A234 (--0HotkeyHandler@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyHandler,HotkeyHandler,IPriviledgedPositioner * &,ISnapAssistController * &,IImmersiveMonitorManager * &,IApplicationViewCollection * &,IImmersiveSettingsCache * &,ITabletModeController * &>(
        HotkeyHandler **a1,
        struct IPriviledgedPositioner **a2,
        struct ISnapAssistController **a3,
        struct IImmersiveMonitorManager **a4,
        struct IApplicationViewCollection **a5,
        struct IImmersiveSettingsCache **a6,
        struct ITabletModeController **a7)
{
  HotkeyHandler *v11; // rax
  int v12; // edi
  HotkeyHandler *v13; // rbx

  *a1 = 0LL;
  v11 = (HotkeyHandler *)operator new(0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = HotkeyHandler::HotkeyHandler(v11);
    v12 = HotkeyHandler::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(HotkeyHandler *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      if ( v13 )
        (*(void (__fastcall **)(HotkeyHandler *))(*(_QWORD *)v13 + 16LL))(v13);
      return 0;
    }
    else if ( v13 )
    {
      (*(void (__fastcall **)(HotkeyHandler *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
