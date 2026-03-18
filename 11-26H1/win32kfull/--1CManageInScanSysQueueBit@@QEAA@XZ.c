/*
 * XREFs of ??1CManageInScanSysQueueBit@@QEAA@XZ @ 0x14019C584
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall CManageInScanSysQueueBit::~CManageInScanSysQueueBit(CManageInScanSysQueueBit *this)
{
  __int64 v1; // rbx
  __int64 *CurrentThreadWin32Thread; // rax

  v1 = 0LL;
  if ( *(_BYTE *)this )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
    if ( CurrentThreadWin32Thread )
      v1 = *CurrentThreadWin32Thread;
    *(_QWORD *)(v1 + 1360) &= ~0x1000000000uLL;
  }
}
