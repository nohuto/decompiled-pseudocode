/*
 * XREFs of ??$create_and_initialize@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAVMeetAndChatIris@implementation@Shell@Internal@Windows@1@XZ @ 0x1802299B4
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802839EC (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x18007AAF0 (--0-$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V-$tu.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

_QWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,>()
{
  _QWORD *v0; // rbx

  v0 = operator new(0x90uLL);
  memset_0(v0, 0, 0x90uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v0[2] = 1LL;
  *((_BYTE *)v0 + 24) = 0;
  v0[4] = 0LL;
  v0[5] = 0LL;
  *((_DWORD *)v0 + 12) = 0;
  v0[7] = 0LL;
  v0[8] = 0LL;
  *((_BYTE *)v0 + 72) = 0;
  v0[10] = 0LL;
  v0[11] = 0LL;
  v0[12] = 0LL;
  v0[13] = 0LL;
  v0[14] = 0LL;
  v0[15] = 0LL;
  v0[16] = 0LL;
  v0[17] = 0LL;
  *v0 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,std::tuple<IInspectable>>'};
  v0[1] = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,IInspectable>'};
  return v0;
}
