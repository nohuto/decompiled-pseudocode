/*
 * XREFs of ?get_NavigationLevelInternal@UwpWindowWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180448680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_NavigationLevelInternal(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 16 + 280) + 232LL))(*(_QWORD *)(a1 - 16 + 280));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
}
