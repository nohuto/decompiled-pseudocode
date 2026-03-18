/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x140202AA0
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D5020 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140110590 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        PERESOURCE *this,
        unsigned __int64 a2,
        unsigned int *a3)
{
  CTouchProcessor *v6; // rcx
  unsigned __int16 MsgPointerId; // ax
  unsigned int v8; // ebx
  unsigned __int16 v9; // bp
  struct CInputPointerNode *NodeById; // rax
  PERESOURCE *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v12, this + 4);
  MsgPointerId = CTouchProcessor::GetMsgPointerId(v6, a2);
  v8 = 0;
  v9 = MsgPointerId;
  if ( !MsgPointerId )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5748);
  NodeById = CTouchProcessor::FindNodeById(this, v9, 0, 0);
  if ( NodeById )
  {
    v8 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v12);
  return v8;
}
