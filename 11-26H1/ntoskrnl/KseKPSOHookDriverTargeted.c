/*
 * XREFs of KseKPSOHookDriverTargeted @ 0x1405FF820
 * Callers:
 *     <none>
 * Callees:
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     RtlWriteRegistryValue @ 0x140A11D10 (RtlWriteRegistryValue.c)
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
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v1 + 4] = v0;
    StackBase = (char)stru_140E66B30.StackBase;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v1) = 1179791;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
    KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
  }
  return 3221226348LL;
}
