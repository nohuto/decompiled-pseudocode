/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1400C38A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPromotePointer @ 0x1400C39A4 (ApiSetEditionPromotePointer.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, void *a2, unsigned int a3)
{
  struct CEResourceLock *v3; // r14
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v8; // ecx
  unsigned __int16 v9; // di
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v13; // ecx
  _BYTE v14[48]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[48]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (CTouchProcessor *)((char *)this + 32);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v14,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (unsigned __int64)a2);
  if ( !NonConstMsgData || *((_DWORD *)NonConstMsgData + 12) == 7 )
    goto LABEL_11;
  if ( a3 == 0x10000000 )
  {
    v13 = *((_DWORD *)NonConstMsgData + 9);
    if ( (v13 & 1) != 0 )
    {
      a3 = 0;
    }
    else if ( (v13 & 2) == 0 && (v13 & 4) == 0 )
    {
      goto LABEL_11;
    }
  }
  v8 = *((_DWORD *)NonConstMsgData + 9);
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( !a3 )
      {
LABEL_7:
        v9 = *((_WORD *)NonConstMsgData + 8);
        v10 = *((_DWORD *)NonConstMsgData + 7);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v15, v3, a2);
        v11 = ApiSetEditionPromotePointer(v9, v10, a3);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v15);
        CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v14);
        return v11;
      }
    }
    else if ( a3 )
    {
      goto LABEL_7;
    }
  }
LABEL_11:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v14);
  return 0LL;
}
