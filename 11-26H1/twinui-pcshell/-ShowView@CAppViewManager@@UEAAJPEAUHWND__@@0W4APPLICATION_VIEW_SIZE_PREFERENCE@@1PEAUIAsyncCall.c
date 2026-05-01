/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x1802F3AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180292E7C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long___lambda_4af9e279c0557e674118e7fededcb641___ @ 0x1802EEF18 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802EEF18.c)
 *     _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x1802EFC3C (_lambda_c5bad73058b4167fadc00bcfc86ad84b_--__lambda_c5bad73058b4167fadc00bcfc86ad84b_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::ShowView(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  RTL_SRWLOCK *v9; // r14
  __int64 *v10; // rax
  volatile int *v11; // rdx
  struct IAsyncCallback *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v16[3]; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+3Ch] [rbp-14h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v9 = (RTL_SRWLOCK *)(a1 - 32);
  v20 = a1 - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a6);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v16, &v20);
  v16[1] = a2;
  v16[2] = a3;
  v17 = a4;
  v18 = a5;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v19, &a6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long___lambda_4af9e279c0557e674118e7fededcb641___(
          &a6,
          (__int64)v16);
  v12 = (struct IAsyncCallback *)*v10;
  v20 = *v10;
  *v10 = 0LL;
  v13 = a6;
  if ( a6 )
  {
    a6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v13,
      v11);
  }
  v14 = CAppViewManager::_QueueOperation(v9, v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(v16);
  return v14;
}
