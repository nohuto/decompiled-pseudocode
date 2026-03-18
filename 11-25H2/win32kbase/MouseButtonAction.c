/*
 * XREFs of MouseButtonAction @ 0x1402168A0
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F94C0 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021F290 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 result; // rax

  v2 = a2;
  v3 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, v3, v2);
  return result;
}
