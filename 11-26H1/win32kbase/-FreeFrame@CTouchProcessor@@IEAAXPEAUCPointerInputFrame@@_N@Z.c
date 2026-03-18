/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14004CD5C
 * Callers:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x14004D014 (-FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x14004D098 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140066E08 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(PERESOURCE *this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char *v12; // rbp
  unsigned int v13; // eax
  char *v14; // rbx
  __int64 v15; // r14
  char *v16; // rbx
  unsigned int v17; // eax
  CInputDest *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *v24; // rax
  struct CPointerInputFrame **v25; // rcx
  struct CPointerInputFrame *v26; // rdx
  PERESOURCE *v27[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v27, this + 4, 0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8238LL);
  if ( !a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v7, v6) + 130, 0, 0);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8006LL);
  if ( *((_DWORD *)a2 + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8260LL);
  InputTraceLogging::Pointer::FreeFrame(a2);
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8265LL);
    v24 = (_QWORD *)((char *)a2 + 8);
    v25 = (struct CPointerInputFrame **)*((_QWORD *)a2 + 1);
    if ( v25[1] != (struct CPointerInputFrame *)((char *)a2 + 8)
      || (v26 = (struct CPointerInputFrame *)*((_QWORD *)a2 + 2), *(_QWORD **)v26 != v24) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v26 = v25;
    v25[1] = v26;
    *((_QWORD *)a2 + 2) = (char *)a2 + 8;
    *v24 = v24;
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList((CTouchProcessor *)v25, a2);
  }
  v11 = *((_DWORD *)a2 + 57);
  if ( (v11 & 0x80u) == 0 )
  {
    if ( (v11 & 0x40) != 0 )
    {
      if ( !*((_DWORD *)this + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8286LL);
      --*((_DWORD *)this + 40);
    }
    else
    {
      if ( !*((_DWORD *)this + 41) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8291LL);
      --*((_DWORD *)this + 41);
    }
  }
  v12 = (char *)*((_QWORD *)a2 + 30);
  if ( v12 )
  {
    v13 = *((_DWORD *)a2 + 12);
    if ( v13 )
    {
      v14 = v12 + 24;
      v15 = v13;
      do
      {
        CInputDest::~CInputDest((CInputDest *)(v14 + 328));
        CInputDest::~CInputDest((CInputDest *)v14);
        v14 += 480;
        --v15;
      }
      while ( v15 );
    }
    GreDeleteFastMutex(v12, v8, v9, v10);
  }
  v16 = (char *)*((_QWORD *)a2 + 31);
  if ( v16 )
  {
    v17 = *((_DWORD *)a2 + 12);
    if ( v17 )
    {
      v18 = (CInputDest *)(v16 + 16);
      v19 = v17;
      do
      {
        CInputDest::~CInputDest(v18);
        v18 = (CInputDest *)((char *)v18 + 160);
        --v19;
      }
      while ( v19 );
    }
    GreDeleteFastMutex(v16, v8, v9, v10);
  }
  HMAssignmentUnlock((char *)a2 + 256, v8);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 29));
  GreDeleteFastMutex((char *)a2, v20, v21, v22);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v27, v23);
}
