/*
 * XREFs of ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x180324E80
 * Callers:
 *     ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x1803230D0 (-FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180086860 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x180321F9C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c.c)
 */

void __fastcall CFullScreenManager::_FireFullScreenModeChangedEvent(RTL_SRWLOCK *this, int a2)
{
  volatile signed __int32 **v4; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  struct IObjectArray *v8; // [rsp+30h] [rbp-10h] BYREF
  BOOL v9; // [rsp+38h] [rbp-8h]
  struct IObjectArray *v10; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  if ( (int)CGITRegistrationList::GetCallbackArray(this + 18, &v10) >= 0 )
  {
    v8 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v9 = a2 != 0;
    v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___(
           &v11,
           (__int64)&v8);
    v5 = (__int64)*v4;
    *v4 = 0LL;
    v6 = v11;
    v12 = v5;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v6);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
}
