/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1401632E4
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsNonImmersiveBand @ 0x140163FA0 (IsNonImmersiveBand.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402CA90C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall _GhostOwnerWindowAndOwnees(struct tagWND **a1)
{
  struct tagWND *i; // rbx
  struct tagWND *j; // rax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 && ShouldProcessHungWindow((struct tagWND *)a1) )
    _GhostWindow((struct tagWND *)a1);
  if ( (unsigned int)IsNonImmersiveBand(a1) )
  {
    for ( i = a1[12]; i; i = (struct tagWND *)*((_QWORD *)i + 12) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
      {
        for ( j = (struct tagWND *)*((_QWORD *)i + 15); j; j = (struct tagWND *)*((_QWORD *)j + 15) )
        {
          if ( j == (struct tagWND *)a1 )
          {
            if ( ShouldProcessHungWindow(i) == i )
              _GhostWindow(i);
            break;
          }
        }
      }
    }
  }
}
