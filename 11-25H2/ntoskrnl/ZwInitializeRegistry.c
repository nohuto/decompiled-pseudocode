/*
 * XREFs of ZwInitializeRegistry @ 0x14069D260
 * Callers:
 *     NtInitializeRegistry @ 0x1407C05B0 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootCondition);
}
