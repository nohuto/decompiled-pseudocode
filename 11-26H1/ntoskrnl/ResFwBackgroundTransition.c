/*
 * XREFs of ResFwBackgroundTransition @ 0x140C54F20
 * Callers:
 *     BgpFwLibraryEnable @ 0x140715E2C (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     ResFwpDestroyBackground @ 0x140C50EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C50F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C50FE4 (ResFwpPageOutBackground.c)
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
