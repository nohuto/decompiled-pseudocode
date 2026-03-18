/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x140205300
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     IsPointerInputMessageWithState @ 0x1400F2558 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x14020305C (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  CTouchProcessor *v14; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  CTouchProcessor *v16; // rcx
  __int64 v17; // rdi
  struct CPointerMsgData *v18; // rbp
  PERESOURCE *v19; // rcx
  CPointerInfoNode *v21; // r14
  HWND v22; // [rsp+20h] [rbp-68h] BYREF
  PERESOURCE *v23[7]; // [rsp+28h] [rbp-60h] BYREF

  v9 = 0;
  v22 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v23, this + 4, a2);
  if ( !(unsigned int)IsPointerInputMessageWithState(a4, v11, v12, v13) || a6 && a4 - 585 <= 1 )
    goto LABEL_11;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, (__int64)a2);
  if ( !NonConstMsgData )
    goto LABEL_11;
  v17 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
  if ( !v17 )
    goto LABEL_11;
  v18 = CTouchProcessor::GetNonConstMsgData(v16, a5);
  if ( !v18 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13776);
  if ( *((_DWORD *)v18 + 7) != *(_DWORD *)(v17 + 40) )
  {
    v19 = this;
LABEL_10:
    CTouchProcessor::UnreferenceFrame(v19, v17);
LABEL_11:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
    return 0LL;
  }
  if ( *((_DWORD *)v18 + 8) >= *(_DWORD *)(v17 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13783);
  v21 = (CPointerInfoNode *)(*(_QWORD *)(v17 + 240) + 480LL * *((unsigned int *)v18 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13785);
  v19 = this;
  if ( (*(_DWORD *)v21 & 0x100) == 0 )
    goto LABEL_10;
  if ( (unsigned int)CTouchProcessor::GetPointerEventTarget(this, v21, &v22) )
  {
    CTouchProcessor::UnreferenceFrame(this, v17);
    LOBYTE(v9) = v22 == a3;
  }
  else
  {
    CTouchProcessor::UnreferenceFrame(this, v17);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
  return v9;
}
