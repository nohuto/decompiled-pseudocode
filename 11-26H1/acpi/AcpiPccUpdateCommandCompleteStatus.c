/*
 * XREFs of AcpiPccUpdateCommandCompleteStatus @ 0x140065688
 * Callers:
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 *     AcpiPccRingDoorbellCriticalSection @ 0x1400650E0 (AcpiPccRingDoorbellCriticalSection.c)
 * Callees:
 *     AcpiPccWriteRegister @ 0x14004DB5C (AcpiPccWriteRegister.c)
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 *     AcpiPccClearGenericStatusFields @ 0x1400653B4 (AcpiPccClearGenericStatusFields.c)
 */

void __fastcall AcpiPccUpdateCommandCompleteStatus(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 *v3; // rbx
  unsigned __int64 Register; // rax

  if ( a1 )
  {
    v1 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 0xFF || v1 < 3u )
    {
      AcpiPccClearGenericStatusFields(a1, 0xFFF8u);
    }
    else if ( (unsigned __int8)(v1 - 3) <= 1u )
    {
      v3 = (unsigned __int8 *)(a1 + 296);
      Register = AcpiPccReadRegister((unsigned __int8 *)(a1 + 296));
      AcpiPccWriteRegister(v3, *(_QWORD *)(a1 + 320) | Register & *(_QWORD *)(a1 + 312));
    }
  }
}
