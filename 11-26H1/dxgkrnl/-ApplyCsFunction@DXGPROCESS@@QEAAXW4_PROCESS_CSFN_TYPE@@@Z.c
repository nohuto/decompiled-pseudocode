/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E71C
 * Callers:
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E420 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x14004B590 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14037E8BC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

void __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // r14
  int v5; // ebp
  DXGGLOBAL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGSESSIONDATA *SessionData; // rsi
  _QWORD **v11; // r14
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  bool v14; // zf
  _QWORD *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  DXGADAPTERLISTLOCK *v21[2]; // [rsp+60h] [rbp-28h] BYREF

  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(a1 + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5945;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 5945LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v20 = 0;
    v18 = a1;
    v19 = a2;
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
      (DXGAUTOADAPTERLISTLOCK *)v21,
      (struct DXGGLOBAL *)((char *)Global + 680));
    v5 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(PsInitialSystemProcess) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v6 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v6, v7, v8, v9);
    }
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v21);
    v11 = (_QWORD **)((char *)Global + 808);
    v12 = *v11;
    while ( 1 )
    {
LABEL_7:
      v13 = 0LL;
      if ( v12 != v11 )
        v13 = v12;
      if ( !v13 || v5 )
        break;
      v14 = v12 == v11;
      v15 = v12;
      v12 = (_QWORD *)*v12;
      if ( v14 )
        v15 = 0LL;
      _m_prefetchw(v15 + 3);
      v16 = v15[3];
      while ( v16 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
        if ( v17 == v16 )
        {
          if ( v15[396] && (!SessionData || DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v15)) )
            v5 = ApplyCsFunctionAdapterCallback((struct DXGADAPTER *)v15, &v18);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
          goto LABEL_7;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v21);
  }
}
