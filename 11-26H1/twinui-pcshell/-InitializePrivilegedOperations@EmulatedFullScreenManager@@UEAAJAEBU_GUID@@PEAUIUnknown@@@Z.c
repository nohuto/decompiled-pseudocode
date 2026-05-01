/*
 * XREFs of ?InitializePrivilegedOperations@EmulatedFullScreenManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18056AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EmulatedFullScreenManager::InitializePrivilegedOperations(
        EmulatedFullScreenManager *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  char *v7; // rbx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)-2147467263;
  }
  else
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v7 = (char *)this + 56;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v7);
  }
  return v5;
}
