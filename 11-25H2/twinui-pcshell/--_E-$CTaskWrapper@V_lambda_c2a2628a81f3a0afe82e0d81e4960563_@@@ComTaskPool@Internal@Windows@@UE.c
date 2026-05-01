/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804BB700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804BB654 (--1-$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::~CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
