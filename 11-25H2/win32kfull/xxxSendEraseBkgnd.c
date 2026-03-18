/*
 * XREFs of xxxSendEraseBkgnd @ 0x1400531F0
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rbx
  struct tagTHREADINFO *v6; // r14
  unsigned int v7; // ebp

  if ( !a3 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  v6 = PtiCurrent((__int64)a1, a2);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *((_QWORD *)v6 + 58) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v7 = xxxSendMessage(a1, 0x14u);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *((_QWORD *)v6 + 58) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v7 )
    SetOrClrWF(1, a1, 0x104u, 1);
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v7;
}
