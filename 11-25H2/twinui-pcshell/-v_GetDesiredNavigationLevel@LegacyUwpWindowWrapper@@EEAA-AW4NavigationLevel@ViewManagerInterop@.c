/*
 * XREFs of ?v_GetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1804279B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::v_GetDesiredNavigationLevel(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 232LL))(*(_QWORD *)(a1 + 280));
  return *(unsigned int *)(a1 + 632);
}
