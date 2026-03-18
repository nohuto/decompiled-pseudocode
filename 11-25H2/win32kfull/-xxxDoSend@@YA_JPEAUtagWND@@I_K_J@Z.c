/*
 * XREFs of ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1400C2940
 * Callers:
 *     xxxGetWindowText @ 0x1400C28CC (xxxGetWindowText.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxDoSend(struct tagWND *a1, __int64 a2, HWND a3, struct tagDRAWITEMSTRUCT *a4)
{
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *((_QWORD *)PtiCurrent((__int64)a1, a2) + 58) )
    return xxxSendMessage(a1, 0xDu);
  else
    return xxxDefWindowProc(a1, 0xDu, a3, a4);
}
