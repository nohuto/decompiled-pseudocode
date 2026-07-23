/*
 * XREFs of VfIrpLogInit @ 0x140C416D4
 * Callers:
 *     VfIrpTrackingPluginEntry @ 0x1407260A0 (VfIrpTrackingPluginEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR VfIrpLogInit()
{
  ULONG_PTR result; // rax

  ViIrpLogDatabaseLock = 0LL;
  result = ExAllocatePool2(64LL, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = result;
  if ( result )
  {
    *(_DWORD *)result = 0;
    result += 8LL;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
  }
  return result;
}
