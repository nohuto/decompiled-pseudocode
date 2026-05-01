/*
 * XREFs of ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180211818
 * Callers:
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x1806AB6C4 (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1806B53E8 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x1802CAB73 (WindowsDuplicateString_0.c)
 */

void __fastcall Platform::Details::DuplicateString(Platform::Details *this, HSTRING *a2, HSTRING *a3)
{
  HRESULT v3; // eax

  if ( this )
  {
    v3 = WindowsDuplicateString_0((HSTRING)this, a2);
    __abi_ThrowIfFailed(v3);
  }
  else
  {
    *a2 = 0LL;
  }
}
