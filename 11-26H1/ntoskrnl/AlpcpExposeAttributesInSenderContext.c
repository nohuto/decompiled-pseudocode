/*
 * XREFs of AlpcpExposeAttributesInSenderContext @ 0x140991C40
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 */

__int64 __fastcall AlpcpExposeAttributesInSenderContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 144) )
    return AlpcpExposeViewAttributeInSenderContext(a1, a2);
  return result;
}
