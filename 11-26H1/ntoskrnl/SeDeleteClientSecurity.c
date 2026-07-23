/*
 * XREFs of SeDeleteClientSecurity @ 0x1408EF1A0
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C32F4 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpDeletePort @ 0x1408F0D70 (AlpcpDeletePort.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeDeleteClientSecurity(__int64 a1)
{
  _DWORD *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1[48] == 1 || v1 )
    return ObfDereferenceObjectWithTag(v1, 0x63436553u);
  return result;
}
