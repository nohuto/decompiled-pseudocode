/*
 * XREFs of _lambda_03cd8f9c11c3b75e9e31d9155b53654a_::_lambda_03cd8f9c11c3b75e9e31d9155b53654a_ @ 0x180309B40
 * Callers:
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x18010B050 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AEE9C (-InternalAddRef@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_03cd8f9c11c3b75e9e31d9155b53654a_::_lambda_03cd8f9c11c3b75e9e31d9155b53654a_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r10

  *a1 = *a2;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalAddRef(a1);
  result = v2;
  *(_QWORD *)(v2 + 8) = v4;
  return result;
}
