/*
 * XREFs of ZwFilterBootOption @ 0x140729D40
 * Callers:
 *     DifZwFilterBootOptionWrapper @ 0x1406A9850 (DifZwFilterBootOptionWrapper.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     IopInitializeInMemoryDumpData @ 0x140CC04C0 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&FilterOperation);
}
