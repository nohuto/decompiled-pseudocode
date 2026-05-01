/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180211200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802C4130 (--1-$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>::~CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
