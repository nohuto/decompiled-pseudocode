/*
 * XREFs of ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x1801DC5F0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x1801DC630 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___.c)
 *     _lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_ @ 0x1802DCED0 (_lambda_e4f37fdae08429a84761ade0db4bdd38_--_lambda_e4f37fdae08429a84761ade0db4bdd38_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPreferredAspectRatioHint(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2)
{
  __int64 v2; // r9
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  struct tagSIZE v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v4 = *(_OWORD *)lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_(
                    v5,
                    this,
                    &v6,
                    this);
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(v2, &v4);
}
