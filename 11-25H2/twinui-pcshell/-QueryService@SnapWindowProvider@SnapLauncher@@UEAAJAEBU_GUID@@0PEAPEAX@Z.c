/*
 * XREFs of ?QueryService@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18059EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x18059E994 (--$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA-AU-$com_ptr@UIServiceProvider@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLauncher::SnapWindowProvider::QueryService(
        SnapLauncher::SnapWindowProvider *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  SnapLauncher::SnapWindowProvider *v7; // rcx
  unsigned int v9; // ebx
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = (SnapLauncher::SnapWindowProvider *)((char *)this - 8);
  if ( *(_OWORD *)a2 == __PAIR128__(0x36081BD12BA27DBBLL, 0x40AAF578E1380B20LL) )
    return (**(__int64 (__fastcall ***)(SnapLauncher::SnapWindowProvider *, const struct _GUID *, void **))v7)(
             v7,
             a3,
             a4);
  SnapLauncher::SnapWindowProvider::Site<IServiceProvider>(v7, &v10);
  if ( !v10 )
    return 2147500033LL;
  v9 = (*(__int64 (__fastcall **)(void *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v10 + 24LL))(
         v10,
         a2,
         a3,
         a4);
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
  return v9;
}
