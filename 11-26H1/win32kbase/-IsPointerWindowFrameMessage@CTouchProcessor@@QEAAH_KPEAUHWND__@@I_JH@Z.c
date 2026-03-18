/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x140215EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     IsPointerInputMessageWithState @ 0x14004F200 (IsPointerInputMessageWithState.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x140215844 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        PERESOURCE *this,
        void *a2,
        HWND a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned int v9; // ebx
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  CTouchProcessor *v14; // rcx
  _QWORD *v15; // rdi
  struct CPointerMsgData *v16; // rbp
  CTouchProcessor *v17; // rcx
  CPointerInfoNode *v19; // r14
  __int64 v20; // rdx
  HWND v21; // [rsp+20h] [rbp-68h] BYREF
  PERESOURCE *v22[7]; // [rsp+28h] [rbp-60h] BYREF

  v9 = 0;
  v21 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v22, this + 4, a2);
  if ( !(unsigned int)IsPointerInputMessageWithState(a4) || a6 && a4 - 585 <= 1 )
    goto LABEL_11;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, (__int64)a2);
  if ( !NonConstMsgData )
    goto LABEL_11;
  v15 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  if ( !v15 )
    goto LABEL_11;
  v16 = CTouchProcessor::GetNonConstMsgData(v14, a5);
  if ( !v16 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13750);
  if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v15 + 10) )
  {
    v17 = (CTouchProcessor *)this;
LABEL_10:
    CTouchProcessor::UnreferenceFrame((__int64)v17, (__int64)v15);
LABEL_11:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22, v11);
    return 0LL;
  }
  if ( *((_DWORD *)v16 + 8) >= *((_DWORD *)v15 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13757);
  v19 = (CPointerInfoNode *)(v15[30] + 480LL * *((unsigned int *)v16 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13759);
  v17 = (CTouchProcessor *)this;
  if ( (*(_DWORD *)v19 & 0x100) == 0 )
    goto LABEL_10;
  if ( (unsigned int)CTouchProcessor::GetPointerEventTarget(this, v19, &v21) )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15);
    LOBYTE(v9) = v21 == a3;
  }
  else
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22, v20);
  return v9;
}
