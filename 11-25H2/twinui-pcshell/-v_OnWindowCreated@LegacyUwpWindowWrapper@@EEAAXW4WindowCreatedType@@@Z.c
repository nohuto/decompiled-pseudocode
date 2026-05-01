/*
 * XREFs of ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180427A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x180427800 (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804278CC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x180428ABC (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_DWORD *)(a1 + 632) )
  {
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 609) = 1;
    }
    else
    {
      LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)(a1 - 8), 0);
      Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 632);
      LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
    }
  }
  else
  {
    PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  }
}
