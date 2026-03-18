/*
 * XREFs of ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x14020C020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::ThreadHasPrimaryCaptureExternal(
        PERESOURCE *this,
        struct tagTHREADINFO *const a2,
        unsigned __int16 a3)
{
  unsigned int v6; // esi
  struct CInputPointerNode *NodeById; // rax
  PERESOURCE *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v9, this + 4);
  v6 = 1;
  NodeById = CTouchProcessor::FindNodeById(this, a3, 1, 0);
  if ( !NodeById
    || (*((_DWORD *)NodeById + 75) & 4) == 0
    || CInputDest::GetThreadInfo((struct CInputPointerNode *)((char *)NodeById + 72)) != a2 )
  {
    v6 = 0;
  }
  CInpLockGuardShared::~CInpLockGuardShared(v9);
  return v6;
}
