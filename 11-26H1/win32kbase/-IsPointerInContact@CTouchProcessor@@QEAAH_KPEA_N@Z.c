/*
 * XREFs of ?IsPointerInContact@CTouchProcessor@@QEAAH_KPEA_N@Z @ 0x140215DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerInContact(PERESOURCE *this, __int64 a2, bool *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  struct CPointerMsgData *v10; // rsi
  _QWORD *v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  PERESOURCE *v15[7]; // [rsp+20h] [rbp-38h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v15, this + 4, 0LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, a2);
  v9 = 0;
  v10 = NonConstMsgData;
  if ( NonConstMsgData
    && (v11 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7))) != 0LL )
  {
    v12 = *(_DWORD *)(480LL * *((unsigned int *)v10 + 8) + v11[30] + 180);
    *a3 = (*((_DWORD *)v10 + 9) & 0x10u) >> 4;
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v11);
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v15, v13);
    LOBYTE(v9) = (v12 & 4) != 0;
    return v9;
  }
  else
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v15, v8);
    return 0LL;
  }
}
