/*
 * XREFs of _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::_lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x180309B68
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18004687C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AEE9C (-InternalAddRef@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_5f803f865b4b07caa2d72f9fc7ffab60_::_lambda_5f803f865b4b07caa2d72f9fc7ffab60_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // r9

  *a1 = a2;
  v3 = a1 + 1;
  *v3 = *a3;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalAddRef(v3);
  return v4;
}
