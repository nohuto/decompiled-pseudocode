/*
 * XREFs of ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805414D4
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180542890 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180542B90 (-TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IUnknown_GetScaleFactor(IUnknown *punk, enum DEVICE_SCALE_FACTOR *a2)
{
  HRESULT ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a2 = SCALE_100_PERCENT;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  ScaleFactorForMonitor = IUnknown_QueryService(
                            punk,
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &ppvOut);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v10 = 0LL;
    ScaleFactorForMonitor = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v10);
    v5 = ScaleFactorForMonitor;
    if ( ScaleFactorForMonitor >= 0 )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v10, a2);
      v5 = ScaleFactorForMonitor;
      if ( ScaleFactorForMonitor >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 46LL;
    }
    else
    {
      v6 = 45LL;
    }
  }
  else
  {
    v6 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
