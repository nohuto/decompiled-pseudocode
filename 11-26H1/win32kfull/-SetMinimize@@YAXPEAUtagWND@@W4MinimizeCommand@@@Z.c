/*
 * XREFs of ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall SetMinimize(struct tagWND *a1, int a2)
{
  char v3; // di

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10;
  if ( a2 == 1 )
  {
    if ( v3 )
      DecVisWindows(a1);
    SetOrClrWF(1, a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, a1, 0xF20u, 1);
    if ( v3 )
      IncVisWindows(a1);
  }
  tagWND::ComputeDominantState(a1);
}
