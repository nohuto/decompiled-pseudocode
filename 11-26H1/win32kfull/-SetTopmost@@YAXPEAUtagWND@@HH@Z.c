/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140179CA8
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140179C70 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140179CA8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140179CA8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *i; // rbx
  struct tagWND *v7; // rcx
  bool j; // zf
  struct tagWND *v9; // rax

  SetOrClrWF(((*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL) >> 3) & 1) != a2, a1, 0x304u, 1);
  if ( !a3 )
  {
    for ( i = 0LL; i; SetTopmost(i, a2, 0) )
    {
      do
      {
        i = (struct tagWND *)*((_QWORD *)i + 11);
        if ( !i )
          break;
LABEL_10:
        v7 = (struct tagWND *)*((_QWORD *)i + 15);
        v9 = i;
        for ( j = i == v7; !j; j = v7 == *((struct tagWND **)i + 13) )
        {
          v9 = v7;
          if ( !v7 )
            break;
          v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
        }
      }
      while ( a1 != v9 );
      if ( !i )
        return;
    }
    i = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
    if ( i )
      goto LABEL_10;
  }
}
