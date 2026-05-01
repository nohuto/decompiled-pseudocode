/*
 * XREFs of ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A0770
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804A0B60 (-CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A13A0 (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_9bdd4180_28ad_4e83_8414_eec3e7207b6d, a2);
}
