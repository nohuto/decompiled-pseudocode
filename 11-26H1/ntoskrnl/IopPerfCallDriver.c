/*
 * XREFs of IopPerfCallDriver @ 0x1404E25FC
 * Callers:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404DC7D0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     IopfCallDriver @ 0x1402655E0 (IopfCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x14046CD80 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1404BE33C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallReturnEvent @ 0x1404E26E4 (IopPerfLogCallReturnEvent.c)
 *     IopPerfLogCallEvent @ 0x1404E2750 (IopPerfLogCallEvent.c)
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
