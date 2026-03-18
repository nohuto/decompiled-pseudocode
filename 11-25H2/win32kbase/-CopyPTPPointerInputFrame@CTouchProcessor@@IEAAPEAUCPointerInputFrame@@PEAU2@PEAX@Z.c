/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E53B0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x140038A90 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140038AE4 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x14011A1F8 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x140128AA8 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1401323A4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140185D90 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1401FA804 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140226094 (ApiSetResetLastSeenFrameId.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        void *a3)
{
  int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  struct CPointerInputFrame *v10; // rax
  __int128 v11; // xmm1
  struct CPointerInfoNode *v12; // rax
  CTouchProcessor *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  unsigned int v23; // edx
  struct CPointerQFrame *v24; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r14d
  __int64 UserSessionState; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD v38[2]; // [rsp+28h] [rbp-E0h] BYREF
  PERESOURCE *v39[6]; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v40[13]; // [rsp+68h] [rbp-A0h] BYREF

  v4 = (int)a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v39,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v6 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
  v7 = v6;
  if ( !v6 )
  {
LABEL_26:
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v39);
    return 0LL;
  }
  v8 = 2LL;
  v9 = (_OWORD *)v6;
  v10 = a2;
  do
  {
    *v9 = *(_OWORD *)v10;
    v9[1] = *((_OWORD *)v10 + 1);
    v9[2] = *((_OWORD *)v10 + 2);
    v9[3] = *((_OWORD *)v10 + 3);
    v9[4] = *((_OWORD *)v10 + 4);
    v9[5] = *((_OWORD *)v10 + 5);
    v9[6] = *((_OWORD *)v10 + 6);
    v9 += 8;
    v11 = *((_OWORD *)v10 + 7);
    v10 = (struct CPointerInputFrame *)((char *)v10 + 128);
    *(v9 - 1) = v11;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v9 = *(_QWORD *)v10;
  *(_QWORD *)(v7 + 16) = v7 + 8;
  *(_QWORD *)(v7 + 8) = v7 + 8;
  *(_QWORD *)(v7 + 32) = v7 + 24;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  *(_QWORD *)(v7 + 240) = 0LL;
  *(_QWORD *)(v7 + 248) = 0LL;
  *(_QWORD *)(v7 + 232) = 0LL;
  *(_QWORD *)(v7 + 256) = 0LL;
  v12 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
  *(_QWORD *)(v7 + 240) = v12;
  if ( !v12 )
    goto LABEL_17;
  memset(&v40[4], 0, 0x90uLL);
  v14 = v40[5];
  *(_OWORD *)(v7 + 72) = v40[4];
  v15 = v40[6];
  *(_OWORD *)(v7 + 88) = v14;
  v16 = v40[7];
  *(_OWORD *)(v7 + 104) = v15;
  v17 = v40[8];
  *(_OWORD *)(v7 + 120) = v16;
  v18 = v40[9];
  *(_OWORD *)(v7 + 136) = v17;
  v19 = v40[10];
  *(_OWORD *)(v7 + 152) = v18;
  v20 = v40[11];
  *(_OWORD *)(v7 + 168) = v19;
  v21 = v40[12];
  *(_OWORD *)(v7 + 184) = v20;
  *(_OWORD *)(v7 + 200) = v21;
  *(LARGE_INTEGER *)(v7 + 72) = KeQueryPerformanceCounter(0LL);
  v22 = 0;
  v23 = *((_DWORD *)a2 + 12);
  if ( v23 )
  {
    do
    {
      CPointerInfoNode::operator=(*(_QWORD *)(v7 + 240) + 480LL * v22, 480LL * v22 + *((_QWORD *)a2 + 30));
      v23 = *((_DWORD *)a2 + 12);
      ++v22;
    }
    while ( v22 < v23 );
  }
  v24 = CTouchProcessor::AllocPointerQFrameList(this, v23);
  *(_QWORD *)(v7 + 248) = v24;
  if ( !v24 )
    goto LABEL_17;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    CPointerQFrame::operator=(*(_QWORD *)(v7 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
  if ( *((_QWORD *)a2 + 29) )
  {
    v26 = CTouchProcessor::CopyRawDataList(this, a2);
    *(_QWORD *)(v7 + 232) = v26;
    if ( !v26 )
    {
LABEL_17:
      v36 = *(_QWORD *)(v7 + 240);
      if ( v36 )
      {
        if ( v36 == *((_QWORD *)a2 + 30) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3059LL);
        CTouchProcessor::FreePointerInfoList(v13, *(struct CPointerInfoNode **)(v7 + 240), *(_DWORD *)(v7 + 48));
      }
      v37 = *(_QWORD *)(v7 + 248);
      if ( v37 )
      {
        if ( v37 == *((_QWORD *)a2 + 31) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3064LL);
        CTouchProcessor::FreePointerQFrameList(v13, *(struct CPointerQFrame **)(v7 + 248), *(_DWORD *)(v7 + 48));
      }
      GreDeleteFastMutex((char *)v7);
      goto LABEL_26;
    }
  }
  v27 = HMValidateHandleNoSecure(v4, 19);
  if ( !v27 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3040LL);
  v38[1] = *(_QWORD *)(v27 + 456);
  v38[0] = v7 + 256;
  HMAssignmentLock(v38, 0LL);
  v30 = *(_DWORD **)(W32GetUserSessionState(v29, v28) + 16728);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v40,
    (struct CEResourceLock *)(v30 + 2),
    0LL);
  v33 = (*v30)++;
  if ( v33 == -1 )
  {
    *v30 = 1;
    UserSessionState = W32GetUserSessionState(v32, v31);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19144));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((PERESOURCE **)v40);
  *((_DWORD *)a2 + 10) = v33;
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v39);
  return (struct CPointerInputFrame *)v7;
}
