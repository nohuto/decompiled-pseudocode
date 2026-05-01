/*
 * XREFs of ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801EB888
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1800D9150 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805168F0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::GetScaleFactor(IUnknown **this, enum DEVICE_SCALE_FACTOR *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  void *v7; // rcx
  void *v9; // rcx
  int ScaleFactorForMonitor; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *ppvOut; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+38h] [rbp+18h] BYREF

  *a2 = SCALE_100_PERCENT;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
    v9 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v13);
    v5 = v6;
    if ( v6 >= 0 )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v13, a2);
      v5 = ScaleFactorForMonitor;
      if ( ScaleFactorForMonitor >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x872,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x870,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
      v7 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  return v5;
}
