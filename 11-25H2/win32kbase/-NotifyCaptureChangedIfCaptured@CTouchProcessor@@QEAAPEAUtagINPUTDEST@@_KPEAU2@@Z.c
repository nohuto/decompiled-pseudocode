/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x140205800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D1578 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1400D21F8 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14020AEBC (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qHL @ 0x14020E310 (WPP_RECORDER_AND_TRACE_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        PERESOURCE *this,
        void *a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rbx
  CTouchProcessor *v7; // rcx
  CInputDest *v8; // r14
  struct CPointerMsgData *NonConstMsgData; // r13
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  char v16; // bp
  bool v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v24; // [rsp+20h] [rbp-A8h]
  PERESOURCE *v25[8]; // [rsp+60h] [rbp-68h] BYREF
  CInputDest *v26; // [rsp+D0h] [rbp+8h] BYREF

  v6 = 0LL;
  v26 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v25, this + 4, a2);
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, (unsigned __int64)a2, 0, &v26, 0LL);
  v8 = v26;
  if ( v26 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, (__int64)a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000u);
    CTouchProcessor::SetDelegateAction((CTouchProcessor *)this, (unsigned __int64)a2, 5u);
    v10 = *((_OWORD *)v8 + 1);
    v11 = *((_OWORD *)v8 + 2);
    v12 = *((_OWORD *)v8 + 3);
    v13 = *((_OWORD *)v8 + 4);
    v14 = *((_OWORD *)v8 + 5);
    v15 = *((_OWORD *)v8 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v8;
    *((_OWORD *)a3 + 1) = v10;
    *((_OWORD *)a3 + 2) = v11;
    *((_OWORD *)a3 + 3) = v12;
    *((_OWORD *)a3 + 4) = v13;
    *((_OWORD *)a3 + 5) = v14;
    *((_OWORD *)a3 + 6) = v15;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CInputDest::GetWindowHandle(v8);
      UserSessionState = W32GetUserSessionState(v19, v18);
      LOBYTE(v21) = v17;
      LOBYTE(v22) = v16;
      WPP_RECORDER_AND_TRACE_SF_qHL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69144),
        v24);
    }
    v6 = a3;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v25);
  return v6;
}
