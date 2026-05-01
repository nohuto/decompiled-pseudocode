/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802DFA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E6B60 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 i; // rsi
  struct IImmersiveApplicationInternal *v5; // rbx
  __int64 v6; // r8
  const unsigned __int16 *v7; // rax
  IUnknown **v8; // rax
  unsigned int v9; // ebx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF
  struct IImmersiveApplicationInternal *v12; // [rsp+50h] [rbp+18h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 61); i; --i )
  {
    v12 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 60) + 8 * i - 8);
    v5 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    LOBYTE(v6) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, const unsigned __int16 *, __int64))(*(_QWORD *)v5 + 320LL))(
           v5,
           a2,
           v6) )
    {
      CApplicationManager::_ForgetApplicationNoLock((CApplicationManager *)((char *)this - 152), v5, 2u);
      v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 24LL))(v5);
      CApplicationManager::_DeleteApplicationData((CApplicationManager *)((char *)this - 152), v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v8 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this - 104, &v12);
  v9 = (unsigned int)IUnknown_QueryService(
                       *v8,
                       &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
                       &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
                       &ppvOut) >> 31;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  if ( (unsigned __int8)v9 != 1 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
