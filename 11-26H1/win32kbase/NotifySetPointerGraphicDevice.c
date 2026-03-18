/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x140166C20
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x140166C4C (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(unsigned int a1, int a2, int a3)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, a1);
  return result;
}
