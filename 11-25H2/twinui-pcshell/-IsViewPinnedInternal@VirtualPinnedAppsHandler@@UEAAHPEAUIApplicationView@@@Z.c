/*
 * XREFs of ?IsViewPinnedInternal@VirtualPinnedAppsHandler@@UEAAHPEAUIApplicationView@@@Z @ 0x1805402F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsViewPinnedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  return (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           0LL);
}
