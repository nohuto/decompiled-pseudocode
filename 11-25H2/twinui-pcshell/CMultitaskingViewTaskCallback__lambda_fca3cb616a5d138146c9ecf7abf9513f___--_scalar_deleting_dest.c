/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::_scalar_deleting_destructor_ @ 0x180486AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::_CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___ @ 0x1804868CC (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--_CMultitaskingViewTas.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::_CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
