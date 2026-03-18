/*
 * XREFs of ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x140208DA8
 * Callers:
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 * Callees:
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4DD4 (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall AddWFFULLSCREEN(struct tagWND *a1)
{
  struct tagWND *v1; // rdx
  char v2; // al

  v1 = (struct tagWND *)*((_QWORD *)a1 + 5);
  v2 = *((_BYTE *)v1 + 20);
  if ( (v2 & 0x40) == 0 )
  {
    *((_BYTE *)v1 + 20) = v2 | 0x40;
    AdvancedWindowPos::MarkWindowAsNotArranged(a1, v1);
  }
}
