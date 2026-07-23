/*
 * XREFs of ZwInitializeRegistry @ 0x14072A0E0
 * Callers:
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
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
