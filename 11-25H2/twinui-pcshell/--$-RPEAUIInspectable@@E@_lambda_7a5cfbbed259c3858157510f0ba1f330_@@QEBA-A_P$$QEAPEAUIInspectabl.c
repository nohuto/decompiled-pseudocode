/*
 * XREFs of ??$?RPEAUIInspectable@@E@_lambda_7a5cfbbed259c3858157510f0ba1f330_@@QEBA?A_P$$QEAPEAUIInspectable@@$$QEAE@Z @ 0x1801422AC
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@E@Z @ 0x180142250 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AB028 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_7a5cfbbed259c3858157510f0ba1f330_::operator()<IInspectable *,unsigned char>(
        Microsoft::WRL::AgileRef *a1,
        _QWORD *a2,
        _BYTE *a3)
{
  int v5; // ebx
  __int64 v6; // r8
  void *v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(a1, &GUID_6ea71ff9_100d_54c3_bb4a_6922523cf9a9, &v8);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = *a3;
    v5 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v8 + 24LL))(v8, *a2, v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v5;
}
