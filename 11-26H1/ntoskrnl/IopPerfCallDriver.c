/*
 * XREFs of IopPerfCallDriver @ 0x1404DBCDC
 * Callers:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404D5EB0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x140466500 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1404B7B8C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallReturnEvent @ 0x1404DBDC4 (IopPerfLogCallReturnEvent.c)
 *     IopPerfLogCallEvent @ 0x1404DBE30 (IopPerfLogCallEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR a2)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  __int64 IrpExtension; // rcx

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 1);
    if ( IrpExtension )
      *(_QWORD *)(IrpExtension + 40) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v4 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v4);
    v5 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v4);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v5;
}
