/*
 * XREFs of ?IsPointerPrimaryInContact@CTouchProcessor@@QEAAH_K@Z @ 0x140205260
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimaryInContact(PERESOURCE *this, __int64 a2)
{
  CTouchProcessor *v4; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  PERESOURCE *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v10, this + 4, 0LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v4, a2);
  v6 = NonConstMsgData;
  if ( NonConstMsgData
    && (*((_DWORD *)NonConstMsgData + 9) & 0x10) != 0
    && (v7 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7))) != 0 )
  {
    v8 = *(_DWORD *)(480LL * *((unsigned int *)v6 + 8) + *(_QWORD *)(v7 + 240) + 180);
    CTouchProcessor::UnreferenceFrame(this, v7);
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v10);
    return (v8 >> 2) & 1;
  }
  else
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v10);
    return 0LL;
  }
}
