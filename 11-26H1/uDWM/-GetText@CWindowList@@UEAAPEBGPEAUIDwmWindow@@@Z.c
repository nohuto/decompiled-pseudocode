/*
 * XREFs of ?GetText@CWindowList@@UEAAPEBGPEAUIDwmWindow@@@Z @ 0x1800E1600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const unsigned __int16 *__fastcall CWindowList::GetText(CWindowList *this, struct IDwmWindow *a2)
{
  return *(const unsigned __int16 **)((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) + 16);
}
