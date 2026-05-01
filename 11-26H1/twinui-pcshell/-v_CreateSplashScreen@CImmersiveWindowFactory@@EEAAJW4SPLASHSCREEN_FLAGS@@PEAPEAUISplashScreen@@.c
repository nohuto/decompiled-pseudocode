/*
 * XREFs of ?v_CreateSplashScreen@CImmersiveWindowFactory@@EEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x1806CA400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_CreateSplashScreen(__int64 a1, char a2, IUnknown **a3)
{
  HRESULT Instance; // ebx
  IUnknown *v7; // rbx
  IUnknown *v8; // rcx
  IUnknown *pUnk; // [rsp+50h] [rbp+20h] BYREF
  IUnknown *v11; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  Instance = -2147024891;
  if ( *(_BYTE *)(a1 + 104) )
  {
    v7 = *(IUnknown **)(a1 + 160);
    pUnk = 0LL;
    if ( v7 )
    {
      v11 = v7;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v11);
      v11 = pUnk;
      pUnk = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    }
    else
    {
      Instance = CoCreateInstance(
                   &GUID_329b80ec_2230_47b8_905d_a2dcf5171c6f,
                   0LL,
                   4u,
                   &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
                   (LPVOID *)&pUnk);
      if ( Instance < 0
        || (Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))pUnk->lpVtbl[1].QueryInterface)(
                         pUnk,
                         *(_QWORD *)(a1 + 136),
                         a1 + 116),
            Instance < 0) )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
        return (unsigned int)Instance;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&pUnk);
    v8 = pUnk;
    Instance = 0;
    *a3 = pUnk;
    if ( (a2 & 0x20) == 0 )
      CoAllowSetForegroundWindow(v8, 0LL);
    goto LABEL_8;
  }
  return (unsigned int)Instance;
}
