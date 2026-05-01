/*
 * XREFs of ?SetFrameInteractionHandler@CMultitaskingViewFrame@@UEAAJPEAUIFrameInteractionEvents@@@Z @ 0x1804A9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180067A40 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@AsyncFrameEvents@@QEAAXXZ @ 0x1804A9AD4 (-Release@AsyncFrameEvents@@QEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetFrameInteractionHandler(
        CMultitaskingViewFrame *this,
        struct IFrameInteractionEvents *a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rax
  struct IFrameInteractionEvents *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 2456);
  if ( a2 )
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v8[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    v5 = *v2;
    v7 = 0LL;
    v9 = v5;
    *v2 = (__int64)a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(v2 + 1, (char *)v8);
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)&v7);
  }
  else
  {
    AsyncFrameEvents::Release((CMultitaskingViewFrame *)((char *)this + 2456));
  }
  return 0LL;
}
