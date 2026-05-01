/*
 * XREFs of ?QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801D7580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowManager::QueryObject(
        CImmersiveWindowManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  *a4 = 0LL;
  result = 2147500034LL;
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *))(*(_QWORD *)v5 + 24LL))(
             v5,
             a2,
             a3);
  return result;
}
