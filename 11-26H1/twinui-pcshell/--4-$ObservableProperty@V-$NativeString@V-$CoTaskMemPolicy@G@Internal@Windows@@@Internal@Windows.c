/*
 * XREFs of ??4?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAV123@@Z @ 0x1804B1CE4
 * Callers:
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804B279C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x1804BD994 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 * Callees:
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x18022A8C4 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::operator=(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(a1, a2);
  v3 = (_QWORD *)a1[3];
  v4 = &v3[a1[4]];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
    ++v3;
  }
  return a1;
}
