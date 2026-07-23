/*
 * XREFs of IoUpdateIrpIoAttributionHandle @ 0x1404C2970
 * Callers:
 *     <none>
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IoUpdateIrpIoAttributionHandle(__int64 a1, __int64 a2)
{
  return IopSetDiskIoAttributionExtension(a1, a2, (__int64)KeGetCurrentThread(), 1);
}
