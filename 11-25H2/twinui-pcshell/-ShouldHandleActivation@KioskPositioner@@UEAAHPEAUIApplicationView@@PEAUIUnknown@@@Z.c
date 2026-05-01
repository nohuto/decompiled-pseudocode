/*
 * XREFs of ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801FE4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE7C0 (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::ShouldHandleActivation(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        const char *a4)
{
  KioskPositioner *v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (KioskPositioner *)((char *)this - 112);
  v5 = 0;
  if ( *((_BYTE *)v4 + 632) )
  {
    try
    {
      if ( *((_BYTE *)v4 + 633) || KioskPositioner::IsPrimaryAppView(v4, a2) )
        v5 = 1;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x28B,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        a4);
      return 0LL;
    }
  }
  return v5;
}
