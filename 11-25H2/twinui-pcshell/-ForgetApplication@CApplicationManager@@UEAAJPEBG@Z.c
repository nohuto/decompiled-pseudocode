/*
 * XREFs of ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E6020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180138C60 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802E3764 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802ECB00 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplication(CApplicationManager *this, const unsigned __int16 *a2)
{
  char v4; // di
  CApplicationManager *v5; // rbx
  struct IImmersiveApplicationInternal *v7; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v8; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v7 = 0LL;
  v5 = (CApplicationManager *)((char *)this - 152);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v8 = a2;
  if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((__int64)v5, &v8, &v7) >= 0 )
  {
    v4 = 1;
    do
    {
      CApplicationManager::_ForgetApplicationNoLock(v5, v7, 2u);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    }
    while ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((__int64)v5, &v8, &v7) >= 0 );
  }
  CApplicationManager::_DeleteApplicationData(v5, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return v4 == 0 ? 0x80070490 : 0;
}
