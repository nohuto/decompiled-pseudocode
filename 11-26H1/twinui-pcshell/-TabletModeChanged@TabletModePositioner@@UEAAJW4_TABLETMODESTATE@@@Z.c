/*
 * XREFs of ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18051DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180518E94 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051A788 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::TabletModeChanged(__int64 a1, int a2)
{
  IUnknown **v2; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (IUnknown **)(a1 - 144);
  if ( *(_DWORD *)(a1 - 144 + 232) != 1 )
    return 2147947423LL;
  if ( a2 != *(_DWORD *)(a1 + 92) )
  {
    TabletModePositioner::SetTabletMode(a1 - 144, a2);
    if ( *(_DWORD *)(a1 + 92) == 1 )
    {
      v5 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry(v2);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49C,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v5);
      *(_BYTE *)(a1 + 96) = 1;
    }
  }
  return 0LL;
}
