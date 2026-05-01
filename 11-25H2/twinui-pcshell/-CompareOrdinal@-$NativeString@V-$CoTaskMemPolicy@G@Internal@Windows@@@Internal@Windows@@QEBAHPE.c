/*
 * XREFs of ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801EDBB0
 * Callers:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801EDAC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x180511990 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x180527680 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x180537330 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
        const WCHAR **a1,
        const WCHAR *a2,
        int a3)
{
  const WCHAR *v3; // r11
  const WCHAR *v4; // r10
  int v5; // r9d
  bool v6; // zf
  const WCHAR *v7; // rdx

  v3 = &LocaleName;
  v4 = a2;
  v5 = a2 != 0LL ? a3 : 0;
  v6 = a2 == 0LL;
  v7 = a1[1];
  if ( v6 )
    v4 = &LocaleName;
  if ( v7 == (const WCHAR *)-1LL )
  {
    if ( *a1 )
    {
      do
        v7 = (const WCHAR *)((char *)v7 + 1);
      while ( (*a1)[(_QWORD)v7] );
    }
    else
    {
      LODWORD(v7) = 0;
    }
  }
  if ( *a1 )
    v3 = *a1;
  return CompareStringOrdinal(v3, (int)v7, v4, v5, 0);
}
