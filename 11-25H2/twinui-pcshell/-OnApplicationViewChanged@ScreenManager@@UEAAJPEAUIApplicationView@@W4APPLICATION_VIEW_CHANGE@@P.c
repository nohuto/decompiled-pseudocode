/*
 * XREFs of ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180179B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180205194 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x1804FF170 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___.c)
 *     _lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_ @ 0x1804FF2C4 (_lambda_5da5069c1ec2393567e9fe231930dfb9_--__lambda_5da5069c1ec2393567e9fe231930dfb9_.c)
 */

__int64 __fastcall ScreenManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF

  if ( (unsigned int)(a3 - 1) <= 1 && *(_QWORD *)(a1 + 296) )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v10 = a1 - 24;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v10);
    v12 = v6;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12);
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(v8, v7, v9, &v12);
    lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_(&v12);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  return 0LL;
}
