/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x140060174
 * Callers:
 *     rimCreateDev @ 0x14005FF5C (rimCreateDev.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS v5; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 2 )
  {
    v5 = ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, Handle);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 649LL);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v5;
}
