/*
 * XREFs of ?GetLastActivationTimestamp@CClassicWindowExternal@@UEAAJPEAU_FILETIME@@@Z @ 0x1801BC790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClassicWindowExternal::GetLastActivationTimestamp(
        CClassicWindowExternal *this,
        struct _FILETIME *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(_QWORD, struct _FILETIME *))(**((_QWORD **)this + 7) + 64LL))(
                    *((_QWORD *)this + 7),
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
