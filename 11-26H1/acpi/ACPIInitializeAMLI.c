/*
 * XREFs of ACPIInitializeAMLI @ 0x1400D7A1C
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     ACPIInitGlobalHeapSize @ 0x1400AAC9C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 *     OSInitializeCallbacks @ 0x1400DD408 (OSInitializeCallbacks.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // edx
  int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, &v7) < 0 )
    gAMLIInitFlags = 0;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, &v7) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v2 = OSReadAcpiConfigurationData(&v8);
  if ( v2 >= 0 )
  {
    gE820Info = v8 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v3, v0, v4, v5);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 2;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v1,
      22,
      36,
      (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
