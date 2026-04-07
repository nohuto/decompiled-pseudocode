/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94
 * Callers:
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x180053F38 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180053FCC (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009311C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9DD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
