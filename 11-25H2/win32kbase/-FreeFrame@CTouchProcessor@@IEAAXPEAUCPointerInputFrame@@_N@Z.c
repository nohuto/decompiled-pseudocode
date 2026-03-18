/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14018742C
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x140038A90 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140038AE4 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x140107658 (-FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14010F174 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x140187624 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::FreeFrame(PERESOURCE *this, char *Buffer, char a3)
{
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  CTouchProcessor *v10; // rcx
  PVOID *v11; // rax
  PVOID *v12; // rcx
  PVOID **v13; // rdx
  int v14; // eax
  struct CPointerInfoNode *v15; // rdx
  struct CPointerQFrame *v16; // rdx
  PERESOURCE *v17[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v17,
    (struct CEResourceLock *)(this + 4),
    0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8255LL);
  if ( !a3 )
  {
    v6 = PtiCurrent();
    _InterlockedCompareExchange((volatile signed __int32 *)v6 + 132, 0, 0);
  }
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v6, Buffer) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8277LL);
  InputTraceLogging::Pointer::FreeFrame((const struct CPointerInputFrame *)Buffer, v7, v8, v9);
  if ( !a3 )
  {
    if ( *((_DWORD *)Buffer + 13) != *((_DWORD *)Buffer + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8282LL);
    v11 = (PVOID *)(Buffer + 8);
    v12 = (PVOID *)*((_QWORD *)Buffer + 1);
    if ( v12[1] != Buffer + 8 || (v13 = (PVOID **)*((_QWORD *)Buffer + 2), *v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    *((_QWORD *)Buffer + 2) = Buffer + 8;
    *v11 = v11;
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(
      (CTouchProcessor *)v12,
      (const struct CPointerInputFrame *)Buffer);
  }
  v14 = *((_DWORD *)Buffer + 57);
  if ( (v14 & 0x80u) == 0 )
  {
    if ( (v14 & 0x40) != 0 )
    {
      if ( !*((_DWORD *)this + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8303LL);
      --*((_DWORD *)this + 40);
    }
    else
    {
      if ( !*((_DWORD *)this + 41) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8308LL);
      --*((_DWORD *)this + 41);
    }
  }
  v15 = (struct CPointerInfoNode *)*((_QWORD *)Buffer + 30);
  if ( v15 )
    CTouchProcessor::FreePointerInfoList(v10, v15, *((_DWORD *)Buffer + 12));
  v16 = (struct CPointerQFrame *)*((_QWORD *)Buffer + 31);
  if ( v16 )
    CTouchProcessor::FreePointerQFrameList(v10, v16, *((_DWORD *)Buffer + 12));
  HMAssignmentUnlock((__int64 *)Buffer + 32);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)Buffer + 29));
  GreDeleteFastMutex(Buffer);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v17);
}
