/*
 * XREFs of ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1801C98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801C99B8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1805192D8 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositioner::BlockDismiss(TabletModePositioner *this, int *a2)
{
  TabletModePositioner *v3; // rdi
  __int64 v4; // rdx
  int v5; // ebx

  v3 = (TabletModePositioner *)((char *)this - 120);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 120))
    || (v5 = 1,
        (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 128) + 80LL))(*(_QWORD *)(v4 + 128), 1LL))
    || TabletModePositioner::IsFullScreenViewVisible(v3) )
  {
    v5 = 0;
  }
  *a2 = v5;
  return 0LL;
}
