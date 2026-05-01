/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804CD520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804CD48C (--1-$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>::~CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
