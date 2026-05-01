/*
 * XREFs of ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1801D3900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1804F7AF8 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositioner::BlockDismiss(TabletModePositioner *this, int *a2)
{
  TabletModePositioner *v2; // rdi
  __int64 v4; // r8
  int v5; // ebx

  v2 = (TabletModePositioner *)((char *)this - 120);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 120))
    || (v5 = 1,
        (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 128) + 80LL))(*(_QWORD *)(v4 + 128), 1LL))
    || TabletModePositioner::IsFullScreenViewVisible(v2) )
  {
    v5 = 0;
  }
  *a2 = v5;
  return 0LL;
}
