/*
 * XREFs of AcpiPccAcknowledgePlatformInterrupt @ 0x1400648DC
 * Callers:
 *     ACPIPccInterruptServiceRoutine @ 0x140064810 (ACPIPccInterruptServiceRoutine.c)
 * Callees:
 *     AcpiPccWriteRegister @ 0x14004DB5C (AcpiPccWriteRegister.c)
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 */

void __fastcall AcpiPccAcknowledgePlatformInterrupt(__int64 a1)
{
  unsigned __int8 *v2; // rbx
  unsigned __int64 Register; // rax

  if ( (*(_BYTE *)(a1 + 132) & 2) == 0 )
  {
    v2 = (unsigned __int8 *)(a1 + 224);
    Register = AcpiPccReadRegister((unsigned __int8 *)(a1 + 224));
    AcpiPccWriteRegister(v2, *(_QWORD *)(a1 + 248) | Register & *(_QWORD *)(a1 + 240));
  }
}
