/*
 * XREFs of ??0CManageInScanSysQueueBit@@QEAA@XZ @ 0x14015ED18
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

CManageInScanSysQueueBit *__fastcall CManageInScanSysQueueBit::CManageInScanSysQueueBit(
        CManageInScanSysQueueBit *this,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rax

  v2 = 0LL;
  *(_BYTE *)this = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  if ( (*(_QWORD *)(v7 + 1360) & 0x1000000000LL) == 0 )
  {
    *(_BYTE *)this = 1;
    v8 = (__int64 *)W32GetCurrentThreadNonPaged(v6, v5);
    if ( v8 )
      v2 = *v8;
    *(_QWORD *)(v2 + 1360) |= 0x1000000000uLL;
  }
  return this;
}
