/*
 * XREFs of ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x180170288
 * Callers:
 *     _lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator() @ 0x18016FD84 (_lambda_32debc2fc80ca1e0059f85a00ba9919c_--operator().c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180170340 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GlobalInterfaceTable::Unmarshal(unsigned int a1, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  *a3 = 0LL;
  result = GlobalInterfaceTable::s_Retrieve();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, const struct _GUID *, void **))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->GetInterfaceFromGlobal)(
             GlobalInterfaceTable::s_pGlobalInterfaceTable,
             a1,
             a2,
             a3);
  return result;
}
