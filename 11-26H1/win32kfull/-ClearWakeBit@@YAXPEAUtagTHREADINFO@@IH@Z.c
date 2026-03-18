/*
 * XREFs of ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14019AE58
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    v3 = *((_QWORD *)a1 + 58);
    if ( *(_DWORD *)(v3 + 40) )
      return;
    if ( (*(_DWORD *)(v3 + 436) & 0x20) != 0 )
      a2 &= ~2u;
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 8LL), ~a2);
}
