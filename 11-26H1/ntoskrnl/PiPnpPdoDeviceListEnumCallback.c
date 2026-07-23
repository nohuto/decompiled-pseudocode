/*
 * XREFs of PiPnpPdoDeviceListEnumCallback @ 0x140AF4DC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x140AF4E04 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 */

__int64 __fastcall PiPnpPdoDeviceListEnumCallback(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  int v3; // ebx

  v2 = *(void **)(a1 + 32);
  v3 = PiPnpAddDeviceToPdoDeviceListEnumContext(a2, v2);
  if ( v3 >= 0 )
    ObfReferenceObjectWithTag(v2, 0x6C706E50u);
  return (unsigned int)v3;
}
