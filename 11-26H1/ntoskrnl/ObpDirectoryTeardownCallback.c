/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x1408A7440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  ObMakeTemporaryObject(*(PVOID *)a1);
  result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7254624Fu);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    return ObDereferenceDeviceMap(v3);
  return result;
}
