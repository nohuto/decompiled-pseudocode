/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x14004E6E8
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1400544C0 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x140071D50 (ProcessorpAddInstanceCallback.c)
 *     IrqLibAllocateMessageTarget @ 0x1400BBD60 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1400BC020 (IrqLibFreeMessageTarget.c)
 *     IrqLibUpdateInterruptProperties @ 0x1400BC0D4 (IrqLibUpdateInterruptProperties.c)
 *     IrqTransGetInterruptVector @ 0x1400BC7A0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400C2FC0 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400D3A90 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_14008F5E8 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_14008F5F0, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
