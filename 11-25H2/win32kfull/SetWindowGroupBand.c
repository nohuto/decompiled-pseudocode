/*
 * XREFs of SetWindowGroupBand @ 0x140152834
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14005E1E4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14005E600 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1402180E4 (xxxUpdateShadowZorder.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x140152950 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1401529C8 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     GetBandOrdinal @ 0x140152AF0 (GetBandOrdinal.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140152B10 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 */

__int64 __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  unsigned int v5; // ebp
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  struct tagWND *v9; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  for ( i = RootOwner; ; i = (struct tagWND *)*((_QWORD *)i + 12) )
  {
    v7 = *((_QWORD *)i + 12);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = *((_QWORD *)i + 5);
    if ( *(_DWORD *)(result + 236) != v5 )
      break;
    v9 = (struct tagWND *)*((_QWORD *)i + 11);
    if ( i != RootOwner )
    {
      result = HasOwnedWindowInTree(i, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow((__int64 *)i, *((__int64 **)i + 13));
    if ( a2 != 1 )
    {
      SetOrClrWF(0, i, 0x304u, 1);
      SetOrClrWF(1, i, 0x808u, 1);
    }
    SetWindowTreeBand(i, a2);
    result = LinkWindow(i);
    i = v9;
  }
  while ( v9 );
  return result;
}
