/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18068B9D8
 * Callers:
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$0 @ 0x1806DF10D (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$1 @ 0x1806DF11F (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
