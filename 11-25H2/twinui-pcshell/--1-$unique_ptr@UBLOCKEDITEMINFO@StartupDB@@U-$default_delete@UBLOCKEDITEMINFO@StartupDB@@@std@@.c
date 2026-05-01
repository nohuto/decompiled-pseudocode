/*
 * XREFs of ??1?$unique_ptr@UBLOCKEDITEMINFO@StartupDB@@U?$default_delete@UBLOCKEDITEMINFO@StartupDB@@@std@@@std@@QEAA@XZ @ 0x18055FE9C
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805608A0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<StartupDB::BLOCKEDITEMINFO>::~unique_ptr<StartupDB::BLOCKEDITEMINFO>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0xC);
}
