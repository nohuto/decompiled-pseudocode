/*
 * XREFs of ?GetUniversalAppModel@UwpWindowWrapper@@UEAA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180223060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall UwpWindowWrapper::GetUniversalAppModel(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 32);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
