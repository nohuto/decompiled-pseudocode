/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x140417B78
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454 (-CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A5C48 (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(struct DXGADAPTER *a1, void *a2)
{
  unsigned __int64 v3; // rdx
  struct _KTHREAD **v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  struct DXGADAPTER *v8; // [rsp+30h] [rbp-48h]
  char v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-38h]

  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v7 = -1LL;
  }
  COREACCESS::AcquireShared((COREACCESS *)v6, 0LL);
  v4 = (struct _KTHREAD **)*((_QWORD *)a1 + 396);
  if ( v4 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v4);
  COREACCESS::~COREACCESS((COREACCESS *)v6, v3);
  return 0LL;
}
