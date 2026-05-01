/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180305C80
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x180303CA8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___.c)
 *     _lambda_963b63a3e68d50a8e9a7cd84e91426d9_::_lambda_963b63a3e68d50a8e9a7cd84e91426d9_ @ 0x180304294 (_lambda_963b63a3e68d50a8e9a7cd84e91426d9_--_lambda_963b63a3e68d50a8e9a7cd84e91426d9_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  _QWORD *v3; // rax
  __int64 v4; // xmm1_8
  _DWORD *v5; // r10
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  struct tagSIZE v10; // [rsp+78h] [rbp+10h] BYREF
  struct tagSIZE v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  v3 = lambda_963b63a3e68d50a8e9a7cd84e91426d9_::_lambda_963b63a3e68d50a8e9a7cd84e91426d9_(
         v9,
         (__int64)this,
         &v10,
         &v11);
  v4 = v3[2];
  v7 = *(_OWORD *)v3;
  v8 = v4;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(v5, (__int64)&v7);
}
