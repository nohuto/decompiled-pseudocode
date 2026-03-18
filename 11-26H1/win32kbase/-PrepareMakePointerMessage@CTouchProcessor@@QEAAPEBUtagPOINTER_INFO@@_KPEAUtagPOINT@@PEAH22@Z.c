/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x140173CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        PERESOURCE *this,
        void *a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v12; // rdx
  struct CPointerMsgData *v13; // rdi
  __int64 v14; // rbx
  _QWORD *FrameById; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rsi
  PERESOURCE *v20[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v20, this + 4, a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)a2);
  v13 = NonConstMsgData;
  if ( NonConstMsgData
    && (FrameById = CTouchProcessor::FindFrameById((__int64)this, *((_DWORD *)NonConstMsgData + 7), 4),
        (v17 = FrameById) != 0LL) )
  {
    if ( *((_DWORD *)v13 + 8) >= *((_DWORD *)FrameById + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13650LL);
    v18 = v17[30];
    v19 = 480LL * *((unsigned int *)v13 + 8);
    v14 = v19 + v18 + 168;
    if ( *(_DWORD *)(v14 + 4) != *((unsigned __int16 *)v13 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13655LL);
    *a3 = *(struct tagPOINT *)(v19 + v18 + 148);
    *a4 = *(_DWORD *)(v19 + v18 + 144);
    *a5 = -__CFSHR__(*(_DWORD *)(v19 + v18), 18);
    *a6 = -__CFSHR__(*(_DWORD *)(v19 + v18), 19);
  }
  else
  {
    v14 = 0LL;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v20, v12);
  return (const struct tagPOINTER_INFO *)v14;
}
