/*
 * XREFs of CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_scalar_deleting_destructor_ @ 0x180128BB0
 * Callers:
 *     <none>
 * Callees:
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x180128BEC (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--_CIconLoadingNotif.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
