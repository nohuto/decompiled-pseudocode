/*
 * XREFs of AlpcpExposeAttributesInSenderContext @ 0x1409C0C60
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 */

__int64 __fastcall AlpcpExposeAttributesInSenderContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 144) )
    return AlpcpExposeViewAttributeInSenderContext(a1, a2);
  return result;
}
