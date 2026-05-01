/*
 * XREFs of ?QueryService@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805C2F00
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x1805C2C6C (--$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA-AU-$com_ptr@UIServiceProvider@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLauncher::SnapWindowProvider::QueryService(
        __int64 (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v8; // ebx
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( *(_OWORD *)a2 == __PAIR128__(0x36081BD12BA27DBBLL, 0x40AAF578E1380B20LL) )
    return (**(this - 1))((char *)this - 8, a3, a4);
  SnapLauncher::SnapWindowProvider::Site<IServiceProvider>((SnapLauncher::SnapWindowProvider *)(this - 1), &v9);
  if ( !v9 )
    return 2147500033LL;
  v8 = (*(__int64 (__fastcall **)(void *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v9 + 24LL))(
         v9,
         a2,
         a3,
         a4);
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
  return v8;
}
