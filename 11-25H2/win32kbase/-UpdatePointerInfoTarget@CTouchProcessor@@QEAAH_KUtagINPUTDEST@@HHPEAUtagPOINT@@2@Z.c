/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1400C4F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1400C55C4 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1400C5634 (ApiSetEditionDoPointerDPITransforms.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C5818 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1400C59D8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400C5C20 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140205590 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        __int64 a1,
        void *a2,
        const struct tagINPUTDEST *a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7)
{
  const struct tagINPUTDEST *v7; // r14
  void *v8; // rsi
  unsigned int v10; // ebx
  char v11; // di
  CTouchProcessor *v12; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // r13
  __int64 v17; // r15
  CTouchProcessor *v18; // rcx
  struct CPointerInfoNode *v19; // r14
  CTouchProcessor *v20; // rcx
  int v21; // esi
  CTouchProcessor *v22; // rcx
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  int v39; // edx
  int v40; // r8d
  struct tagTHREADINFO *v42; // rax
  _QWORD *v43; // rcx
  __int16 v44; // [rsp+30h] [rbp-D0h]
  const struct tagINPUTDEST *v47; // [rsp+68h] [rbp-98h]
  _BYTE v48[48]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v49[5]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v50[3]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = a3;
  v8 = a2;
  v47 = a3;
  v10 = 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      104,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v48, (struct CEResourceLock *)(a1 + 32), v8);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, (unsigned __int64)v8);
  v16 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v17 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    if ( v17 )
    {
      CInputDest::CInputDest((CInputDest *)v49, v7);
      v19 = CTouchProcessor::LookupNode(v18, (const struct CPointerInputFrame *)v17, *((_DWORD *)v16 + 8));
      v20 = (CTouchProcessor *)*((unsigned int *)PtiCurrent() + 340);
      if ( ((unsigned __int16)v20 & 0x2000) != 0
        || (v42 = PtiCurrent(),
            v21 = 0,
            v20 = (CTouchProcessor *)(*((_QWORD *)v42 + 170) >> 37),
            (*((_QWORD *)v42 + 170) & 0x2000000000LL) != 0) )
      {
        v21 = 1;
      }
      CTouchProcessor::SetPointerInfoNodeTargetInt(v20, v19, (const struct CInputDest *)v49, a4, 0LL, 1, 0, v21, 0);
      if ( CPointerInfoNode::GetHistoryCount(v19) > 1 )
        CTouchProcessor::UpdateHistoryWithTarget(
          (CTouchProcessor *)a1,
          (const struct CPointerInputFrame *)v17,
          v19,
          (const struct CInputDest *)v49,
          a4,
          0LL,
          1,
          v21,
          0);
      if ( !v21 )
        CTouchProcessor::SetQFrameNonCoalescable(v22, (const struct CPointerInputFrame *)v17, v19);
      if ( HIDWORD(v50[0]) )
        HMAssignmentUnlock((__int64 *)v50);
      v23 = (_QWORD *)(*(_QWORD *)(v17 + 240) + 480LL * *((unsigned int *)v16 + 8));
      v24 = *(_QWORD *)((char *)v23 + 148);
      v25 = v23[25];
      v26 = (int)v24 + (__int64)(int)v25;
      if ( (unsigned __int64)(v26 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v27 = SHIDWORD(v25) + (__int64)SHIDWORD(v24);
        *a6 = v26;
        if ( (unsigned __int64)(v27 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          a6[1] = v27;
LABEL_22:
          v28 = *(_QWORD *)((char *)v23 + 148);
          v29 = v23[27];
          v30 = (int)v28 + (__int64)(int)v29;
          if ( (unsigned __int64)(v30 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v31 = SHIDWORD(v28) + (__int64)SHIDWORD(v29);
            *(_DWORD *)a7 = v30;
            if ( (unsigned __int64)(v31 + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v32 = 0;
            }
            else
            {
              v32 = -2147024362;
              LODWORD(v31) = -1;
            }
            *(_DWORD *)(a7 + 4) = v31;
            if ( v32 >= 0 )
              goto LABEL_33;
          }
          else
          {
            *(_DWORD *)a7 = -1;
          }
          *(_QWORD *)a7 = v23[27];
LABEL_33:
          CTouchProcessor::UnreferenceFrame(a1, v17);
          ApiSetPointerPromotionOnPointerInputRetrieval(
            *((unsigned __int16 *)v16 + 8),
            *((unsigned int *)v16 + 7),
            *(_QWORD *)a7,
            a5);
          v33 = *((_OWORD *)v47 + 1);
          v49[0] = *(_OWORD *)v47;
          v34 = *((_OWORD *)v47 + 2);
          v49[1] = v33;
          v35 = *((_OWORD *)v47 + 3);
          v49[2] = v34;
          v36 = *((_OWORD *)v47 + 4);
          v49[3] = v35;
          v37 = *((_OWORD *)v47 + 5);
          v49[4] = v36;
          v38 = *((_OWORD *)v47 + 6);
          v50[0] = v37;
          v50[1] = v38;
          ApiSetEditionDoPointerDPITransforms(v49, a6, a7);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v39) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v39) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v40) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            LOBYTE(v40) = 0;
          }
          if ( (_BYTE)v39 || (_BYTE)v40 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v39,
              v40,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              107,
              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
          v10 = 1;
          goto LABEL_41;
        }
        a6[1] = -1;
      }
      else
      {
        *a6 = -1;
      }
      *(_QWORD *)a6 = v23[25];
      goto LABEL_22;
    }
    v43 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v44 = 106;
      goto LABEL_59;
    }
  }
  else
  {
    v43 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v44 = 105;
LABEL_59:
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v43[3],
        v14,
        v15,
        v43[8],
        5,
        4,
        v44,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
LABEL_41:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v48);
  return v10;
}
