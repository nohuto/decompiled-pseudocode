/*
 * XREFs of ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJW4GetLastActiveClassicWindowReason@@PEAU_FILETIME@@@Z @ 0x1800D9CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800D9D8C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicTimestamp(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  int LastActiveClassicWindowWithValidation; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v5 = a1 - 72;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                            v5,
                                            0LL,
                                            a2,
                                            &v9);
  if ( LastActiveClassicWindowWithValidation >= 0 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v10);
  *a3 = v10;
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
