/*
 * XREFs of ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC
 * Callers:
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 */

void __fastcall ClrFTrueVis(struct tagWND *a1)
{
  __int64 v1; // rax
  struct tagWND *i; // rbx

  v1 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v1 + 136) || (*(_BYTE *)(v1 + 17) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn();
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    DecPaintCount(a1);
  }
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0 )
      ClrFTrueVis(i);
  }
}
