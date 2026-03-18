/*
 * XREFs of ReleaseMouseButton @ 0x140216AE0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021F4D4 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 */

__int64 __fastcall ReleaseMouseButton(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( result )
    return CMouseProcessor::AccessibilityReleaseMouseButton(result, v2);
  return result;
}
