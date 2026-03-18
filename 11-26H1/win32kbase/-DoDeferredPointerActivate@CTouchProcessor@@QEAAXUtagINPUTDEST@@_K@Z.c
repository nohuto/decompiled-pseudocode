/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x140214BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1401A0684 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401A09E8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionPointerActivate @ 0x1401BC0C0 (ApiSetEditionPointerActivate.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v8; // rdx
  struct CPointerMsgData *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // r8
  __int128 v17; // xmm1
  unsigned __int16 v18; // dx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  _QWORD v28[3]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v29[7]; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v30[6]; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v31[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v32[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v33[128]; // [rsp+160h] [rbp+60h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, (PERESOURCE *)(a1 + 32), a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (__int64)a3);
  v9 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v10 = CTouchProcessor::ReferenceFrame(a1, *((_DWORD *)NonConstMsgData + 7));
    v11 = (__int64)v10;
    if ( v10 )
    {
      if ( *((_DWORD *)v9 + 8) >= *((_DWORD *)v10 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 12945);
      v12 = *(_QWORD *)(v11 + 240) + 480LL * *((unsigned int *)v9 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 12947);
      if ( *((_WORD *)v9 + 8) != *(_WORD *)(v12 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 12948);
      v15 = PtiCurrent(v14, v13);
      v28[0] = *((_QWORD *)v15 + 47);
      *((_QWORD *)v15 + 47) = v28;
      v28[2] = CTouchProcessor::DereferencePointerInputFrame;
      v28[1] = v11;
      CInputDest::CInputDest((CInputDest *)v33, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v32, (struct CInputDest *)v33);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v30,
        (struct CEResourceLock *)(a1 + 32),
        *(void **)(v12 + 16));
      v16 = *(_QWORD *)(v12 + 16);
      v17 = *(_OWORD *)(a2 + 16);
      v18 = *(_WORD *)(v12 + 144);
      v29[0] = *(_OWORD *)a2;
      v19 = *(_OWORD *)(a2 + 32);
      v29[1] = v17;
      v20 = *(_OWORD *)(a2 + 48);
      v29[2] = v19;
      v21 = *(_OWORD *)(a2 + 64);
      v29[3] = v20;
      v22 = *(_OWORD *)(a2 + 80);
      v29[4] = v21;
      v23 = *(_OWORD *)(a2 + 96);
      v29[5] = v22;
      v29[6] = v23;
      ApiSetEditionPointerActivate(v29, v18, v16, v12 + 160);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v30);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v32, v24);
      CInputDest::~CInputDest((CInputDest *)v33);
      v27 = PtiCurrent(v26, v25);
      *((_QWORD *)v27 + 47) = v28[0];
      CTouchProcessor::UnreferenceFrame(a1, v11);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v31, v8);
}
