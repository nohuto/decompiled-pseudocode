/*
 * XREFs of HalpUsbLegacyScanBusForHandoff @ 0x14059CBB8
 * Callers:
 *     HalpErrataInitSystem @ 0x140BF11F0 (HalpErrataInitSystem.c)
 * Callees:
 *     HalpUsbLegacyDeviceHandoff @ 0x14059CA40 (HalpUsbLegacyDeviceHandoff.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14059CAE4 (HalpUsbLegacyReadPCIConfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int16 HalpUsbLegacyScanBusForHandoff()
{
  unsigned int v0; // ebx
  unsigned int i; // esi
  unsigned __int8 j; // bp
  char v3; // di
  int v4; // r14d
  unsigned int v5; // eax
  int PCIConfig; // eax
  unsigned __int16 v8[7]; // [rsp+30h] [rbp-68h] BYREF
  char v9; // [rsp+3Eh] [rbp-5Ah]

  memset_0(v8, 0, 0x40uLL);
  v0 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      v3 = 0;
      v4 = j & 0x1F;
      do
      {
        while ( 1 )
        {
          v5 = v0 & 0xFFFFFF00;
          v0 = v4 | v0 & 0xFFFFFF00 | (32 * (v3 & 7));
          PCIConfig = HalpUsbLegacyReadPCIConfig(32 * (v3 & 7u), i, v4 | v5 | (32 * (v3 & 7)));
          if ( !PCIConfig )
            break;
          LOWORD(PCIConfig) = v8[0] - 1;
          if ( (unsigned __int16)(v8[0] - 1) > 0xFFFDu )
            break;
          PCIConfig = HalpUsbLegacyReadPCIConfig(65533LL, i, v0);
          if ( !PCIConfig )
            goto LABEL_11;
          LOWORD(PCIConfig) = HalpUsbLegacyDeviceHandoff(0LL, i, v0, v8);
          if ( v3 )
            goto LABEL_11;
          if ( v9 >= 0 )
            goto LABEL_12;
          v3 = 1;
        }
        if ( !v3 )
          break;
LABEL_11:
        ++v3;
      }
      while ( (unsigned __int8)v3 < 8u );
LABEL_12:
      ;
    }
  }
  return PCIConfig;
}
