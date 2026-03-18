/*
 * XREFs of ?IsPointerInContact@CTouchProcessor@@QEAAH_KPEA_N@Z @ 0x140205010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerInContact(PERESOURCE *this, __int64 a2, bool *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebx
  PERESOURCE *v12[7]; // [rsp+20h] [rbp-38h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v12, this + 4, 0LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, a2);
  v8 = NonConstMsgData;
  if ( NonConstMsgData && (v9 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7))) != 0 )
  {
    v10 = *(_DWORD *)(480LL * *((unsigned int *)v8 + 8) + *(_QWORD *)(v9 + 240) + 180);
    *a3 = (*((_DWORD *)v8 + 9) & 0x10u) >> 4;
    CTouchProcessor::UnreferenceFrame(this, v9);
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v12);
    return (v10 >> 2) & 1;
  }
  else
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v12);
    return 0LL;
  }
}
