/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x1805DC600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805DBBA0 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_CSimpleR.c)
 */

volatile int **__fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_(
        volatile int **a1,
        char a2)
{
  shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
