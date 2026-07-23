/*
 * XREFs of SiGetSystemPartition @ 0x140B09B50
 * Callers:
 *     <none>
 * Callees:
 *     SiGetFirmwareSystemPartition @ 0x14089A7B0 (SiGetFirmwareSystemPartition.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 */

__int64 __fastcall SiGetSystemPartition(int a1, PCWSTR *a2)
{
  __int64 result; // rax

  result = SiGetBootDeviceName(1, (unsigned int)L"WindowsSysPartDevice", 0, 0, 0, (__int64)a2);
  if ( (int)result < 0 )
    return SiGetFirmwareSystemPartition(a1, a2);
  return result;
}
