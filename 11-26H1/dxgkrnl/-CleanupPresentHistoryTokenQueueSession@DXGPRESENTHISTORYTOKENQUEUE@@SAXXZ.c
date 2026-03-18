/*
 * XREFs of ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454
 * Callers:
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x140330590 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x140417B78 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

void DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueSession(void)
{
  struct DXGGLOBAL *Global; // rsi
  int v1; // r14d
  DXGGLOBAL *v2; // rax
  struct DXGSESSIONDATA *SessionData; // rbp
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  bool v7; // zf
  _QWORD *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  DXGADAPTERLISTLOCK *v11[5]; // [rsp+20h] [rbp-28h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
    (DXGAUTOADAPTERLISTLOCK *)v11,
    (struct DXGGLOBAL *)((char *)Global + 680));
  v1 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess() == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    v2 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v2);
  }
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v11);
  v4 = (_QWORD **)((char *)Global + 808);
  v5 = *v4;
  while ( 1 )
  {
LABEL_5:
    v6 = 0LL;
    if ( v5 != v4 )
      v6 = v5;
    if ( !v6 || v1 )
      break;
    v7 = v5 == v4;
    v8 = v5;
    v5 = (_QWORD *)*v5;
    if ( v7 )
      v8 = 0LL;
    _m_prefetchw(v8 + 3);
    v9 = v8[3];
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v8 + 3, v9 + 1, v9);
      if ( v10 == v9 )
      {
        if ( v8[396] )
        {
          if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v8) )
            v1 = DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter((struct DXGADAPTER *)v8, 0LL);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
        goto LABEL_5;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v11);
}
