/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x140602558
 * Callers:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C4F38 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 2) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
  return result;
}
