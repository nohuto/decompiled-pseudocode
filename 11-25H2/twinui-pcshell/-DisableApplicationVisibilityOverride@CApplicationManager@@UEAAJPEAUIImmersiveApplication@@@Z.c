/*
 * XREFs of ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802E5B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C4534 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802EB990 (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 *     WPP_SF_Sdd @ 0x1802EDECC (WPP_SF_Sdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::DisableApplicationVisibilityOverride(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  int v5; // edi
  HWND v6; // rdx
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  char v8; // al
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  struct IImmersiveApplicationInternal *v13; // [rsp+78h] [rbp+28h] BYREF
  void *v14; // [rsp+80h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v5 = v4((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v13);
  if ( v5 >= 0 )
  {
    v5 = CReportWindowVisibilityChange::SetOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           v13);
    if ( v5 >= 0 )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)((char *)this - 184),
        v6,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v14);
      (*(void (__fastcall **)(void *, struct IImmersiveApplicationInternal *, _QWORD, __int64))(*(_QWORD *)v14 + 32LL))(
        v14,
        v13,
        *((unsigned int *)this + 194),
        1LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v7 = (*a2)[4];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
    v11 = -1LL;
    v12 = -1LL;
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **), __int64 *))v7)(
           a2,
           &v10) >= 0
      && v13
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v8 = (*(__int64 (**)(void))(*(_QWORD *)v13 + 160LL))();
      WPP_SF_Sdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        12,
        (unsigned int)&WPP_f6ee133fdd7237af69330c831a71ad41_Traceguids,
        v10,
        v8,
        v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v5;
}
