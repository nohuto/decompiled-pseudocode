/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ @ 0x1800BB698
 * Callers:
 *     APPLICATIONSUBMIX_rundown @ 0x1800BD110 (APPLICATIONSUBMIX_rundown.c)
 *     asm_ApplicationSubmixDestroy @ 0x1800BD1B0 (asm_ApplicationSubmixDestroy.c)
 *     asm_GetApplicationSubmixFromId @ 0x1800BDA00 (asm_GetApplicationSubmixFromId.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<CAppSubmixContext>::~unique_ptr<CAppSubmixContext>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*a1);
    operator delete(v1, (const struct std::nothrow_t *)8);
  }
}
