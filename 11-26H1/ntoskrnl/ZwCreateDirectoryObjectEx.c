/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x140724990
 * Callers:
 *     DifZwCreateDirectoryObjectExWrapper @ 0x14069E8A0 (DifZwCreateDirectoryObjectExWrapper.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C2A4C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14087F724 (MiCreatePartitionNamespace.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
