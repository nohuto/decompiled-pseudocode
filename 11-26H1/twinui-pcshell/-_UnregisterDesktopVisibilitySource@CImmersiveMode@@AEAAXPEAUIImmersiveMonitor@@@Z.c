/*
 * XREFs of ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180170944
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18016FCD0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180170AF8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     WPP_SF_d @ 0x1802197BC (WPP_SF_d.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802EB3B8 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_UnregisterDesktopVisibilitySource(CImmersiveMode *this, struct IUnknown *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 i; // rbx
  unsigned int v6; // edx
  CImmersiveMode::CDesktopVisibilityChangeSource **v7; // rcx
  CImmersiveMode::CDesktopVisibilityChangeSource *v8; // r14
  unsigned __int64 v9; // r8
  void *v10; // rcx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  for ( i = 0LL; i < *((_QWORD *)this + 53); ++i )
  {
    if ( SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 52) + 8 * i), a2) )
    {
      _mm_lfence();
      v7 = (CImmersiveMode::CDesktopVisibilityChangeSource **)(*((_QWORD *)this + 52) + 8 * i);
      v8 = *v7;
      v9 = *((_QWORD *)this + 53);
      if ( i < v9 )
      {
        if ( i != v9 - 1 )
          memmove_0(v7, v7 + 1, 8 * (v9 - i) - 8);
        --*((_QWORD *)this + 53);
      }
      v4 = *((_DWORD *)v8 + 2);
      CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(v8, v6);
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0 )
      {
        LODWORD(ppvOut) = 0;
        if ( ((int (__fastcall *)(struct IUnknown *, void **))a2->lpVtbl[1].QueryInterface)(a2, &ppvOut) >= 0
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            12LL,
            &WPP_7be50b031803361a15ec72c7fdc37b59_Traceguids,
            (unsigned int)ppvOut);
        }
      }
      break;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
           &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(ppvOut, v4);
    CImmersiveMode::_HandleDesktopVisibilityChange(this, (struct IImmersiveMonitor *)a2, 0, 0);
    v10 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
}
