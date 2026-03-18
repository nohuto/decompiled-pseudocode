/*
 * XREFs of ??0PDOBaseEnum@@QEAA@XZ @ 0x1403B3E1C
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1403B3D88 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?CountPDOs@PDOBaseEnum@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C183C (-CountPDOs@PDOBaseEnum@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?EnumPDOs@PDOBaseEnum@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B57E0 (-EnumPDOs@PDOBaseEnum@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

PDOBaseEnum *__fastcall PDOBaseEnum::PDOBaseEnum(PDOBaseEnum *this)
{
  struct DXGGLOBAL *Global; // r14
  int v3; // r15d
  __int64 v4; // rcx
  DXGGLOBAL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // rbp
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  bool v13; // zf
  _QWORD *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  struct DXGGLOBAL *v19; // r14
  int v20; // r15d
  DXGGLOBAL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGSESSIONDATA *v25; // rbp
  _QWORD **v26; // r14
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  DXGADAPTERLISTLOCK *v33[2]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
    (DXGAUTOADAPTERLISTLOCK *)v33,
    (struct DXGGLOBAL *)((char *)Global + 680));
  v3 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(v4) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    v5 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v5, v6, v7, v8);
  }
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v33);
  v10 = (_QWORD **)((char *)Global + 808);
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
        if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v14) )
          v3 = PDOBaseEnum::CountPDOs((struct DXGADAPTER *)v14, this);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
        goto LABEL_5;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v33);
  v17 = 8LL * *(unsigned int *)this;
  if ( !is_mul_ok(*(unsigned int *)this, 8uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x4B677844u, 256LL);
  *((_QWORD *)this + 1) = v18;
  if ( v18 )
  {
    v19 = DXGGLOBAL::GetGlobal();
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
      (DXGAUTOADAPTERLISTLOCK *)v33,
      (struct DXGGLOBAL *)((char *)v19 + 680));
    v20 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(PsInitialSystemProcess) == PsInitialSystemProcess )
    {
      v25 = 0LL;
    }
    else
    {
      v21 = DXGGLOBAL::GetGlobal();
      v25 = DXGGLOBAL::GetSessionData(v21, v22, v23, v24);
    }
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v33);
    v26 = (_QWORD **)((char *)v19 + 808);
    v27 = *v26;
    while ( 1 )
    {
LABEL_25:
      v28 = 0LL;
      if ( v27 != v26 )
        v28 = v27;
      if ( !v28 || v20 )
        break;
      v13 = v27 == v26;
      v29 = v27;
      v27 = (_QWORD *)*v27;
      if ( v13 )
        v29 = 0LL;
      _m_prefetchw(v29 + 3);
      v30 = v29[3];
      while ( v30 )
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange64(v29 + 3, v30 + 1, v30);
        if ( v31 == v30 )
        {
          if ( DxgkpCanEnumerateAdapter(v25, (struct DXGADAPTER *)v29) )
            v20 = PDOBaseEnum::EnumPDOs((struct DXGADAPTER *)v29, this);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v29);
          goto LABEL_25;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v33);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate PDOBase array",
      263LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
