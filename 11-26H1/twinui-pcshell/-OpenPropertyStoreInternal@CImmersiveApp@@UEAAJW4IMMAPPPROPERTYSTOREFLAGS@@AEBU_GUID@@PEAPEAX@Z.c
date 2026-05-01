/*
 * XREFs of ?OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AD410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall CImmersiveApp::OpenPropertyStoreInternal(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void **v6; // rbx
  HRESULT result; // eax

  *a4 = 0LL;
  v6 = (void **)(a1 + 600);
  if ( *(_QWORD *)(a1 + 600) )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v6)(*v6, a3, a4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 600));
  result = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, v6);
  if ( result >= 0 )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v6)(*v6, a3, a4);
  return result;
}
