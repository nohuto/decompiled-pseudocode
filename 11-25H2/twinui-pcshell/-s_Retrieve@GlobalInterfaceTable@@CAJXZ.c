/*
 * XREFs of ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x18017DF14
 * Callers:
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18017DAF0 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18017DC40 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x18017DE64 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x18017DEBC (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 GlobalInterfaceTable::s_Retrieve(void)
{
  HRESULT v0; // ebx
  LPVOID v2; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !GlobalInterfaceTable::s_pGlobalInterfaceTable )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    v0 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v0 < 0
      || _InterlockedCompareExchange64(
           (volatile signed __int64 *)&GlobalInterfaceTable::s_pGlobalInterfaceTable,
           (signed __int64)ppv,
           0LL) )
    {
      v2 = ppv;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return (unsigned int)v0;
}
