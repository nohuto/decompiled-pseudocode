/*
 * XREFs of ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x18054AF94
 * Callers:
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18054B10C (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x1801FAAB8 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$?RAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@QEBA?A_PAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@Z @ 0x18054AD80 (--$-RAEBU-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90.c)
 *     ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18054B0A8 (--$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA-AU-$com_ptr@UIGraphicsCapture.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_8e1259a6fed20bb5259b923f46cb90bd_ &>(
        __int64 a1,
        signed __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  signed __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a1;
  v8[0] = (__int64)L"Windows.Graphics.Capture.GraphicsCaptureItem";
  v8[1] = 44LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<IGraphicsCaptureItemInterop>(&v11, v9);
  v4 = (signed __int64)v11;
  v10 = 0LL;
  if ( v11 )
  {
    (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
    v5 = v10;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
    _InterlockedIncrement64(&qword_1808DD178);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>,
            v4,
            0LL) )
    {
      v4 = 0LL;
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD180);
    }
    _lambda_8e1259a6fed20bb5259b923f46cb90bd_::operator()<winrt::com_ptr<IGraphicsCaptureItemInterop> const &>(v6, a2);
    _InterlockedDecrement64(&qword_1808DD178);
  }
  else
  {
    *a2 = v4;
    if ( v4 )
      (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( v4 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v11);
  return a2;
}
