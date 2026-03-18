/*
 * XREFs of ??1ScopeGuard@@QEAA@XZ @ 0x14015A5F4
 * Callers:
 *     InitCreateSharedSection @ 0x1402EA988 (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall ScopeGuard::~ScopeGuard(void (**this)(void))
{
  if ( *this )
    (*this)();
}
