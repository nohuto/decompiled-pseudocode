/*
 * XREFs of ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x1801DC760
 * Callers:
 *     ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x1801E7D00 (-BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z @ 0x1801CDBA4 (-SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z.c)
 *     McTemplateU0xqqxqx_EventWriteTransfer @ 0x1802999C0 (McTemplateU0xqqxqx_EventWriteTransfer.c)
 */

char __fastcall CDDisplaySwapChain::SetVBlankDuration(CDDisplaySwapChain *this, unsigned int a2, unsigned __int64 a3)
{
  if ( *((_QWORD *)this + 19) || !RefreshRateInfo::SetVBlankDuration((CDDisplaySwapChain *)((char *)this + 104), a2, a3) )
    return 0;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0xqqxqx_EventWriteTransfer(
      *((_DWORD *)this + 15),
      (unsigned int)&SwapChain_DurationChanged,
      *((_DWORD *)this + 13),
      *((_DWORD *)this + 12),
      *((_DWORD *)this + 15),
      *((_QWORD *)this + 17),
      *((_DWORD *)this + 33),
      *((_QWORD *)this + 19));
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 30);
  return 1;
}
