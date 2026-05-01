/*
 * XREFs of ??0?$produce@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800FAEDC
 * Callers:
 *     ??0?$producer@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1800FAEC4 (--0-$producer@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@.c)
 * Callees:
 *     ??0?$produce_base@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802D00F0 (--0-$produce_base@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@Q.c)
 */

_QWORD *winrt::impl::produce<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::produce<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable,void>::produce_base<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable,void>();
  result = v0;
  *v0 = &winrt::impl::produce<ListenerWindow,winrt::Windows::Foundation::IInspectable>::`vftable';
  return result;
}
