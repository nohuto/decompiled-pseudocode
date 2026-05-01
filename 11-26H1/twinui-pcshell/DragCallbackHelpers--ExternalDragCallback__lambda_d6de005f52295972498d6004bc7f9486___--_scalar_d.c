/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_ @ 0x1804DB070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804DAD14 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--_External.c)
 */

void *__fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
