/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804CC1DC
 * Callers:
 *     ?OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z @ 0x1804BB340 (-OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z.c)
 *     ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C9BB0 (-ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804CA150 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CA370 (-LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CA810 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ @ 0x1804CBBE0 (-v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1800902F4 (_lambda_6c2381c8148a5bf607d7998e82322cb8_--__lambda_6c2381c8148a5bf607d7998e82322cb8_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804AF098 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1804CBF40 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e8a28c70af8a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(
        __int64 a1,
        volatile signed __int32 *a2)
{
  __int64 v3; // rdi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-18h] BYREF
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  volatile signed __int32 *v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v13 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && *(_QWORD *)a1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
    v12 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v4);
    v10 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v11[0] = (__int64)v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___(
           &v13,
           &v10);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(ControllerApartment, 0LL, CurrentThreadId);
    if ( v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_(&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
}
