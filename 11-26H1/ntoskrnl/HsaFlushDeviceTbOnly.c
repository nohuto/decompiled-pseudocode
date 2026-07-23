/*
 * XREFs of HsaFlushDeviceTbOnly @ 0x1405ABFA0
 * Callers:
 *     <none>
 * Callees:
 *     HsaIommuWaitCommand @ 0x140477FD0 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaFlushDeviceTbOnly(unsigned __int64 *a1, unsigned __int16 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  unsigned __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD *)(*a1 + 8224);
  if ( (result & 0x10) != 0 )
  {
    v5[1] = 0x7FFFFFFFFFFFF001LL;
    v5[0] = a2 | ((a3 | 0x4000000000LL) << 24);
    HsaIommuSendCommand(a1, v5, 0LL);
    return HsaIommuWaitCommand((__int64)a1);
  }
  return result;
}
