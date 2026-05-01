/*
 * XREFs of ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801FB218
 * Callers:
 *     ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x18023D3E0 (-ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsAppIdPinned@VirtualPinnedAppsHandler@@UEAAJPEBGPEAH@Z @ 0x180540200 (-IsAppIdPinned@VirtualPinnedAppsHandler@@UEAAJPEBGPEAH@Z.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180540320 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180540670 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180540870 (-PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180540960 (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     std::any_of_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___________lambda_e0cb6d42b7b600bc273267a5e4fc27a3___ @ 0x1801FB240 (std--any_of_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--basic_string_unsigned.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsAppIdPinnedInternal(
        VirtualPinnedAppsHandler *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return std::any_of_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___________lambda_e0cb6d42b7b600bc273267a5e4fc27a3___(
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 12),
           &v3);
}
