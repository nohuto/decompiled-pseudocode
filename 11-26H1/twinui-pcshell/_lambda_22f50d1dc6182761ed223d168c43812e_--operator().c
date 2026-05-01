/*
 * XREFs of _lambda_22f50d1dc6182761ed223d168c43812e_::operator() @ 0x1804EA970
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___ @ 0x1804E9E60 (ShellPositionerManager--DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800613B0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_22f50d1dc6182761ed223d168c43812e_::operator()(
        __int64 a1,
        IUnknown *a2,
        IUnknown *a3,
        __int64 a4)
{
  void *v8; // rbx
  void (__fastcall *v9)(void *, __int64, _QWORD, __int64 *); // rdi
  int PositionerForMonitor; // eax
  unsigned int v11; // ebx
  void *v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  void *v16; // [rsp+70h] [rbp+30h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  if ( (int)ShellPositionerManager::GetPositionerForMonitor(
              *(_DWORD *)(a1 + 8),
              a2,
              &GUID_ee010e17_919a_4068_868b_675acf787303,
              &v13) >= 0 )
  {
    v8 = v13;
    v9 = *(void (__fastcall **)(void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v9(v8, a4, *(unsigned int *)(a1 + 12), &v14);
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           *(_DWORD *)(a1 + 12),
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v16);
  v11 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v16 + 96LL))(
      v16,
      a4,
      *(unsigned int *)(a1 + 8),
      v14,
      *(_QWORD *)(a1 + 16));
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v11;
}
