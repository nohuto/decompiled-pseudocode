/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___ @ 0x180308530
 * Callers:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801FB2B0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e387f2ee55bde35d068d310edc732ad4___ @ 0x180307CC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e387f2ee55bde35d068d310edc732ad4___.c)
 *     _lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_ @ 0x180308AB4 (_lambda_e387f2ee55bde35d068d310edc732ad4_--__lambda_e387f2ee55bde35d068d310edc732ad4_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___(
        unsigned int *a1,
        __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2 + 1;
  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    return 2147947423LL;
  }
  else
  {
    v12 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v9[2] = *a2;
    v10 = *v2;
    v9[1] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_e387f2ee55bde35d068d310edc732ad4___(v7, v6, a1[12], v9);
    lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_(v9);
    if ( v8 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    return (unsigned int)v8;
  }
}
