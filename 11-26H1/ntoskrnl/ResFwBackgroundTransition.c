/*
 * XREFs of ResFwBackgroundTransition @ 0x140C5AF20
 * Callers:
 *     BgpFwLibraryEnable @ 0x14071AB1C (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     ResFwpDestroyBackground @ 0x140C56EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C56F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C56FE4 (ResFwpPageOutBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
        ResFwpDestroyBackground();
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
