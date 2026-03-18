/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x14020272C
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1402024A8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1402249C0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1402031BC (DwmAsyncDxBindSwapChain.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagWND *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( v2 && v2 != a2 )
  {
    LODWORD(v10) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 62LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v7 = (void *)*((_QWORD *)this + 3);
    v10 = 0LL;
    if ( !v7 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v7, &v10) >= 0 )
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v6);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v8) >= 0;
    }
  }
  return v3;
}
