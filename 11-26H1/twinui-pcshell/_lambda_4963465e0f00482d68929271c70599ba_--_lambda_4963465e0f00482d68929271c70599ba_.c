/*
 * XREFs of _lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_ @ 0x18030768C
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1801B16BC (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072898 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_(
        __int64 a1,
        volatile int *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 *v5; // rcx
  __int64 v6; // r10
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = *a3;
  v5 = (__int64 *)(a1 + 24);
  *v5 = *a4;
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(v5, a2);
  result = v6;
  *(_QWORD *)(v6 + 32) = a5;
  return result;
}
