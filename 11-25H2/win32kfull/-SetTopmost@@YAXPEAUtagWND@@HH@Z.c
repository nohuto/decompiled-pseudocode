/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140152770
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140152738 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140152770 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140152770 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *v6; // rbx
  struct tagWND *v7; // rcx
  struct tagWND *v8; // rdx
  bool i; // zf
  struct tagWND *v10; // rax

  SetOrClrWF(((*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL) >> 3) & 1) != a2, a1, 0x304u, 1);
  if ( !a3 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v6;
      if ( !v6 )
        break;
      do
      {
        v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
        if ( !v7 )
          break;
LABEL_10:
        v8 = (struct tagWND *)*((_QWORD *)v7 + 15);
        v10 = v7;
        for ( i = v7 == v8; !i; i = v8 == *((struct tagWND **)v7 + 13) )
        {
          v10 = v8;
          if ( !v8 )
            break;
          v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        }
      }
      while ( a1 != v10 );
      v6 = v7;
      if ( !v7 )
        return;
      SetTopmost(v7, a2, 0);
    }
    v7 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
    if ( v7 )
      goto LABEL_10;
  }
}
