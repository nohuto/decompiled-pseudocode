/*
 * XREFs of ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140179C70
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140179CA8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140179D6C (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetTopmostEnum(struct tagWND *a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  struct tagWND *RootOwner; // rax

  v3 = a3;
  v4 = a2;
  RootOwner = a1;
  if ( !a2 && !a3 )
    RootOwner = GetRootOwner(a1);
  SetTopmost(RootOwner, v4, v3);
}
