/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1402050D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF0C0 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(PERESOURCE *this, __int64 a2, int *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rdi
  _QWORD *FrameById; // rax
  _QWORD *v10; // rsi
  CPointerInfoNode *v11; // rbx
  unsigned int v12; // ebx
  PERESOURCE *v14[5]; // [rsp+20h] [rbp-28h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v14, this + 4);
  *a3 = 0;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, a2);
  v8 = NonConstMsgData;
  if ( NonConstMsgData
    && (FrameById = CTouchProcessor::FindFrameById((__int64)this, *((_DWORD *)NonConstMsgData + 7), 4),
        (v10 = FrameById) != 0LL) )
  {
    if ( *((_DWORD *)v8 + 8) >= *((_DWORD *)FrameById + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13838);
    v11 = (CPointerInfoNode *)(v10[30] + 480LL * *((unsigned int *)v8 + 8));
    if ( !(unsigned int)CPointerInfoNode::IsValid(v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13840);
    if ( *((_DWORD *)v11 + 43) != *((unsigned __int16 *)v8 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13843);
    if ( (*((_DWORD *)v11 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v12 = -__CFSHR__(*(_DWORD *)v11, 11);
  }
  else
  {
    v12 = 0;
  }
  CInpLockGuardShared::~CInpLockGuardShared(v14);
  return v12;
}
