/*
 * XREFs of ??0MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802B87BC
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027AD34 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800DA84C (--0-$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V-$tu.c)
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180136944 (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::MeetAndChatIris(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *this)
{
  __int64 v1; // rcx
  _QWORD *v2; // r9
  __int64 v3; // r9
  __int64 v4; // r8
  _QWORD *v5; // r9
  _QWORD *result; // rax

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v1 + 16, 1LL);
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,std::tuple<IInspectable>>'};
  v2[1] = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,IInspectable>'};
  std::atomic<bool>::atomic<bool>((__int64)(v2 + 3), 0);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  std::atomic<bool>::atomic<bool>(v3 + 72, 0);
  v5[10] = v4;
  result = v5;
  v5[11] = v4;
  v5[12] = v4;
  v5[13] = v4;
  v5[14] = v4;
  v5[15] = v4;
  v5[16] = v4;
  v5[17] = v4;
  return result;
}
