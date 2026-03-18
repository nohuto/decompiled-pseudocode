/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140052AF4 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  SetOrClrWF(0, a1, 0x108u, 1);
  if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v5, v4) + 59) + 128LL)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
  {
    if ( !a2 )
      return;
  }
  else
  {
    SetOrClrWF(1, a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, a1, 0x101u, 1);
  }
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 133LL, a2, 0LL, 0, 0, 0LL, 1, 1);
}
