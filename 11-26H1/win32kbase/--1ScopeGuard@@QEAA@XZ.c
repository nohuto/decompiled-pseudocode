/*
 * XREFs of ??1ScopeGuard@@QEAA@XZ @ 0x140199E04
 * Callers:
 *     InitCreateSharedSection @ 0x1402F4E7C (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall ScopeGuard::~ScopeGuard(void (**this)(void))
{
  if ( *this )
    (*this)();
}
