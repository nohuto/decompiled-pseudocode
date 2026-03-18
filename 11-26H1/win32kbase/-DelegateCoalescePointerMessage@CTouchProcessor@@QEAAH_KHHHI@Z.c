/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x140069420
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     McTemplateK0hhq_EtwWriteTransfer @ 0x1400653D8 (McTemplateK0hhq_EtwWriteTransfer.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x140067D60 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A91C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x14006D858 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        PERESOURCE *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  struct CPointerMsgData *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbp
  CTouchProcessor *v18; // rcx
  CTouchProcessor *v19; // rcx
  unsigned int v20; // r14d
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  PERESOURCE *v26[8]; // [rsp+30h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v26, this + 4, a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)a2);
  v13 = 0;
  v14 = NonConstMsgData;
  if ( !NonConstMsgData )
    goto LABEL_19;
  v15 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  v16 = (__int64)v15;
  if ( !v15 )
    goto LABEL_19;
  if ( *((_DWORD *)v14 + 8) >= *((_DWORD *)v15 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5933LL);
  v17 = *(_QWORD *)(v16 + 240) + 480LL * *((unsigned int *)v14 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v17) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5935LL);
  if ( *(_WORD *)(v17 + 172) != *((_WORD *)v14 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5936LL);
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_11;
    goto LABEL_17;
  }
  if ( !a4 )
  {
LABEL_17:
    if ( a3 )
      goto LABEL_11;
    CTouchProcessor::UnreferenceFrame((__int64)this, v16);
LABEL_19:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v26, v12);
    return 0LL;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(
    this,
    (const struct CPointerInputFrame *)v16,
    *((_DWORD *)v14 + 8),
    a6,
    a3,
    a4);
  if ( (*((_DWORD *)CTouchProcessor::GetPointerInfoNodeQFrame(
                      v18,
                      (const struct CPointerInputFrame *)v16,
                      (const struct CPointerInfoNode *)v17)
        + 35) & 4) == 0 )
  {
    v20 = CTouchProcessor::DelegateCoalesceQFrame(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v16,
            *(_DWORD *)(v17 + 8));
    if ( !v20 )
    {
      v21 = *((_DWORD *)CTouchProcessor::GetPointerInfoNodeQFrame(
                          v19,
                          (const struct CPointerInputFrame *)v16,
                          (const struct CPointerInfoNode *)v17)
            + 37);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
        McTemplateK0hhq_EtwWriteTransfer(
          v22,
          &PointerDelegateNoCoalesce,
          v23,
          *(_WORD *)(v17 + 160),
          *(_WORD *)(v17 + 172),
          v21);
    }
    v13 = v20;
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v16);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v26, v24);
  return v13;
}
