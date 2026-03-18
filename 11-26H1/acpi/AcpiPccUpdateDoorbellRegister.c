/*
 * XREFs of AcpiPccUpdateDoorbellRegister @ 0x1400517FC
 * Callers:
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 *     AcpiPccRingDoorbellCriticalSection @ 0x1400650E0 (AcpiPccRingDoorbellCriticalSection.c)
 * Callees:
 *     AcpiPccWriteRegister @ 0x14004DB5C (AcpiPccWriteRegister.c)
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 */

__int64 __fastcall AcpiPccUpdateDoorbellRegister(__int64 a1)
{
  __int64 Register; // rax

  Register = AcpiPccReadRegister(a1 + 104);
  AcpiPccWriteRegister((unsigned __int8 *)(a1 + 104), *(_QWORD *)(a1 + 80) | Register & *(_QWORD *)(a1 + 88));
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 564), 1);
}
