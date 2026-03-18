/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x140215EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019214C (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(PERESOURCE *this, __int64 a2)
{
  CTouchProcessor *v3; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  unsigned int v5; // ebx
  PERESOURCE *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v7, this + 4);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v3, a2);
  v5 = 0;
  if ( NonConstMsgData )
    v5 = -__CFSHR__(*((_DWORD *)NonConstMsgData + 9), 5);
  CInpLockGuardShared::~CInpLockGuardShared(v7);
  return v5;
}
