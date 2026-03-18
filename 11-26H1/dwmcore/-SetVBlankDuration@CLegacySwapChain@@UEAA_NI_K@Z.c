/*
 * XREFs of ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x1801CDA60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z @ 0x1801CDBA4 (-SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z.c)
 *     ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ @ 0x1801CDC2C (-GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ.c)
 *     McTemplateU0xqqxqx_EventWriteTransfer @ 0x1802999C0 (McTemplateU0xqqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacySwapChain::SetVBlankDuration(CLegacySwapChain *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int RequestedVBlankDurationHns; // eax
  __int64 (__fastcall *v8)(__int64, _QWORD); // r9
  __int64 v9; // r10
  int v10; // eax

  if ( (*(int (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 24LL))(this) < 0
    || *((_QWORD *)this + 19)
    || !RefreshRateInfo::SetVBlankDuration((CLegacySwapChain *)((char *)this + 104), a2, a3) )
  {
    return 0;
  }
  RequestedVBlankDurationHns = RefreshRateInfo::GetRequestedVBlankDurationHns((CLegacySwapChain *)((char *)this + 104));
  v10 = v8(v9, RequestedVBlankDurationHns);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x75u, 0LL);
    RefreshRateInfo::SetVBlankDuration((CLegacySwapChain *)((char *)this + 104), 0, 0LL);
    return 0;
  }
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
