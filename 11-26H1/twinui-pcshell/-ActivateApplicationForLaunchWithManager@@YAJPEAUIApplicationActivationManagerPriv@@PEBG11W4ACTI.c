/*
 * XREFs of ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1806804B0
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804E8130 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 *     ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x1806803E8 (-ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x180074A04 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180171BE4 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ActivateApplicationForLaunchWithManager(
        IUnknown *a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        char *a4,
        int a5,
        CImmersiveWindowFactory *a6,
        __int64 a7,
        CImmersiveWindowFactory *a8)
{
  CImmersiveWindowFactory *v8; // r14
  __int64 v9; // rbx
  CImmersiveWindowFactory *v10; // rdi
  CImmersiveWindowFactory **v15; // rax
  __int64 v16; // rdx
  CImmersiveWindowFactory *v17; // rcx
  unsigned int v18; // edi
  char v20; // [rsp+40h] [rbp-38h] BYREF

  v8 = a8;
  v9 = 0LL;
  v10 = a6;
  *(_DWORD *)a8 = 0;
  if ( v10 && (a5 & 0x10001) == 0 )
  {
    v15 = Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&a6);
    if ( &v20 != (char *)v15 )
    {
      v9 = (__int64)*v15;
      *v15 = 0LL;
    }
    v17 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( !v9 )
      return (unsigned int)-2147024882;
    if ( !*(_BYTE *)(v9 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgs(v17, v16);
    if ( *(CImmersiveWindowFactory **)(v9 + 160) != v10 )
    {
      a8 = v10;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&a8);
      a8 = *(CImmersiveWindowFactory **)(v9 + 160);
      *(_QWORD *)(v9 + 160) = v10;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
    }
  }
  v18 = _ActivateApplicationForLaunchHelperWithWindowFactory(a1, a2, a3, a4, a5, a7, v9, v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v18;
}
