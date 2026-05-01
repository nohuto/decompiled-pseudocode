/*
 * XREFs of ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180324F70
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803242D0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

__int64 __fastcall FullScreenPositioner::TabletModeChanged(__int64 a1, int a2)
{
  bool v3; // zf
  __int64 v4; // rsi
  __int64 (__fastcall ***v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  __int64 (__fastcall ****v6)(ApplicationViewHelpers *, GUID *, __int64 *); // rbp
  __int64 (__fastcall ****i)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi

  if ( *(_DWORD *)(a1 + 180) )
  {
    v3 = a2 == 1;
    v4 = a1 - 152;
    v5 = *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 72);
    *(_BYTE *)(a1 + 240) = v3;
    if ( v5 )
      FullScreenPositioner::PositionView(a1 - 152, v5, 0LL, 1u);
    v6 = *(__int64 (__fastcall *****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 88);
    for ( i = *(__int64 (__fastcall *****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 80); i != v6; ++i )
    {
      if ( !SHIsSameObject(*(struct IUnknown **)(a1 + 72), (struct IUnknown *)*i) )
        FullScreenPositioner::PositionView(v4, *i, 2LL, 1u);
    }
  }
  return 0LL;
}
