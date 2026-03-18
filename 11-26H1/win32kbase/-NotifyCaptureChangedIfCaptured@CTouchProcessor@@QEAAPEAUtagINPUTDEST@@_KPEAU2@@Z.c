/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x14015B760
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x14015BF94 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14015C27C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qHL @ 0x140217660 (WPP_RECORDER_AND_TRACE_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        PERESOURCE *this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v3; // rbx
  __int64 v5; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  CInputDest *v12; // r14
  struct CPointerMsgData *NonConstMsgData; // r13
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  char v20; // bp
  bool v21; // r15
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  int v29; // [rsp+20h] [rbp-A8h]
  _QWORD v30[4]; // [rsp+60h] [rbp-68h] BYREF
  char v31; // [rsp+80h] [rbp-48h]
  PERESOURCE *v32; // [rsp+88h] [rbp-40h]
  CInputDest *v33; // [rsp+D0h] [rbp+8h] BYREF

  v3 = 0LL;
  v31 = 0;
  v33 = 0LL;
  v5 = a2;
  if ( a2 == -1 )
    v5 = 0LL;
  v30[0] = v5;
  v32 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v30, v8, v9);
  CTouchProcessor::GetPointerCapture(this, a2, 0, &v33, 0LL);
  v12 = v33;
  if ( v33 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000u);
    CTouchProcessor::SetDelegateAction(this, a2, 5LL);
    v14 = *((_OWORD *)v12 + 1);
    v15 = *((_OWORD *)v12 + 2);
    v16 = *((_OWORD *)v12 + 3);
    v17 = *((_OWORD *)v12 + 4);
    v18 = *((_OWORD *)v12 + 5);
    v19 = *((_OWORD *)v12 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v12;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CInputDest::GetWindowHandle(v12);
      UserSessionState = W32GetUserSessionState(v23, v22, v24);
      LOBYTE(v26) = v21;
      LOBYTE(v27) = v20;
      WPP_RECORDER_AND_TRACE_SF_qHL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69136),
        v29);
    }
    v3 = a3;
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v30, v10);
  ExReleaseResourceAndLeaveCriticalRegion(*v32);
  return v3;
}
