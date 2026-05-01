/*
 * XREFs of ?AsyncEventWorkCallback@?$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1804024B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x180052D40 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180216960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802C5D28 (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ?HandleAsyncEventInvoke@?$AsyncEventInvocationPolicy@$00@details@wil@@IEAAXAEAVsrwlock@3@AEAVAsyncEventWorkQueue@23@@Z @ 0x180403F70 (-HandleAsyncEventInvoke@-$AsyncEventInvocationPolicy@$00@details@wil@@IEAAXAEAVsrwlock@3@AEAVAsy.c)
 */

void __fastcall wil::details::EventInvocationContext<1>::AsyncEventWorkCallback(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  volatile int *v5; // rdx
  HMODULE v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  HMODULE phModule; // [rsp+38h] [rbp+10h] BYREF

  phModule = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    &phModule,
    0LL);
  if ( GetModuleHandleExW(4u, (LPCWSTR)wil::details::EventInvocationContext<1>::AsyncEventWorkCallback, &phModule) )
  {
    v6 = phModule;
    phModule = 0LL;
    FreeLibraryWhenCallbackReturns(Instance, v6);
  }
  if ( Context )
  {
    v7 = *((_QWORD *)Context + 7);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)Context + 7, v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
  }
LABEL_10:
  wil::details::AsyncEventInvocationPolicy<1>::HandleAsyncEventInvoke(Context + 64, Context + 88, Context + 96);
  if ( Context )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)Context);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(&phModule);
}
