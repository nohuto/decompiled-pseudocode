/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1401FAEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x14007F720 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018DFF4 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(void *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGGLOBAL *Global; // rax
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v8; // r8d
  struct DXGPROTECTEDSESSION *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rcx
  _BYTE v14[16]; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16; // [rsp+68h] [rbp-30h]
  char v17; // [rsp+70h] [rbp-28h]
  unsigned int v18; // [rsp+A8h] [rbp+10h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 402;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      402LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2149);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 411;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_21:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v18 = 0;
  RtlCopyFromUser(&v18, Src, 4uLL);
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v14, Global);
  v5 = v18;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( !(v6 < *((_DWORD *)Current + 74)
      && (v8 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0) )
    goto LABEL_15;
  v10 = *((_QWORD *)Current + 35);
  if ( (*(_BYTE *)(v10 + 16LL * v6 + 8) & 0x1F) != 0xE )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_15:
    v9 = 0LL;
    goto LABEL_19;
  }
  v9 = *(struct DXGPROTECTEDSESSION **)(v10 + 16LL * v6);
LABEL_19:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, v18, -1073741811LL);
    WdLogGlobalForLineNumber = 440;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    goto LABEL_21;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v9, v18);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return 0LL;
}
