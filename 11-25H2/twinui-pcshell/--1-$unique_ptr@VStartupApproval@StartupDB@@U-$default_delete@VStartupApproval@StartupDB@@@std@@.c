/*
 * XREFs of ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x18055FEC0
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805608A0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     _StartupAppMonitor::IsStartupAppEnabled_::_1_::dtor$0 @ 0x1806CE84C (_StartupAppMonitor--IsStartupAppEnabled_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x180560E48 (-Uninitialize@StartupApproval@StartupDB@@QEAAXXZ.c)
 */

void __fastcall std::unique_ptr<StartupDB::StartupApproval>::~unique_ptr<StartupDB::StartupApproval>(
        StartupDB::StartupApproval **a1)
{
  StartupDB::StartupApproval *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StartupDB::StartupApproval::Uninitialize(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
