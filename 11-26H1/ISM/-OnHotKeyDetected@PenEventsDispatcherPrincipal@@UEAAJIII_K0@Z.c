/*
 * XREFs of ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K0@Z @ 0x180199B60
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199AE4 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199D7C (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199DF4 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199E64 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199ED4 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::OnHotKeyDetected(PenEventsDispatcherPrincipal *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 != 1 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x27B,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevents"
                   "dispatcherprincipal.cpp",
              (const char *)0x8000FFFFLL,
              v6);
          PenEventsDispatcherPrincipal::OnUndock((PenEventsDispatcherPrincipal *)((char *)this - 56));
        }
        else
        {
          PenEventsDispatcherPrincipal::OnDock((PenEventsDispatcherPrincipal *)((char *)this - 56));
        }
      }
      else
      {
        PenEventsDispatcherPrincipal::OnTailButtonLongPress((PenEventsDispatcherPrincipal *)((char *)this - 56));
      }
    }
    else
    {
      PenEventsDispatcherPrincipal::OnTailButtonDoubleClick((PenEventsDispatcherPrincipal *)((char *)this - 56));
    }
  }
  else
  {
    PenEventsDispatcherPrincipal::OnTailButtonClick((PenEventsDispatcherPrincipal *)((char *)this - 56));
  }
  return 0LL;
}
