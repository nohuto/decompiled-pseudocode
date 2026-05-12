/*
 * XREFs of sub_140070678 @ 0x140070678
 * Callers:
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140070678(__int64 a1)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  ZwClose(*(HANDLE *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  return ExDeleteResourceLite((PERESOURCE)(a1 + 24));
}
