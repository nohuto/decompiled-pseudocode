/*
 * XREFs of ?GetDesiredBounds@UwpWindowWrapperBase@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801FC250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall UwpWindowWrapperBase::GetDesiredBounds(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  result = a2;
  *a2 = *(_OWORD *)(a1 + 456);
  return result;
}
