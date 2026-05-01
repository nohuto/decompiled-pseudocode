/*
 * XREFs of ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x18043EBE4
 * Callers:
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x18043E530 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180447410 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18043DEC8 (--$call@P6A-AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueCont.c)
 *     ?TileId@?$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18043EB68 (-TileId@-$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@w.c)
 */

_QWORD *__fastcall winrt::Microsoft::UI::Dispatching::DispatcherQueueController::CreateOnCurrentThread(_QWORD *a1)
{
  const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *(__fastcall *v3)(const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089C2A8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics> )
  {
    winrt::impl::consume_Windows_UI_StartScreen_ISecondaryTile<winrt::Windows::UI::StartScreen::ISecondaryTile>::TileId(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089C2A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C2A8);
    v3 = _lambda_c249d9825049da1bbe9da1573b280fea_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::call<winrt::Microsoft::UI::Dispatching::DispatcherQueueController (*)(winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
