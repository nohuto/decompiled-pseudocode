/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1402059C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D1578 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1400D21F8 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14020AEBC (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        PERESOURCE *this,
        void *a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  CTouchProcessor *v9; // rcx
  struct CInputDest *v10; // rbp
  struct CPointerMsgData *NonConstMsgData; // rbx
  unsigned __int16 v12; // ax
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int128 v18; // xmm6
  PERESOURCE *v20[6]; // [rsp+30h] [rbp-58h] BYREF
  struct CInputDest *v21; // [rsp+90h] [rbp+8h] BYREF

  v7 = 0LL;
  v21 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v20, this + 4, a2);
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, (unsigned __int64)a2, 0, &v21, 0LL);
  v10 = v21;
  if ( v21 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, (__int64)a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000u);
    CTouchProcessor::SetDelegateAction((CTouchProcessor *)this, (unsigned __int64)a2, 5u);
    v12 = *((_WORD *)NonConstMsgData + 8);
    v7 = a3;
    *a4 = v12;
    v13 = *((_OWORD *)v10 + 1);
    v14 = *((_OWORD *)v10 + 2);
    v15 = *((_OWORD *)v10 + 3);
    v16 = *((_OWORD *)v10 + 4);
    v17 = *((_OWORD *)v10 + 5);
    v18 = *((_OWORD *)v10 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v10;
    *((_OWORD *)a3 + 1) = v13;
    *((_OWORD *)a3 + 2) = v14;
    *((_OWORD *)a3 + 3) = v15;
    *((_OWORD *)a3 + 4) = v16;
    *((_OWORD *)a3 + 5) = v17;
    *((_OWORD *)a3 + 6) = v18;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v20);
  return v7;
}
