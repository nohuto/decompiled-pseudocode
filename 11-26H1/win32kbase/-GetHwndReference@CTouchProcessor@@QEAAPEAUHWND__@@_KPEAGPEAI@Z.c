/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x14018F860
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        PERESOURCE *this,
        void *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  CTouchProcessor *v8; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct CPointerMsgData *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  PERESOURCE *v17[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v17, this + 4, a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v8, (__int64)a2);
  v11 = 0LL;
  v12 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v13 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
    v14 = (__int64)v13;
    if ( v13 )
    {
      if ( *((_DWORD *)v12 + 8) >= *((_DWORD *)v13 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13692LL);
      v15 = *(_QWORD *)(v14 + 240) + 480LL * *((unsigned int *)v12 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13694LL);
      if ( *(_DWORD *)(v15 + 172) != *((unsigned __int16 *)v12 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13697LL);
      *a3 = *((_WORD *)v12 + 8);
      *a4 = *(_DWORD *)(v14 + 48);
      v11 = *(_QWORD *)(v15 + 192);
      CTouchProcessor::UnreferenceFrame((__int64)this, v14);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v17, v10);
  return v11;
}
