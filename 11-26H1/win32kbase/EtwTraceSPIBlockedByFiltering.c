/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1401C5F10
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceSPIBlockedByFiltering(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &SPIBlockedByFiltering, a3, a1);
  return result;
}
