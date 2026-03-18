/*
 * XREFs of GenerateMouseMove @ 0x1400D0B90
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 */

__int64 __fastcall GenerateMouseMove(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1);
  if ( result )
    return CMouseProcessor::MoveMouseWindowManagement(result, v1);
  return result;
}
