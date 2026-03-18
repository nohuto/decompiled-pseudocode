/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x14037AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14000822C (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(struct DXGADAPTER *const *a1)
{
  struct DXGADAPTER *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r8
  DXGADAPTER *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r9d
  int v11; // [rsp+40h] [rbp-61h] BYREF
  __int64 v12; // [rsp+48h] [rbp-59h]
  char v13; // [rsp+50h] [rbp-51h]
  _BYTE v14[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-41h] BYREF
  DXGADAPTER *v16; // [rsp+70h] [rbp-31h]
  _BYTE v17[16]; // [rsp+A0h] [rbp-1h] BYREF
  DXGADAPTER *v18; // [rsp+B0h] [rbp+Fh]
  char v19; // [rsp+B8h] [rbp+17h]
  __int64 v20; // [rsp+C0h] [rbp+1Fh]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2209;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2209);
  v2 = *a1;
  v3 = *((unsigned int *)a1 + 2);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, *a1, 0LL);
  if ( v19 != (_BYTE)v4 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v17, v4, v4);
    WdLogGlobalForLineNumber = 7648;
  }
  v5 = v18;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v18 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v18 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)"g");
      KeWaitForSingleObject((char *)v18 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v18, 0LL);
    v5 = v18;
  }
  v20 = 0LL;
  v19 = 1;
  if ( *((_DWORD *)v5 + 50) != 1 )
    goto LABEL_27;
  if ( v16 != v18 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v15, 0LL);
    if ( *((_DWORD *)v16 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v15);
LABEL_27:
      COREACCESS::Release((COREACCESS *)v17);
      goto LABEL_15;
    }
  }
  v14[1] = 1;
  DXGPUSHLOCK::AcquireExclusive((struct DXGADAPTER *)((char *)v2 + 4400));
  v8 = (_DWORD *)*((_QWORD *)v2 + 544);
  if ( (*((_DWORD *)v2 + 754) & 0x10) != 0 )
  {
    if ( v8[v3] != 1 )
      goto LABEL_14;
  }
  else if ( *v8 != 1 )
  {
LABEL_14:
    *((_QWORD *)v2 + 551) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 4400, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  v10 = v3;
  if ( (*((_DWORD *)v2 + 754) & 0x10) == 0 )
    v10 = -3;
  LOBYTE(v7) = 1;
  DXGADAPTER::DdiControlInterrupt2(v2, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v7, v10);
LABEL_15:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v2 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v2 + 2), v2);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v2 + 549) + 4 * v3), 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  }
}
