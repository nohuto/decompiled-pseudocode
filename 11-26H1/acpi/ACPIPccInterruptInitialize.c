/*
 * XREFs of ACPIPccInterruptInitialize @ 0x1400B2BE0
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     ACPIPccInterruptSubspaceInitialize @ 0x1400B2C6C (ACPIPccInterruptSubspaceInitialize.c)
 */

__int64 ACPIPccInterruptInitialize()
{
  ULONG_PTR v0; // rsi
  unsigned int v1; // edi
  unsigned int i; // ebx
  char v3; // al
  int v4; // eax

  v0 = RootDeviceExtension;
  v1 = 0;
  qword_14008E990 = (__int64)&AcpiPccPlatformInterruptList;
  AcpiPccPlatformInterruptList = (__int64)&AcpiPccPlatformInterruptList;
  if ( AcpiPccSubspaces )
  {
    for ( i = 0; i < AcpiPccSubspaceCount; ++i )
    {
      v3 = *(_BYTE *)(AcpiPccSubspaces + 824LL * i);
      if ( v3 == 3 || v3 == 4 )
      {
        v4 = ACPIPccInterruptSubspaceInitialize(v0);
        if ( v4 < 0 )
          v1 = v4;
      }
    }
  }
  return v1;
}
