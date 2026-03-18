/*
 * XREFs of PsReleaseSiloHardReference @ 0x1403DBC10
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DBCA0 (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
