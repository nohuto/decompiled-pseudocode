/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1401FEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1401962B4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _QWORD v21[3]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v22[7]; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v23[6]; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v24[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v25[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v26[128]; // [rsp+160h] [rbp+60h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v24, (PERESOURCE *)(a1 + 32), a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (unsigned __int64)a3);
  v8 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v9 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v10 = v9;
    if ( v9 )
    {
      if ( *((_DWORD *)v8 + 8) >= *(_DWORD *)(v9 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12968);
      v11 = *(_QWORD *)(v10 + 240) + 480LL * *((unsigned int *)v8 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12970);
      if ( *((_WORD *)v8 + 8) != *(_WORD *)(v11 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12971);
      v12 = PtiCurrent();
      v21[0] = *((_QWORD *)v12 + 48);
      *((_QWORD *)v12 + 48) = v21;
      v21[2] = CTouchProcessor::DereferencePointerInputFrame;
      v21[1] = v10;
      CInputDest::CInputDest((CInputDest *)v26, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, (struct CInputDest *)v26);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v23,
        (struct CEResourceLock *)(a1 + 32),
        *(void **)(v11 + 16));
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_OWORD *)(a2 + 16);
      v15 = *(unsigned __int16 *)(v11 + 144);
      v22[0] = *(_OWORD *)a2;
      v16 = *(_OWORD *)(a2 + 32);
      v22[1] = v14;
      v17 = *(_OWORD *)(a2 + 48);
      v22[2] = v16;
      v18 = *(_OWORD *)(a2 + 64);
      v22[3] = v17;
      v19 = *(_OWORD *)(a2 + 80);
      v22[4] = v18;
      v20 = *(_OWORD *)(a2 + 96);
      v22[5] = v19;
      v22[6] = v20;
      ApiSetEditionPointerActivate(v22, v15, v13, v11 + 160);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v23);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25);
      CInputDest::~CInputDest((CInputDest *)v26);
      *((_QWORD *)PtiCurrent() + 48) = v21[0];
      CTouchProcessor::UnreferenceFrame(a1, v10);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v24);
}
