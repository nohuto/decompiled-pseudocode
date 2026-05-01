/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAPEAU345@@Z @ 0x180243464
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802164B4 (-Add@-$AgileEventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180203900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180203900.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_7a5cfbbed259c3858157510f0ba1f330_@@@Z @ 0x18033C420 (--$Make@U-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<bool>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v14 = (__int64 *)&v16;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_6ea71ff9_100d_54c3_bb4a_6922523cf9a9, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = (__int64 *)*v4;
    v15 = 0LL;
    *v5 = 0LL;
    v14 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v8 = v16;
  v16 = 0LL;
  v14 = v8;
  v9 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_7a5cfbbed259c3858157510f0ba1f330_,-1,IInspectable *,unsigned char>,_lambda_7a5cfbbed259c3858157510f0ba1f330_>(
                    &v15,
                    &v14);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v15;
  v17 = v11;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
      v12,
      v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  if ( v11 )
  {
    v17 = 0LL;
    *a2 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    AgileReference = -2147024882;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return (unsigned int)AgileReference;
}
