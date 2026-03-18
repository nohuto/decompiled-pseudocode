/*
 * XREFs of RIMOnDestroyMonitor @ 0x1401183E8
 * Callers:
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401184A0 (RawInputManagerObjectCreateKernelHandle.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401FEA78 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

int __fastcall RIMOnDestroyMonitor(struct tagMONITOR *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rcx

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 16832) + 16LL);
  if ( v5 )
  {
    LODWORD(UserSessionState) = RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL);
    if ( (int)UserSessionState >= 0 )
    {
      rimOnCheckPointerDeviceMonitors(0LL, a1);
      LODWORD(UserSessionState) = ZwClose(0LL);
    }
  }
  return UserSessionState;
}
