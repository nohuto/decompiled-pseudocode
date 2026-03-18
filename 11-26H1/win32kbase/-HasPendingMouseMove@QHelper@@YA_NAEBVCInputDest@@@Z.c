/*
 * XREFs of ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1400CCBF4
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1400CDFE8 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  char v2; // r8
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v4; // rax

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    ThreadInfo = CInputDest::GetThreadInfo(this);
    if ( ThreadInfo )
    {
      v4 = *((_QWORD *)ThreadInfo + 58);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 436) & 0x20) != 0 )
          return 1;
      }
    }
  }
  return v2;
}
