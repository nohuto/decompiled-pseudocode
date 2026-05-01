/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180288B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180288B8C (--1-$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>::~CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
