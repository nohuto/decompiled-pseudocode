/*
 * XREFs of _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18054B10C
 * Callers:
 *     ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B2B0 (-GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x1801FAAB8 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@QEBA?A_PAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@Z @ 0x18054AD80 (--$-RAEBU-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90.c)
 *     ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x18054AF94 (--$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall anonymous_namespace_::CreateGraphicsCaptureItem(
        winrt *this,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  struct IUnknown *v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, void *, void **, int, _DWORD, _QWORD, _QWORD); // rdi
  void **v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = a2;
  _InterlockedIncrement64(&qword_1808DD178);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop> )
  {
    _lambda_8e1259a6fed20bb5259b923f46cb90bd_::operator()<winrt::com_ptr<IGraphicsCaptureItemInterop> const &>(
      (__int64)this,
      &v13);
    _InterlockedDecrement64(&qword_1808DD178);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD178);
    winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_8e1259a6fed20bb5259b923f46cb90bd_ &>(
      (__int64)this,
      &v13,
      a3);
  }
  *(_QWORD *)this = 0LL;
  v10 = 0;
  v11 = 0LL;
  v5 = v13;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, void **, int, _DWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL);
  v7 = winrt::put_abi(this, v4);
  v8 = v6(v5, 0LL, &winrt::impl::guid_v<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem>, v7, 7, 0, 0LL, 0LL);
  winrt::check_hresult((int *)&v12, v8, (__int64)&v10);
  if ( v5 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v13);
  return this;
}
