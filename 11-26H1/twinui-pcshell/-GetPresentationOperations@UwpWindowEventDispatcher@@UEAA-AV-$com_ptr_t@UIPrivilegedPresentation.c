/*
 * XREFs of ?GetPresentationOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801E9C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetPresentationOperations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
