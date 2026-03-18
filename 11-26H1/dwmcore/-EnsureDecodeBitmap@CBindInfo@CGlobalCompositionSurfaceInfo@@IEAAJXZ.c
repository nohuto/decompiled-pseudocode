/*
 * XREFs of ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801290B4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18012976C (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180129114 (-Create@CDecodeBitmap@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureDecodeBitmap(volatile signed __int32 **this)
{
  unsigned int v1; // ebx
  struct CDecodeBitmap **v2; // rdi
  int v3; // eax

  v1 = 0;
  v2 = (struct CDecodeBitmap **)(this + 1);
  if ( !this[1] )
  {
    wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset(this + 1);
    v3 = CDecodeBitmap::Create(v2);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x77Cu, 0LL);
  }
  return v1;
}
