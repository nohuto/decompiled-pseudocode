/*
 * XREFs of ?SubscribeToServices@PerMonitorShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18012D140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::SubscribeToServices(
        PerMonitorShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  GUID *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rbp
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx

  v3 = &c_positionersSIDs;
  v4 = (__int64 *)((char *)this + 80);
  v5 = 11LL;
  do
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
      a2,
      v3++,
      &GUID_ee010e17_919a_4068_868b_675acf787303,
      v4++);
    --v5;
  }
  while ( v5 );
  return 0LL;
}
