/*
 * XREFs of IoAllowExecution @ 0x14026F1B4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  int v2; // ebx

  DevicePDO = (_DWORD *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = DevicePDO[12];
  ObfDereferenceObjectWithTag(DevicePDO, 0x746C6644u);
  return (v2 & 0x800000) == 0;
}
