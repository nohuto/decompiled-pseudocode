/*
 * XREFs of ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016C0FC
 * Callers:
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401D0484 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    v3 = *((_QWORD *)a1 + 59);
    if ( *(_DWORD *)(v3 + 40) )
      return;
    if ( (*(_DWORD *)(v3 + 412) & 0x20) != 0 )
      a2 &= ~2u;
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 8LL), ~a2);
}
