/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x14004D4C0 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140062B2C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1400CBF28 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14010AA14 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1401A0684 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401A09E8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(PERESOURCE *this)
{
  unsigned int v1; // r15d
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  PERESOURCE *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  char *v12; // r14
  __int64 v13; // rbx
  CPointerInfoNode *v14; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  int v16; // r8d
  unsigned __int16 v17; // dx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v19; // rax
  unsigned int *v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned int v24; // r15d
  unsigned int v25; // r8d
  __int64 v26; // r11
  __int64 v27; // rax
  struct tagTHREADINFO *v28; // rax
  __int64 v29; // rdx
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rdx
  struct tagTHREADINFO *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  struct tagTHREADINFO *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  struct tagTHREADINFO *v41; // rax
  char v42; // [rsp+48h] [rbp-C0h]
  int v43; // [rsp+4Ch] [rbp-BCh]
  int v44; // [rsp+50h] [rbp-B8h]
  unsigned int *Buffer; // [rsp+58h] [rbp-B0h]
  int v46; // [rsp+68h] [rbp-A0h]
  PERESOURCE *v47; // [rsp+70h] [rbp-98h]
  _QWORD v48[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+88h] [rbp-80h]
  _QWORD v50[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h]
  _QWORD v52[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v53[14]; // [rsp+C8h] [rbp-40h] BYREF
  char v54; // [rsp+138h] [rbp+30h]
  PERESOURCE *v55[6]; // [rsp+148h] [rbp+40h] BYREF
  PERESOURCE *v56[8]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v57[7]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v58[16]; // [rsp+228h] [rbp+120h] BYREF

  v1 = 0;
  v43 = 0;
  v3 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v56, this + 4, 0LL);
  v6 = (PERESOURCE *)this[7];
  v47 = v6;
  while ( v6 != this + 6 )
  {
    v7 = (__int64)(v6 - 1);
    CTouchProcessor::ReferenceFrameInt(v5, (__int64)(v6 - 1));
    v44 = 0;
    Buffer = (unsigned int *)Win32AllocPoolZInitImpl(256LL, 4LL * *((unsigned int *)v6 + 10), 0x6E616D55u);
    v8 = Win32AllocPoolZInitImpl(256LL, 4LL * *((unsigned int *)v6 + 10), 0x6E616D55u);
    v11 = *((unsigned int *)v6 + 10);
    v12 = (char *)v8;
    if ( (_DWORD)v11 )
    {
      do
      {
        v13 = *(_QWORD *)(v7 + 240) + 480LL * v1;
        memset(v53, 0, sizeof(v53));
        v54 = 0;
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v13)
          && CPointerInfoNode::IsForManipulationThread(v14)
          && (*(_DWORD *)(v13 + 4) & 0x200) == 0 )
        {
          if ( !Buffer
            || !v12
            || (PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(
                                                                  this,
                                                                  v57,
                                                                  v13,
                                                                  (const struct CPointerInputFrame *)v7),
                CInputDest::CInputDest((CInputDest *)v58, PrevMTNodeTarget),
                v3 |= 1u,
                v42 = 0,
                !*(_DWORD *)CInputDest::operator=(v53, v58, v16)) )
          {
            v42 = 1;
          }
          if ( (v3 & 1) != 0 )
          {
            v3 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v58);
          }
          v17 = *(_WORD *)(v13 + 172);
          if ( v42 )
          {
            NodeById = CTouchProcessor::FindNodeById(this, v17, 0, 0);
            if ( NodeById )
            {
              _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
              if ( *((int *)NodeById + 9) < 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13294);
            }
            if ( (*(_DWORD *)(v13 + 180) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                (CTouchProcessor *)this,
                *(_WORD *)(v13 + 172),
                1,
                (const struct CPointerInputFrame *)v7,
                v1,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v7, v1);
            CTouchProcessor::CheckFreeOnDeparture(this, *(_WORD *)(v13 + 172));
          }
          else
          {
            *(_DWORD *)(v13 + 4) &= ~0x80u;
            v19 = CTouchProcessor::FindNodeById(this, v17, 0, 0);
            if ( v19 )
              *((_DWORD *)v19 + 74) = 2;
            ++v44;
            *(_QWORD *)(v13 + 192) = CInputDest::GetWindowHandle((CInputDest *)v53);
            CInputDest::operator=(v13 + 352, (__int64)v53);
            *(_DWORD *)&v12[4 * v1] = 1;
          }
        }
        CInputDest::~CInputDest((CInputDest *)v53);
        v11 = *(unsigned int *)(v7 + 48);
        ++v1;
      }
      while ( v1 < (unsigned int)v11 );
      v6 = v47;
      v43 = v3;
    }
    v20 = Buffer;
    v1 = 0;
    v21 = 0LL;
    v46 = 0;
    if ( Buffer )
    {
      if ( v12 )
      {
        v22 = 0;
        if ( (_DWORD)v11 )
        {
          do
          {
            if ( *(_DWORD *)&v12[4 * v22] )
            {
              v23 = *(_QWORD *)(v7 + 240);
              v24 = 0;
              v25 = v22;
              v26 = *(_QWORD *)(480LL * v22 + v23 + 192);
              if ( v22 >= (unsigned int)v11 )
                goto LABEL_34;
              do
              {
                if ( *(_DWORD *)&v12[4 * v25] )
                {
                  v11 = 480LL * v25;
                  if ( *(_QWORD *)(v11 + v23 + 192) == v26 )
                  {
                    v11 = *(unsigned __int16 *)(v11 + v23 + 172);
                    v27 = v24++;
                    v20[v27] = v11;
                    *(_DWORD *)&v12[4 * v25] = 0;
                    v23 = *(_QWORD *)(v7 + 240);
                  }
                }
                ++v25;
              }
              while ( v25 < *(_DWORD *)(v7 + 48) );
              if ( !v24 )
LABEL_34:
                MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13376);
              v28 = PtiCurrent(v11, v23);
              v52[0] = *((_QWORD *)v28 + 47);
              *((_QWORD *)v28 + 47) = v52;
              v52[1] = Buffer;
              v52[2] = GreDeleteFastMutex;
              v30 = PtiCurrent((__int64)v52, v29);
              v50[0] = *((_QWORD *)v30 + 47);
              *((_QWORD *)v30 + 47) = v50;
              v51 = (__int64)GreDeleteFastMutex;
              v50[1] = v12;
              v32 = PtiCurrent((__int64)v50, v31);
              v48[0] = *((_QWORD *)v32 + 47);
              *((_QWORD *)v32 + 47) = v48;
              v49 = (__int64)CTouchProcessor::DereferencePointerInputFrame;
              v48[1] = v7;
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v55,
                (struct CEResourceLock *)(this + 4),
                0LL);
              CTouchProcessor::SetManipulationInputTarget(
                this,
                *(_DWORD *)(v7 + 40),
                v24,
                Buffer,
                0LL,
                (struct TELEMETRY_POINTER_FRAME_TIMES *)(v7 + 72),
                0);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v55);
              v35 = PtiCurrent(v34, v33);
              v36 = v48[0];
              *((_QWORD *)v35 + 47) = v48[0];
              v49 = -1LL;
              v38 = PtiCurrent(v36, v37);
              v39 = v50[0];
              *((_QWORD *)v38 + 47) = v50[0];
              v51 = -1LL;
              v41 = PtiCurrent(v39, v40);
              v21 = v24 + v46;
              v20 = Buffer;
              v46 += v24;
              *((_QWORD *)v41 + 47) = v52[0];
            }
            v11 = *(unsigned int *)(v7 + 48);
            ++v22;
          }
          while ( v22 < (unsigned int)v11 );
          v6 = v47;
          v1 = 0;
          v3 = v43;
        }
        if ( (_DWORD)v21 != v44 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 13397);
      }
      GreDeleteFastMutex((char *)Buffer, v21, v9, v10);
    }
    if ( v12 )
      GreDeleteFastMutex(v12, v21, v9, v10);
    v6 = (PERESOURCE *)v6[1];
    v47 = v6;
    CTouchProcessor::UnreferenceFrameInt(this, v7);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v56, v4);
}
