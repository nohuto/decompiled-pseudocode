/*
 * XREFs of AcpiPccReadErrorStatus @ 0x140065568
 * Callers:
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 * Callees:
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 */

unsigned __int64 __fastcall AcpiPccReadErrorStatus(unsigned __int8 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 v3; // cl
  unsigned __int64 v4; // rax

  result = 0LL;
  if ( !a1 )
    return -1LL;
  v3 = *a1;
  if ( v3 == 0xFF )
  {
    v4 = *(unsigned __int16 *)(*((_QWORD *)a1 + 7) + 14LL);
    return (v4 >> 2) & 1;
  }
  if ( v3 < 3u )
  {
    v4 = *(unsigned __int16 *)(*((_QWORD *)a1 + 7) + 6LL);
    return (v4 >> 2) & 1;
  }
  if ( (unsigned __int8)(v3 - 3) <= 1u )
    return *((_QWORD *)a1 + 44) & AcpiPccReadRegister(a1 + 336);
  return result;
}
