/*
 * XREFs of ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x1403B51B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B5334 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall MonitorStateChangeThread(_QWORD *a1)
{
  __int64 v1; // r14
  int v3; // esi
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // r15
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  bool v13; // zf
  _QWORD *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  DXGADAPTERLISTLOCK *v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1[4];
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v17, (struct DXGADAPTERLISTLOCK *)(v1 + 680));
  v3 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(v4) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v6, v7, v8);
  }
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v17);
  v10 = (_QWORD **)(v1 + 808);
  v11 = *v10;
  while ( 1 )
  {
LABEL_5:
    v12 = 0LL;
    if ( v11 != v10 )
      v12 = v11;
    if ( !v12 || v3 )
      break;
    v13 = v11 == v10;
    v14 = v11;
    v11 = (_QWORD *)*v11;
    if ( v13 )
      v14 = 0LL;
    _m_prefetchw(v14 + 3);
    v15 = v14[3];
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
      if ( v16 == v15 )
      {
        if ( v14[396] )
        {
          if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v14) )
            v3 = MonitorStateChangeCallback((struct DXGADAPTER *)v14, a1);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
        goto LABEL_5;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v17);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1451;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to iterate adapters: 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(a1, 0x4B677844u);
}
