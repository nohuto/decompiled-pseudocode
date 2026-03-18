/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x1405FFB08
 * Callers:
 *     AlpcpSignal @ 0x1402648EC (AlpcpSignal.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C1ED8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1409BCAB0 (AlpcpReleaseAttributes.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 2) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
  return result;
}
