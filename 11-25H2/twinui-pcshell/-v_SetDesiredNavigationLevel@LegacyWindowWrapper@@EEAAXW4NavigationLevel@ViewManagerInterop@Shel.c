/*
 * XREFs of ?v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180421EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180428C38 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LegacyWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  HWND v4; // rsi
  int result; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v4 = (HWND)*(int *)(a1 + 296);
  result = LegacyWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(a1 + 640, a2);
  if ( !a2 )
  {
    if ( v4 )
      return PostMessageW(v4, 0x10u, 0LL, 0LL);
  }
  return result;
}
