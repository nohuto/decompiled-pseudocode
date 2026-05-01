/*
 * XREFs of ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802E5270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006264C (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181254 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A66D8 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     WPP_SF_d @ 0x1802197BC (WPP_SF_d.c)
 *     ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1802DEB04 (-ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::RestoreApplicationVisibilityOverride(
        CApplicationManager *this,
        struct IImmersiveApplication *a2)
{
  int v4; // ebx
  HWND v5; // rdx
  struct IImmersiveApplicationInternal *v7; // [rsp+58h] [rbp+28h] BYREF
  void *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v7 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v9, (__int64 *)&v7);
  if ( v4 >= 0 )
  {
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           (struct IUnknown *)v7) )
    {
      v4 = 0;
      v8 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)((char *)this - 184),
        v5,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v8);
      (*(void (__fastcall **)(void *, struct IImmersiveApplicationInternal *, _QWORD, __int64))(*(_QWORD *)v8 + 32LL))(
        v8,
        v7,
        *((unsigned int *)this + 194),
        2LL);
      CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        (struct IUnknown *)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    }
    else
    {
      v4 = -2147418113;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xDu,
      &WPP_c490f55b2b1a314c6d892705ea05f8e6_Traceguids,
      v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}
