/*
 * XREFs of ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall ClrFTrueVis(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  struct tagWND *i; // rbx

  v1 = *((_QWORD *)a1 + 5);
  v3 = *(_QWORD *)(v1 + 136);
  if ( v3 || (*(_BYTE *)(v1 + 17) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0, a1, 0x110u, 1);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    DecPaintCount((__int64)a1);
  }
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0 )
      ClrFTrueVis(i);
  }
}
