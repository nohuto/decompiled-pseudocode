/*
 * XREFs of ?TryGetLastActiveVisibleView@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18030A130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::TryGetLastActiveVisibleView(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationView **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 18) + 80LL))(
           *((_QWORD *)this + 18),
           a2);
}
