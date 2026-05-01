/*
 * XREFs of ??$make_self@VListenerWindow@@$$V@winrt@@YA?AU?$com_ptr@VListenerWindow@@@0@XZ @ 0x1802B2B84
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027AD34 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@VTouchEdgeGripperHost@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18013626C (--0-$producers_base@VTouchEdgeGripperHost@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@@std.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make_self<ListenerWindow,>(_QWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // r8
  _QWORD *result; // rax

  v2 = operator new(0x38uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  winrt::impl::producers_base<TouchEdgeGripperHost,std::tuple<winrt::Windows::Foundation::IInspectable>>::producers_base<TouchEdgeGripperHost,std::tuple<winrt::Windows::Foundation::IInspectable>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *v4 = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  result = a1;
  *a1 = v4;
  return result;
}
