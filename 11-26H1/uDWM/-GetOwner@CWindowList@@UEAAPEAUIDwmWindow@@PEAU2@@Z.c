/*
 * XREFs of ?GetOwner@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@@Z @ 0x1800E15D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDwmWindow *__fastcall CWindowList::GetOwner(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *result; // rax

  result = *(struct IDwmWindow **)((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) + 600);
  if ( result )
    return (struct IDwmWindow *)*((_QWORD *)result + 3);
  return result;
}
