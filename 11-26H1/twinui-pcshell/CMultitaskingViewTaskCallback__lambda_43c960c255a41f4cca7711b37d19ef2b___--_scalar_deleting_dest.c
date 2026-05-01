/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_scalar_deleting_destructor_ @ 0x180497F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___ @ 0x180497F14 (CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___--_CMultitaskingViewTas.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
