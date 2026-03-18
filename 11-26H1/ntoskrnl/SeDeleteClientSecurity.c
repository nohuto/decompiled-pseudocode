/*
 * XREFs of SeDeleteClientSecurity @ 0x1408E8BE0
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C0294 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpDeletePort @ 0x1408EA7B0 (AlpcpDeletePort.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
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
