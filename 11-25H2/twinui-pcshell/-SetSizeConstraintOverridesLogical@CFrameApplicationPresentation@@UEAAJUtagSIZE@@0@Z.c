/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x1801E12F0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x1801E1318 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesLogical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = a2;
  v4[0] = this;
  v4[2] = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(this, v4);
}
