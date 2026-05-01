/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted @ 0x1804C9240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted(
        __int64 a1)
{
  *(_BYTE *)(a1 + 16) = 0;
  return ElementDragData::FinishDrag(*(_QWORD *)(a1 + 24), 2LL);
}
