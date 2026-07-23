/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDescription @ 0x1407E7188
 * Callers:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x140781C04 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 * Callees:
 *     PopGenerateDeviceFriendlyName @ 0x140B25330 (PopGenerateDeviceFriendlyName.c)
 *     PopDiagQueryDevicePropertyString @ 0x140B32CC8 (PopDiagQueryDevicePropertyString.c)
 *     PopCloneUnicodeString @ 0x140B335BC (PopCloneUnicodeString.c)
 */

__int64 __fastcall PopDirectedDripsDiagCreateDeviceDescription(__int64 a1, __int64 a2)
{
  int DeviceFriendlyName; // r8d
  int DevicePropertyString; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r8

  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  DeviceFriendlyName = PopGenerateDeviceFriendlyName(a1, 1LL, a2 + 48);
  if ( DeviceFriendlyName >= 0 )
  {
    DevicePropertyString = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyHardwareID);
    DeviceFriendlyName = DevicePropertyString;
    if ( DevicePropertyString < 0 )
    {
      if ( DevicePropertyString != -1073741772 )
        return (unsigned int)DeviceFriendlyName;
    }
    else
    {
      v6 = 0;
      v7 = *(unsigned __int16 *)(a2 + 64) >> 1;
      if ( v7 > 2 )
      {
        do
        {
          v8 = *(_QWORD *)(a2 + 72);
          if ( !*(_WORD *)(v8 + 2LL * v6) )
            *(_WORD *)(v8 + 2LL * v6) = 44;
          ++v6;
        }
        while ( v6 + 2 < v7 );
      }
    }
    DeviceFriendlyName = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassName);
    if ( (int)(DeviceFriendlyName + 0x80000000) < 0 || DeviceFriendlyName == -1073741772 )
    {
      DeviceFriendlyName = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassGuid);
      if ( ((DeviceFriendlyName + 0x80000000) & 0x80000000) != 0 || DeviceFriendlyName == -1073741772 )
      {
        DeviceFriendlyName = PopCloneUnicodeString((PCUNICODE_STRING)(a1 + 40), (PUNICODE_STRING)(a2 + 112));
        if ( DeviceFriendlyName >= 0 )
        {
          DeviceFriendlyName = PopCloneUnicodeString((PCUNICODE_STRING)(a1 + 56), (PUNICODE_STRING)(a2 + 128));
          if ( DeviceFriendlyName >= 0 )
            return 0;
        }
      }
    }
  }
  return (unsigned int)DeviceFriendlyName;
}
