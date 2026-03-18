/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1402160A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x14015BF94 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14015C27C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        PERESOURCE *this,
        void *a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  struct CInputDest *v11; // rbp
  struct CPointerMsgData *NonConstMsgData; // rbx
  unsigned __int16 v13; // ax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  PERESOURCE *v21[6]; // [rsp+30h] [rbp-58h] BYREF
  struct CInputDest *v22; // [rsp+90h] [rbp+8h] BYREF

  v7 = 0LL;
  v22 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v21, this + 4, a2);
  CTouchProcessor::GetPointerCapture(this, (__int64)a2, 0, &v22, 0LL);
  v11 = v22;
  if ( v22 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000);
    CTouchProcessor::SetDelegateAction(this, (unsigned __int64)a2, 5u);
    v13 = *((_WORD *)NonConstMsgData + 8);
    v7 = a3;
    *a4 = v13;
    v14 = *((_OWORD *)v11 + 1);
    v15 = *((_OWORD *)v11 + 2);
    v16 = *((_OWORD *)v11 + 3);
    v17 = *((_OWORD *)v11 + 4);
    v18 = *((_OWORD *)v11 + 5);
    v19 = *((_OWORD *)v11 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v11;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v21, v9);
  return v7;
}
