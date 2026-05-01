/*
 * XREFs of ?GetTitleBarVisibilityModeInternal@UwpWindowWrapperBase@@UEAA?AW4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x1801E8070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall UwpWindowWrapperBase::GetTitleBarVisibilityModeInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  return *(_BYTE *)(a1 + 462) == 0;
}
