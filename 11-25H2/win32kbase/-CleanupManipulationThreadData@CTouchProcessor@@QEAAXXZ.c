/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401FB9F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DF11C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14013EE0C (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x140204180 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140208F4C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14020DF04 (Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(PERESOURCE *this)
{
  int v2; // r13d
  __int64 v3; // rcx
  PERESOURCE Blink; // rdi
  unsigned int *v5; // r12
  __int64 v6; // rax
  unsigned int ExclusiveWaiters; // ecx
  char *v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rbx
  CPointerInfoNode *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  _QWORD *v16; // rax
  char v17; // r12
  struct CInputPointerNode *NodeById; // rax
  unsigned __int16 v19; // dx
  struct CInputPointerNode *v20; // rax
  int v21; // edx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned int v24; // r15d
  unsigned int v25; // r8d
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  struct tagTHREADINFO *v30; // rax
  struct tagTHREADINFO *v31; // rax
  struct tagTHREADINFO *v32; // rax
  struct tagTHREADINFO *v33; // rax
  int v34; // [rsp+48h] [rbp-C0h]
  int v35; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v36; // [rsp+58h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-B0h]
  struct CPointerInputFrame *p_SpinLock; // [rsp+68h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h]
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h]
  _QWORD v43[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v44[14]; // [rsp+B8h] [rbp-50h] BYREF
  char v45; // [rsp+128h] [rbp+20h]
  PERESOURCE *v46[6]; // [rsp+138h] [rbp+30h] BYREF
  PERESOURCE *v47[8]; // [rsp+168h] [rbp+60h] BYREF
  char v48[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v49[16]; // [rsp+218h] [rbp+110h] BYREF

  v34 = 0;
  v2 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v47, this + 4, 0LL);
  Blink = this[7];
  while ( Blink != (PERESOURCE)(this + 6) )
  {
    p_SpinLock = (struct CPointerInputFrame *)&Blink[-1].SpinLock;
    CTouchProcessor::ReferenceFrameInt(v3, &Blink[-1].SpinLock);
    v35 = 0;
    v5 = (unsigned int *)Win32AllocPoolZInitImpl(256LL, 4LL * LODWORD(Blink->ExclusiveWaiters), 0x6E616D55u);
    v36 = v5;
    v6 = Win32AllocPoolZInitImpl(256LL, 4LL * LODWORD(Blink->ExclusiveWaiters), 0x6E616D55u);
    ExclusiveWaiters = (unsigned int)Blink->ExclusiveWaiters;
    v8 = (char *)v6;
    v9 = 0;
    if ( ExclusiveWaiters )
    {
      do
      {
        v10 = *(_QWORD *)&Blink[2].ActiveCount + 480LL * v9;
        memset(v44, 0, sizeof(v44));
        v45 = 0;
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10)
          && CPointerInfoNode::IsForManipulationThread(v11)
          && (*(_DWORD *)(v10 + 4) & 0x200) == 0 )
        {
          if ( !v5
            || !v8
            || (PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(
                                                                  this,
                                                                  v48,
                                                                  v10,
                                                                  p_SpinLock),
                CInputDest::CInputDest((CInputDest *)v49, PrevMTNodeTarget),
                v2 |= 1u,
                v16 = CInputDest::operator=(v44, v49),
                v14 = 0LL,
                v17 = 0,
                !*(_DWORD *)v16) )
          {
            v17 = 1;
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v49);
          }
          if ( v17 )
          {
            NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, *(_WORD *)(v10 + 172), 0, 0);
            if ( NodeById )
            {
              _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
              if ( *((int *)NodeById + 9) < 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13317);
            }
            if ( (*(_DWORD *)(v10 + 180) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                (CTouchProcessor *)this,
                *(_WORD *)(v10 + 172),
                1,
                p_SpinLock,
                v9,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(this, p_SpinLock, v9);
            CTouchProcessor::CheckFreeOnDeparture((CTouchProcessor *)this, *(_WORD *)(v10 + 172));
          }
          else
          {
            if ( (unsigned int)Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline(v13, v12, v14) )
            {
              v19 = *(_WORD *)(v10 + 172);
              *(_DWORD *)(v10 + 4) &= ~0x80u;
              v20 = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v19, 0, 0);
              if ( v20 )
                *((_DWORD *)v20 + 74) = 2;
            }
            ++v35;
            *(_QWORD *)(v10 + 192) = CInputDest::GetWindowHandle((CInputDest *)v44);
            CInputDest::operator=(v10 + 352, (__int64)v44);
            *(_DWORD *)&v8[4 * v9] = 1;
          }
          v5 = v36;
        }
        CInputDest::~CInputDest((CInputDest *)v44);
        ExclusiveWaiters = (unsigned int)Blink->ExclusiveWaiters;
        ++v9;
      }
      while ( v9 < ExclusiveWaiters );
      v34 = v2;
    }
    v21 = 0;
    v37 = 0;
    if ( v5 )
    {
      if ( v8 )
      {
        v22 = 0;
        if ( ExclusiveWaiters )
        {
          do
          {
            if ( *(_DWORD *)&v8[4 * v22] )
            {
              v23 = *(_QWORD *)&Blink[2].ActiveCount;
              v24 = 0;
              v25 = v22;
              v26 = *(_QWORD *)(480LL * v22 + v23 + 192);
              if ( v22 >= ExclusiveWaiters )
                goto LABEL_36;
              do
              {
                v27 = 480LL * v25;
                if ( *(_DWORD *)&v8[4 * v25] && *(_QWORD *)(v27 + v23 + 192) == v26 )
                {
                  v28 = *(unsigned __int16 *)(v27 + v23 + 172);
                  v29 = v24++;
                  v5[v29] = v28;
                  *(_DWORD *)&v8[4 * v25] = 0;
                  v23 = *(_QWORD *)&Blink[2].ActiveCount;
                }
                ++v25;
              }
              while ( v25 < LODWORD(Blink->ExclusiveWaiters) );
              if ( !v24 )
LABEL_36:
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13402);
              v30 = PtiCurrent();
              v43[0] = *((_QWORD *)v30 + 48);
              *((_QWORD *)v30 + 48) = v43;
              v43[2] = GreDeleteFastMutex;
              v43[1] = v5;
              v31 = PtiCurrent();
              v41[0] = *((_QWORD *)v31 + 48);
              *((_QWORD *)v31 + 48) = v41;
              v42 = (__int64)GreDeleteFastMutex;
              v41[1] = v8;
              v32 = PtiCurrent();
              v39[0] = *((_QWORD *)v32 + 48);
              *((_QWORD *)v32 + 48) = v39;
              v40 = (__int64)CTouchProcessor::DereferencePointerInputFrame;
              v39[1] = (char *)Blink - 8;
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v46,
                (struct CEResourceLock *)(this + 4),
                0LL);
              CTouchProcessor::SetManipulationInputTarget(
                (CTouchProcessor *)this,
                (unsigned int)Blink->SharedWaiters,
                v24,
                v5,
                0LL,
                (struct TELEMETRY_POINTER_FRAME_TIMES *)&Blink->ActiveEntries,
                0);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v46);
              *((_QWORD *)PtiCurrent() + 48) = v39[0];
              v40 = -1LL;
              *((_QWORD *)PtiCurrent() + 48) = v41[0];
              v42 = -1LL;
              v33 = PtiCurrent();
              v21 = v24 + v37;
              v37 += v24;
              *((_QWORD *)v33 + 48) = v43[0];
            }
            ExclusiveWaiters = (unsigned int)Blink->ExclusiveWaiters;
            ++v22;
          }
          while ( v22 < ExclusiveWaiters );
          v2 = v34;
        }
        if ( v21 != v35 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13423);
      }
      GreDeleteFastMutex((char *)v5);
    }
    if ( v8 )
      GreDeleteFastMutex(v8);
    Blink = (PERESOURCE)Blink->SystemResourcesList.Blink;
    CTouchProcessor::UnreferenceFrameInt(this, p_SpinLock);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v47);
}
