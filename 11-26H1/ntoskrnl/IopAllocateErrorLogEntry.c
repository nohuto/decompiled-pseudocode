/*
 * XREFs of IopAllocateErrorLogEntry @ 0x1404DC04C
 * Callers:
 *     IoAllocateErrorLogEntry @ 0x1404DC010 (IoAllocateErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1405CAD68 (IoAllocateGenericErrorLogEntry.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateErrorLogEntry(PVOID Object, PVOID a2, char a3)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rdi
  __int64 result; // rax

  if ( (unsigned __int8)(a3 - 48) > 0xC0u )
    return 0LL;
  v5 = ((a3 + 7) & 0xF8) + 48;
  if ( (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&IopSessionNotificationLock.QuantumTarget, v5) > 0x64000
    || (Pool2 = ExAllocatePool2(0x40uLL)) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&IopSessionNotificationLock.QuantumTarget, -v5);
    return 0LL;
  }
  if ( Object )
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
  if ( a2 )
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_WORD *)Pool2 = 11;
  result = Pool2 + 48;
  *(_WORD *)(Pool2 + 2) = v5;
  *(_QWORD *)(Pool2 + 24) = Object;
  *(_QWORD *)(Pool2 + 32) = a2;
  return result;
}
