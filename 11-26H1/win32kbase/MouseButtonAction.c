/*
 * XREFs of MouseButtonAction @ 0x14021BD90
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x140222A38 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
