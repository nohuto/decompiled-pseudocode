/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x140073870 (-AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(char *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v4; // rdi
  __int64 v5; // r13
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp-108h] BYREF
  __int64 v12; // [rsp+58h] [rbp-100h]
  char v13; // [rsp+60h] [rbp-F8h]
  struct DXGPROCESS *Process; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-E8h]
  int v16; // [rsp+78h] [rbp-E0h]
  __int64 v17; // [rsp+7Ch] [rbp-DCh]
  int v18; // [rsp+84h] [rbp-D4h]
  _BYTE v19[8]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+90h] [rbp-C8h]
  char v21; // [rsp+98h] [rbp-C0h]
  void *v22[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-A8h]
  __int64 v24; // [rsp+C0h] [rbp-98h]
  __int128 v25; // [rsp+C8h] [rbp-90h] BYREF
  _BYTE v26[80]; // [rsp+E0h] [rbp-78h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2126);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    *(_OWORD *)v22 = 0LL;
    v23 = 0LL;
    RtlCopyFromUser(v22, Src, 0x20uLL);
    v15 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v16 = -1;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26, v22[0], 4096);
    LODWORD(v4) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v26, 1);
    if ( (_DWORD)v4 == -1073741790 )
    {
      DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission((DXGPROCESSMUTEXBYHANDLE *)v26);
      LODWORD(v4) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v26, 1);
    }
    if ( (int)v4 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11059;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find DxgProcess for process handle 0x%I64x",
        (__int64)v22[0],
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v26);
      v5 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v19, Current);
      if ( v21 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1919;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v20 + 88) + 32LL))(1LL);
      v21 = 1;
      v25 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v5 + 376))(v22[1], &v25) )
      {
        LODWORD(v15) = (DWORD2(v25) + (int)v25) / 2;
        HIDWORD(v15) = (HIDWORD(v25) + DWORD1(v25)) / 2;
        Global = DXGGLOBAL::GetGlobal();
        v7 = DXGGLOBAL::IterateAdaptersWithCallback(Global, QueryVidPnExclusiveOwnershipCallBack, &Process, 4LL);
        v4 = v7;
        if ( v7 < 0 )
        {
          if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 416) & 2) != 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 33LL, v4, 0LL, 0LL);
            WdLogGlobalForLineNumber = 11105;
          }
        }
        else
        {
          v24 = v17;
          RtlWriteULong64ToUser(Src + 20, (unsigned int)v17 | (unsigned __int64)((__int64)SHIDWORD(v17) << 32));
          RtlWriteULongToUser((_DWORD *)Src + 4, v16);
          RtlWriteULongToUser((_DWORD *)Src + 7, v18);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11073;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
          11073LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v19);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
    if ( v13 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v4;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11029;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 11029LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
