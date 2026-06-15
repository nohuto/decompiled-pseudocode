/*
 * XREFs of ??R?$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z @ 0x18007B64C
 * Callers:
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18006784C (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     ??$?4U?$default_delete@VCAppSubmixClient@@@std@@$0A@@?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B03B0 (--$-4U-$default_delete@VCAppSubmixClient@@@std@@$0A@@-$unique_ptr@VCAppSubmixClient@@U-$default_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<CAppSubmixClient>::operator()(__int64 a1, __int64 *a2)
{
  if ( a2 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x18);
  }
}
