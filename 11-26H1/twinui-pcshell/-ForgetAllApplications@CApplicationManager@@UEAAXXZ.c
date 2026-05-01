/*
 * XREFs of ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x1802DF7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ForgetAllApplications(CApplicationManager *this)
{
  __int64 i; // rsi
  struct IImmersiveApplicationInternal *v3; // rbx
  struct IImmersiveApplicationInternal *v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 50); i; --i )
  {
    v4 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 49) + 8 * i - 8);
    v3 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
    CApplicationManager::_ForgetApplicationNoLock((CApplicationManager *)((char *)this - 240), v3, 2u);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
  }
}
