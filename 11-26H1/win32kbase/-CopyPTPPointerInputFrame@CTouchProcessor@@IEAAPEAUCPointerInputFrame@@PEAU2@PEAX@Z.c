/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400634A0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x14004C4E4 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x140063968 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x140063EB8 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x140063F90 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x14006408C (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x14013A620 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x14013A82C (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetResetLastSeenFrameId @ 0x1402282E8 (ApiSetResetLastSeenFrameId.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        void *a3)
{
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  struct CPointerInputFrame *v12; // rax
  __int128 v13; // xmm1
  struct CPointerInfoNode *v14; // rax
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // ebx
  unsigned int v28; // edx
  struct CPointerQFrame *v29; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v31; // rax
  __int64 v32; // rbx
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rbx
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r14d
  __int64 v41; // rdx
  __int64 UserSessionState; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  _QWORD v47[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v48[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-B0h]
  PERESOURCE *v50; // [rsp+60h] [rbp-A8h]
  _OWORD v51[13]; // [rsp+68h] [rbp-A0h] BYREF

  v48[0] = 0LL;
  LOBYTE(v49) = 0;
  v50 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v48, v6, v7);
  v8 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
  v9 = v8;
  if ( !v8 )
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v48);
    return 0LL;
  }
  v10 = 2LL;
  v11 = (_OWORD *)v8;
  v12 = a2;
  do
  {
    *v11 = *(_OWORD *)v12;
    v11[1] = *((_OWORD *)v12 + 1);
    v11[2] = *((_OWORD *)v12 + 2);
    v11[3] = *((_OWORD *)v12 + 3);
    v11[4] = *((_OWORD *)v12 + 4);
    v11[5] = *((_OWORD *)v12 + 5);
    v11[6] = *((_OWORD *)v12 + 6);
    v11 += 8;
    v13 = *((_OWORD *)v12 + 7);
    v12 = (struct CPointerInputFrame *)((char *)v12 + 128);
    *(v11 - 1) = v13;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v11 = *(_QWORD *)v12;
  *(_QWORD *)(v9 + 16) = v9 + 8;
  *(_QWORD *)(v9 + 8) = v9 + 8;
  *(_QWORD *)(v9 + 32) = v9 + 24;
  *(_QWORD *)(v9 + 24) = v9 + 24;
  *(_QWORD *)(v9 + 256) = 0LL;
  *(_QWORD *)(v9 + 240) = 0LL;
  *(_QWORD *)(v9 + 248) = 0LL;
  *(_QWORD *)(v9 + 232) = 0LL;
  v14 = CTouchProcessor::AllocPointerInfoNodeList((CTouchProcessor *)this, *((_DWORD *)a2 + 12));
  *(_QWORD *)(v9 + 240) = v14;
  if ( !v14 )
    goto LABEL_18;
  memset(&v51[4], 0, 0x90uLL);
  v19 = v51[5];
  *(_OWORD *)(v9 + 72) = v51[4];
  v20 = v51[6];
  *(_OWORD *)(v9 + 88) = v19;
  v21 = v51[7];
  *(_OWORD *)(v9 + 104) = v20;
  v22 = v51[8];
  *(_OWORD *)(v9 + 120) = v21;
  v23 = v51[9];
  *(_OWORD *)(v9 + 136) = v22;
  v24 = v51[10];
  *(_OWORD *)(v9 + 152) = v23;
  v25 = v51[11];
  *(_OWORD *)(v9 + 168) = v24;
  v26 = v51[12];
  *(_OWORD *)(v9 + 184) = v25;
  *(_OWORD *)(v9 + 200) = v26;
  *(LARGE_INTEGER *)(v9 + 72) = KeQueryPerformanceCounter(0LL);
  v27 = 0;
  v28 = *((_DWORD *)a2 + 12);
  if ( v28 )
  {
    do
    {
      CPointerInfoNode::operator=(*(_QWORD *)(v9 + 240) + 480LL * v27, 480LL * v27 + *((_QWORD *)a2 + 30));
      v28 = *((_DWORD *)a2 + 12);
      ++v27;
    }
    while ( v27 < v28 );
  }
  v29 = CTouchProcessor::AllocPointerQFrameList((CTouchProcessor *)this, v28);
  *(_QWORD *)(v9 + 248) = v29;
  if ( !v29 )
    goto LABEL_18;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    CPointerQFrame::operator=(*(_QWORD *)(v9 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
  if ( *((_QWORD *)a2 + 29) )
  {
    v31 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2);
    *(_QWORD *)(v9 + 232) = v31;
    if ( !v31 )
    {
LABEL_18:
      v44 = *(_QWORD *)(v9 + 240);
      if ( v44 )
      {
        if ( v44 == *((_QWORD *)a2 + 30) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3043LL);
        CTouchProcessor::FreePointerInfoList(v16, *(struct CPointerInfoNode **)(v9 + 240), *(_DWORD *)(v9 + 48));
      }
      v45 = *(_QWORD *)(v9 + 248);
      if ( v45 )
      {
        if ( v45 == *((_QWORD *)a2 + 31) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3048LL);
        CTouchProcessor::FreePointerQFrameList(v16, *(struct CPointerQFrame **)(v9 + 248), *(_DWORD *)(v9 + 48));
      }
      GreDeleteFastMutex((char *)v9, v15, v17, v18);
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v48, v46);
      ExReleaseResourceAndLeaveCriticalRegion(*v50);
      return 0LL;
    }
  }
  LOBYTE(v15) = 19;
  v32 = HMValidateHandleNoSecure(a3, v15);
  if ( !v32 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3024LL);
  v47[1] = *(_QWORD *)(v32 + 456);
  v47[0] = v9 + 256;
  HMAssignmentLock(v47, 0LL);
  v36 = *(_QWORD *)(W32GetUserSessionState(v34, v33, v35) + 16720);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v51,
    (PERESOURCE *)(v36 + 8),
    0LL);
  v40 = (*(_DWORD *)v36)++;
  if ( v40 == -1 )
  {
    *(_DWORD *)v36 = 1;
    UserSessionState = W32GetUserSessionState(v38, v37, v39);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19176));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((PERESOURCE **)v51, v37);
  *((_DWORD *)a2 + 10) = v40;
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v48, v41);
  ExReleaseResourceAndLeaveCriticalRegion(*v50);
  return (struct CPointerInputFrame *)v9;
}
