/*
 * XREFs of _lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_ @ 0x18030B9C8
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1801BA01C (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E19F0 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_(
        __int64 a1,
        volatile int *a2,
        int *a3,
        __int64 *a4,
        __int64 a5)
{
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // r10
  __int64 result; // rax

  v5 = *a3;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = v5;
  v6 = (__int64 *)(a1 + 24);
  *v6 = *a4;
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(v6, a2);
  result = v7;
  *(_QWORD *)(v7 + 32) = a5;
  return result;
}
