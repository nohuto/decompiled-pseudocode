/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1401654F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ApiSetEditionPromotePointer @ 0x1401BCA2C (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  PERESOURCE *v3; // r15
  __int64 v4; // rax
  __int64 v6; // r14
  int v7; // edx
  int v8; // r8d
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx
  unsigned __int16 v14; // di
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v20; // ecx
  _QWORD v21[4]; // [rsp+20h] [rbp-60h] BYREF
  char v22; // [rsp+40h] [rbp-40h]
  PERESOURCE *v23; // [rsp+48h] [rbp-38h]
  _QWORD v24[4]; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+70h] [rbp-10h]
  PERESOURCE *v26; // [rsp+78h] [rbp-8h]

  v3 = (PERESOURCE *)((char *)this + 32);
  v22 = 0;
  v4 = a2;
  v23 = (PERESOURCE *)((char *)this + 32);
  if ( a2 == -1 )
    v4 = 0LL;
  v21[0] = v4;
  v6 = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v3);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v21, v7, v8);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, v6);
  if ( !NonConstMsgData )
    goto LABEL_12;
  if ( *((_DWORD *)NonConstMsgData + 12) == 7 )
    goto LABEL_17;
  if ( a3 == 0x10000000 )
  {
    v20 = *((_DWORD *)NonConstMsgData + 9);
    if ( (v20 & 1) != 0 )
    {
      a3 = 0;
      goto LABEL_6;
    }
    if ( (v20 & 2) != 0 || (v20 & 4) != 0 )
      goto LABEL_6;
LABEL_17:
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v21);
    return 0LL;
  }
LABEL_6:
  v13 = *((_DWORD *)NonConstMsgData + 9);
  if ( (v13 & 0x10) == 0 )
    goto LABEL_12;
  if ( (v13 & 1) == 0 )
  {
    if ( a3 )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( a3 )
  {
LABEL_12:
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v21, v11);
    ExReleaseResourceAndLeaveCriticalRegion(*v23);
    return 0LL;
  }
LABEL_9:
  v14 = *((_WORD *)NonConstMsgData + 8);
  v15 = *((_DWORD *)NonConstMsgData + 7);
  v25 = 0;
  if ( v6 == -1 )
    v6 = 0LL;
  v26 = v3;
  v24[0] = v6;
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v24, v11, v12);
  ExReleaseResourceAndLeaveCriticalRegion(*v26);
  v16 = ApiSetEditionPromotePointer(v14, v15, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v26);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v24, v17);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v21, v18);
  ExReleaseResourceAndLeaveCriticalRegion(*v23);
  return v16;
}
