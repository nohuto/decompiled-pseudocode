/*
 * XREFs of ??0?$produce@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801357A0
 * Callers:
 *     ??0?$producer@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180135788 (--0-$producer@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$produce_base@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802C7364 (--0-$produce_base@VListenerWindow@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *winrt::impl::produce<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::produce<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<ListenerWindow,winrt::Windows::Foundation::IInspectable,void>::produce_base<ListenerWindow,winrt::Windows::Foundation::IInspectable,void>();
  result = v0;
  *v0 = &winrt::impl::produce<ListenerWindow,winrt::Windows::Foundation::IInspectable>::`vftable';
  return result;
}
