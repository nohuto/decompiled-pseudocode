/*
 * XREFs of ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180321850
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

__int64 __fastcall FullScreenPositioner::TabletModeChanged(__int64 a1, int a2)
{
  __int64 v2; // rbp
  bool v4; // zf
  struct IApplicationView *v5; // rdx
  struct IApplicationView **v6; // rsi
  struct IApplicationView **i; // rbx

  v2 = a1 - 152;
  if ( *(_DWORD *)(a1 - 152 + 332) )
  {
    v4 = a2 == 1;
    v5 = *(struct IApplicationView **)(a1 + 72);
    *(_BYTE *)(a1 + 240) = v4;
    if ( v5 )
      FullScreenPositioner::PositionView(a1 - 152, v5, 0LL, 1u);
    v6 = *(struct IApplicationView ***)(a1 + 88);
    for ( i = *(struct IApplicationView ***)(a1 + 80); i != v6; ++i )
    {
      if ( !SHIsSameObject(*(struct IUnknown **)(a1 + 72), (struct IUnknown *)*i) )
        FullScreenPositioner::PositionView(v2, *i, 2LL, 1u);
    }
  }
  return 0LL;
}
