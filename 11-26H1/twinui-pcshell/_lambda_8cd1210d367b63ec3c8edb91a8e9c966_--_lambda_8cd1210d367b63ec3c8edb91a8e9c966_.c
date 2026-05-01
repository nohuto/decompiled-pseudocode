/*
 * XREFs of _lambda_8cd1210d367b63ec3c8edb91a8e9c966_::_lambda_8cd1210d367b63ec3c8edb91a8e9c966_ @ 0x1803AD20C
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800CB964 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_8cd1210d367b63ec3c8edb91a8e9c966_::_lambda_8cd1210d367b63ec3c8edb91a8e9c966_(
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
