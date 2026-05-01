/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x1802B375C
 * Callers:
 *     ??$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x18013A79C (--$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z @ 0x1802B6650 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>,_lambda_e02303751d4e49a7e603e0304fd9978e_>(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
      v5 + 6,
      a2 + 2);
    *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
