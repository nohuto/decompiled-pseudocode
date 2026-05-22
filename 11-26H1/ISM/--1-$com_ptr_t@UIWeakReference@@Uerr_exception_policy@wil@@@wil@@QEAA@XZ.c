/*
 * XREFs of ??1?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800767E4
 * Callers:
 *     _dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x1800767C0 (_dynamic_atexit_destructor_for__MPCManagerClientFactory--m_spThreadReference__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::~com_ptr_t<IWeakReference,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
