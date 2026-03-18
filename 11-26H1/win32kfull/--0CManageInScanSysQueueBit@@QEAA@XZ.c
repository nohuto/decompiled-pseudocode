/*
 * XREFs of ??0CManageInScanSysQueueBit@@QEAA@XZ @ 0x14018A118
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

CManageInScanSysQueueBit *__fastcall CManageInScanSysQueueBit::CManageInScanSysQueueBit(CManageInScanSysQueueBit *this)
{
  __int64 v1; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax

  v1 = 0LL;
  *(_BYTE *)this = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  if ( (*(_QWORD *)(v5 + 1360) & 0x1000000000LL) == 0 )
  {
    *(_BYTE *)this = 1;
    v6 = (__int64 *)PsGetCurrentThreadWin32Thread(v4);
    if ( v6 )
      v1 = *v6;
    *(_QWORD *)(v1 + 1360) |= 0x1000000000uLL;
  }
  return this;
}
