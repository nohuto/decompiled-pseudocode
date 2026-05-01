/*
 * XREFs of ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180421CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x180421A90 (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x180421B5C (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x180428ABC (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LegacyWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  unsigned int Visibility; // eax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  if ( !*(_DWORD *)(a1 + 640) )
    return PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 601) = 1;
  }
  else
  {
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)(a1 - 8), 0);
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 640);
    return LegacyWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
  }
  return result;
}
