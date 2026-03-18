/*
 * XREFs of ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400B7CE0
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DFA04 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall CInputDest::IsEqualByQ(CInputDest *this, const struct CInputDest *a2)
{
  CInputDest *v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  int *v6; // r10
  char v7; // r8

  CInputDest::GetThreadInfo(this);
  ThreadInfo = CInputDest::GetThreadInfo(v2);
  v7 = 0;
  if ( v5 )
  {
    if ( ThreadInfo )
      return *(_QWORD *)(v5 + 472) == *((_QWORD *)ThreadInfo + 59);
    return v7;
  }
  if ( ThreadInfo )
    return v7;
  return CInputDest::operator==(v6, v4);
}
