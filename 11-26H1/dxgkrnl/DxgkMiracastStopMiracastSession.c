/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x140089744
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1401B7A60 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140192584 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  int *v4; // rdi
  unsigned int v6; // ebx

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v4 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v6 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v4, (unsigned int)v4);
    return v6;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6923;
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
