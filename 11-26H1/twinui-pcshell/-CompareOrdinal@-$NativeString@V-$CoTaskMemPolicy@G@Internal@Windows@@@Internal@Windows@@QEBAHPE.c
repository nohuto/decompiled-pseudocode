/*
 * XREFs of ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801E0A00
 * Callers:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801E0900 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1805340D0 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18054A740 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x18055B040 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
        __int64 a1,
        const WCHAR *a2,
        int a3)
{
  const WCHAR *v3; // r10
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rdx
  const WCHAR *v7; // rcx

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2 != 0LL ? a3 : 0;
  if ( !a2 )
    v3 = &pvData;
  v6 = -1LL;
  if ( v4 != -1 )
  {
    v7 = *(const WCHAR **)a1;
    LODWORD(v6) = v4;
    if ( v7 )
      return CompareStringOrdinal(v7, v6, v3, v5, 0);
LABEL_9:
    v7 = &pvData;
    return CompareStringOrdinal(v7, v6, v3, v5, 0);
  }
  if ( !*(_QWORD *)a1 )
  {
    LODWORD(v6) = 0;
    goto LABEL_9;
  }
  do
    ++v6;
  while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v6) );
  v7 = *(const WCHAR **)a1;
  return CompareStringOrdinal(v7, v6, v3, v5, 0);
}
