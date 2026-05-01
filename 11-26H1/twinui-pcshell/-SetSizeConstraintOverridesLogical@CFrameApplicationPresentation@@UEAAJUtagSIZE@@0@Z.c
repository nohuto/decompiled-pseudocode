/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x1801D2590
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x1801D25E4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___.c)
 *     _lambda_963b63a3e68d50a8e9a7cd84e91426d9_::_lambda_963b63a3e68d50a8e9a7cd84e91426d9_ @ 0x180304294 (_lambda_963b63a3e68d50a8e9a7cd84e91426d9_--_lambda_963b63a3e68d50a8e9a7cd84e91426d9_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesLogical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int64 v3; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // r10
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  struct tagSIZE v10; // [rsp+78h] [rbp+10h] BYREF
  struct tagSIZE v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  v3 = lambda_963b63a3e68d50a8e9a7cd84e91426d9_::_lambda_963b63a3e68d50a8e9a7cd84e91426d9_(&v9, this, &v10, &v11);
  v4 = *(_QWORD *)(v3 + 16);
  v7 = *(_OWORD *)v3;
  v8 = v4;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(v5, &v7);
}
