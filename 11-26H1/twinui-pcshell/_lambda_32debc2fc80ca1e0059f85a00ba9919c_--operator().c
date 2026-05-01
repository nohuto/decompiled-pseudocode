/*
 * XREFs of _lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator() @ 0x18016FD84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run @ 0x1802C63B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x180170288 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator()(__int64 a1)
{
  unsigned __int64 i; // rbx
  void *v3; // rcx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
    if ( (int)GlobalInterfaceTable::Unmarshal(
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 4 * i),
                &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
                &v4) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD, bool))(*(_QWORD *)v4 + 24LL))(v4, *(_QWORD *)a1, *(_BYTE *)(a1 + 8) != 0);
    v3 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
