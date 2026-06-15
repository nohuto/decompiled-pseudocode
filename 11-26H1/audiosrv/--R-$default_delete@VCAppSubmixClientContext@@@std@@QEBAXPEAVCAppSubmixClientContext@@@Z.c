/*
 * XREFs of ??R?$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z @ 0x1800BB7E8
 * Callers:
 *     ??$?4U?$default_delete@VCAppSubmixClientContext@@@std@@$0A@@?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BA8FC (--$-4U-$default_delete@VCAppSubmixClientContext@@@std@@$0A@@-$unique_ptr@VCAppSubmixClientContex.c)
 *     ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800BB678 (--1-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 * Callees:
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18007FE78 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<CAppSubmixClientContext>::operator()(__int64 a1, CAppSubmixClientContext *a2)
{
  if ( a2 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x70);
  }
}
