/*
 * XREFs of KseKPSOHookDriverTargeted @ 0x140602270
 * Callers:
 *     <none>
 * Callees:
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 */

__int64 KseKPSOHookDriverTargeted()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  char StackBase; // al
  int ValueData[6]; // [rsp+30h] [rbp-18h] BYREF

  ValueData[0] = 1;
  v0 = RtlWriteRegistryValue(2u, L"Session Manager\\Memory Management", L"KernelPadSectionsOverride", 4u, ValueData, 4u);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v1) = v0;
    StackBase = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v1) = 1179790;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
    KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
  }
  return 3221226348LL;
}
