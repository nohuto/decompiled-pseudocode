/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x14003B7C0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x140221478 (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, v2);
  return result;
}
