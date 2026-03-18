/*
 * XREFs of RIMOnDestroyMonitor @ 0x1400F6568
 * Callers:
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 * Callees:
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401D7834 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E6D70 (RawInputManagerObjectCreateKernelHandle.c)
 */

int __fastcall RIMOnDestroyMonitor(struct tagMONITOR *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 16840) + 16LL);
  if ( v4 )
  {
    LODWORD(UserSessionState) = RawInputManagerObjectCreateKernelHandle(v4, 3LL, 0LL);
    if ( (int)UserSessionState >= 0 )
    {
      rimOnCheckPointerDeviceMonitors(0LL, a1);
      LODWORD(UserSessionState) = ZwClose(0LL);
    }
  }
  return UserSessionState;
}
