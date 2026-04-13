/*
 * XREFs of ?CloseHeapPointer@@YAXPEAX@Z @ 0x180002B0C
 * Callers:
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseHeapPointer(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
