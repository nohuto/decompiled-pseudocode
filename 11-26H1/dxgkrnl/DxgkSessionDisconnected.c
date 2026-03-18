/*
 * XREFs of DxgkSessionDisconnected @ 0x1403B4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     OutputDuplRemoteSessionDisconnected @ 0x140194CA0 (OutputDuplRemoteSessionDisconnected.c)
 *     _lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_ @ 0x1401DB504 (_lambda_940d064d943a20fd52938170853ed62c_--_lambda_invoker_cdecl_.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403B4FCC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rsi
  int v4; // r15d
  DXGGLOBAL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // r14
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  bool v13; // zf
  __int64 v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  DXGADAPTERLISTLOCK *v18[2]; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  v19 = -1;
  v1 = a1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v1 )
  {
    v22 = -300000000LL;
    LOBYTE(v2) = 1;
    DxgkMiracastStopAllMiracastSessions(v2, &v22, 129LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
      (DXGAUTOADAPTERLISTLOCK *)v18,
      (struct DXGGLOBAL *)((char *)Global + 680));
    v4 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(PsInitialSystemProcess) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v5 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v5, v6, v7, v8);
    }
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v18);
    v10 = (_QWORD **)((char *)Global + 808);
    v11 = *v10;
    while ( 1 )
    {
LABEL_10:
      v12 = 0LL;
      if ( v11 != v10 )
        v12 = v11;
      if ( !v12 || v4 )
        break;
      v13 = v11 == v10;
      v14 = (__int64)v11;
      v11 = (_QWORD *)*v11;
      if ( v13 )
        v14 = 0LL;
      _m_prefetchw((const void *)(v14 + 24));
      v15 = *(_QWORD *)(v14 + 24);
      while ( v15 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), v15 + 1, v15);
        if ( v16 == v15 )
        {
          if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v14) )
            v4 = lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_(v14);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
          goto LABEL_10;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v18);
  }
  else
  {
    OutputDuplRemoteSessionDisconnected();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
}
