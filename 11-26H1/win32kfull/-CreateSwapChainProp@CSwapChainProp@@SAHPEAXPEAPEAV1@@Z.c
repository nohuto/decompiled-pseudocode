/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1402027FC
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1402024A8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ??$CreateWindowProp@VCSwapChainProp@@@CWindowProp@@SAJPEAPEAVCSwapChainProp@@@Z @ 0x1402028CC (--$CreateWindowProp@VCSwapChainProp@@@CWindowProp@@SAJPEAPEAVCSwapChainProp@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 0LL;
  *a2 = 0LL;
  if ( (int)CWindowProp::CreateWindowProp<CSwapChainProp>(&v7) >= 0 )
  {
    v6 = v7;
    if ( *(_QWORD *)(v7 + 24) )
    {
      LODWORD(v7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
    }
    *(_DWORD *)(v6 + 32) = 0;
    v3 = 1;
    *(_QWORD *)(v6 + 24) = a1;
    *a2 = (struct CSwapChainProp *)v6;
  }
  return v3;
}
