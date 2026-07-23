/*
 * XREFs of HalpUsbLegacyStopUhciInterrupt @ 0x14059CE3C
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140BF4CEC (HalpStopLegacyUsbInterruptsInternal.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14059CAE4 (HalpUsbLegacyReadPCIConfig.c)
 *     HalpUsbLegacyWritePCIConfig @ 0x14059CB20 (HalpUsbLegacyWritePCIConfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int16 __fastcall HalpUsbLegacyStopUhciInterrupt(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 result; // ax
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned __int16 v12; // [rsp+30h] [rbp-19h]
  _BYTE v13[32]; // [rsp+40h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp+17h]

  memset_0(v13, 0, 0x40uLL);
  if ( a4 )
  {
    HalpUsbLegacyWritePCIConfig(v7, a2, a3);
    result = HalpUsbLegacyReadPCIConfig(v8, a2, a3);
    if ( (v13[4] & 1) != 0 )
    {
      v10 = v14 & 0xFFFFFFFC;
      v12 = v14 & 0xFFFC;
      if ( (v14 & 0xFFFFFFFC) != 0 && v10 < 0xFFFF )
      {
        result = __inword(v10);
        if ( (result & 8) == 0 )
        {
          __outword(v12, 4u);
          KeStallExecutionProcessor(0x2710u);
          result = 0;
          __outword(v12, 0);
        }
      }
    }
  }
  else
  {
    HalpUsbLegacyReadPCIConfig(v7, a2, a3);
    return HalpUsbLegacyWritePCIConfig(v11, a2, a3);
  }
  return result;
}
