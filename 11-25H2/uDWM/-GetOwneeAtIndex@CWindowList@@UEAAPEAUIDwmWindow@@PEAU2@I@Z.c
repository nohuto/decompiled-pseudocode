/*
 * XREFs of ?GetOwneeAtIndex@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@I@Z @ 0x1800E5750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDwmWindow *__fastcall CWindowList::GetOwneeAtIndex(CWindowList *this, struct IDwmWindow *a2, unsigned int a3)
{
  return *(struct IDwmWindow **)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2)
                                                       + 608)
                                           + 8LL * a3)
                               + 24LL);
}
