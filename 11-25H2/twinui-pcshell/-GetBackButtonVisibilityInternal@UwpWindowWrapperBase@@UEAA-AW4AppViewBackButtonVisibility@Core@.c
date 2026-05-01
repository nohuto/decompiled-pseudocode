/*
 * XREFs of ?GetBackButtonVisibilityInternal@UwpWindowWrapperBase@@UEAA?AW4AppViewBackButtonVisibility@Core@UI@Windows@@XZ @ 0x1801E25F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetBackButtonVisibilityInternal(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  return *(unsigned int *)(a1 + 448);
}
