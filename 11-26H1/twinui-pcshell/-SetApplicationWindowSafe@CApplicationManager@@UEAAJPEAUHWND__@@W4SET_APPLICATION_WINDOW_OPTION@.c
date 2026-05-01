/*
 * XREFs of ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1802E56F0
 * Callers:
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1802E5650 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationWindowSafe(__int64 a1, __int64 a2, int a3)
{
  bool v6; // di
  int First; // ebx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v9 = a2;
  v10 = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(a1 - 248, &v9, &v11, 0LL);
  if ( First >= 0 )
  {
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 384LL))(v11) == a2 )
    {
      v6 = (a3 & 0xFFFFFFFE) == 0;
      if ( (a3 & 0xFFFFFFFE) == 0 )
        goto LABEL_10;
    }
    else if ( (a3 & 1) == 0 )
    {
      First = -2147024809;
      goto LABEL_10;
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11) & 2) != 0 )
    {
      First = -2147019873;
    }
    else
    {
      First = 0;
      if ( !v6 )
        First = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 112LL))(
                  v11,
                  a2,
                  1LL,
                  0LL);
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return (unsigned int)First;
}
