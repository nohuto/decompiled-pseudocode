/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x180601200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x180600814 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_CSimpleR.c)
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
