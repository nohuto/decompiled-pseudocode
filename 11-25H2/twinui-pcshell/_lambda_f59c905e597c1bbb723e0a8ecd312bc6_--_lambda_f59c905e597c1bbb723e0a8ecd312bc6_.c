/*
 * XREFs of _lambda_f59c905e597c1bbb723e0a8ecd312bc6_::_lambda_f59c905e597c1bbb723e0a8ecd312bc6_ @ 0x1803A41B0
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800F5418 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_f59c905e597c1bbb723e0a8ecd312bc6_::_lambda_f59c905e597c1bbb723e0a8ecd312bc6_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = *a3;
  a1[2] = *a4;
  return a1;
}
