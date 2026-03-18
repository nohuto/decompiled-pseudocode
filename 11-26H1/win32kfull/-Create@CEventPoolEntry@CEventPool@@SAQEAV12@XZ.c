/*
 * XREFs of ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1401C15D4
 * Callers:
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x1400FD2F4 (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1401C17A0 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1402920F0 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 */

struct CEventPool::CEventPoolEntry *CEventPool::CEventPoolEntry::Create(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  struct CManualResetEvent *v3; // rax
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = EngAllocMem(1u, 0x10u, 0x676D6466u);
  v1 = v0;
  if ( !v0 )
    return 0LL;
  v4 = v0;
  v3 = CManualResetEvent::Create();
  v1[1] = v3;
  if ( !v3 )
  {
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v4);
    return 0LL;
  }
  return (struct CEventPool::CEventPoolEntry *)v1;
}
