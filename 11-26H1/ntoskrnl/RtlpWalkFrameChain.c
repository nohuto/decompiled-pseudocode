/*
 * XREFs of RtlpWalkFrameChain @ 0x140262420
 * Callers:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x140412060 (RtlpIsFrameInBoundsEx.c)
 *     RtlpWalkWowStack @ 0x14045F210 (RtlpWalkWowStack.c)
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     RtlpCaptureContextForStackWalk @ 0x140537680 (RtlpCaptureContextForStackWalk.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140A71E20 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rdx
  _QWORD *InitialStack; // r14
  _QWORD *v8; // r13
  bool v9; // r12
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // r15d
  struct _KTHREAD *v14; // rbx
  _QWORD *i; // rsi
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  char SameThreadTransientFlags; // al
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v22; // rcx
  char v23; // al
  int v24; // ebx
  int v25; // eax
  bool v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  CUmaFnEnt *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // esi
  _DWORD *v36; // rbx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  unsigned int v39; // eax
  struct _KTHREAD *v40; // rax
  volatile void *v41; // [rsp+38h] [rbp-220h]
  volatile void *v42; // [rsp+38h] [rbp-220h]
  char v43; // [rsp+60h] [rbp-1F8h] BYREF
  char v44; // [rsp+61h] [rbp-1F7h]
  int v45; // [rsp+64h] [rbp-1F4h] BYREF
  int v46; // [rsp+68h] [rbp-1F0h]
  unsigned int v47; // [rsp+6Ch] [rbp-1ECh]
  bool v48; // [rsp+70h] [rbp-1E8h]
  _QWORD *v49; // [rsp+78h] [rbp-1E0h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-1D8h] BYREF
  int v51; // [rsp+88h] [rbp-1D0h]
  unsigned __int64 v52; // [rsp+90h] [rbp-1C8h]
  int v53; // [rsp+98h] [rbp-1C0h]
  int v54; // [rsp+9Ch] [rbp-1BCh]
  int v55[2]; // [rsp+A0h] [rbp-1B8h]
  _QWORD *v56; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-1A8h]
  __int64 v58; // [rsp+B8h] [rbp-1A0h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-198h] BYREF
  _QWORD *v60; // [rsp+C8h] [rbp-190h]
  unsigned __int64 v61; // [rsp+D0h] [rbp-188h]
  __int128 v62; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-170h]
  unsigned __int64 v64; // [rsp+F0h] [rbp-168h] BYREF
  _QWORD *v65; // [rsp+F8h] [rbp-160h]
  __int64 v66; // [rsp+100h] [rbp-158h]
  __int64 v67; // [rsp+128h] [rbp-130h]
  unsigned __int64 v68; // [rsp+130h] [rbp-128h]
  __int64 v69; // [rsp+140h] [rbp-118h]
  __int64 v70; // [rsp+148h] [rbp-110h]
  _QWORD *v71; // [rsp+150h] [rbp-108h]
  unsigned __int64 v72; // [rsp+158h] [rbp-100h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v73; // [rsp+160h] [rbp-F8h]
  _QWORD v74[5]; // [rsp+168h] [rbp-F0h] BYREF
  __int128 v75; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+1A0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+1C0h] [rbp-98h]
  __int128 v79; // [rsp+1D0h] [rbp-88h]
  _BYTE v80[120]; // [rsp+1E0h] [rbp-78h] BYREF
  bool v84; // [rsp+270h] [rbp+18h]

  memset_0(&v64, 0, 0x50uLL);
  v58 = 0LL;
  v47 = 0;
  v50 = 0LL;
  memset_0(v80, 0, 0x40uLL);
  v49 = 0LL;
  InitialStack = 0LL;
  v8 = 0LL;
  v9 = 1;
  v44 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    *(_QWORD *)v55 = 0LL;
  else
    *(_QWORD *)v55 = CurrentThread->Teb;
  v11 = 0LL;
  v46 = 0;
  v12 = 0LL;
  v52 = 0LL;
  v13 = a3 & 1;
  v54 = v13;
  if ( v13 )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink) & 0x4000) != 0 )
      v12 = stru_140FC11F0.Spare35[1];
    v52 = v12;
  }
  LOBYTE(v6) = v12 != 0;
  RtlpCaptureContextForStackWalk(&v64, v6);
  v43 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v49, &v50) )
    return 0LL;
  v45 = 0;
  v84 = (a3 & 2) != 0;
  if ( !v13 )
  {
    v39 = 0;
    if ( (dword_140FBF204 & 1) == 0 )
      v39 = 0x80000000;
    v47 = v39;
  }
  v56 = 0LL;
  v57 = 0LL;
  if ( !v13 )
    goto LABEL_21;
  v14 = KeGetCurrentThread();
  for ( i = v14->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  v16 = 400LL;
  if ( KiFredEnabled )
    v16 = 416LL;
  v11 = (unsigned __int64)&i[v16 / 0xFFFFFFFFFFFFFFF8uLL];
  v61 = v11;
  v17 = *(_QWORD *)v55;
  if ( !*(_QWORD *)v55 || _bittest16((const signed __int16 *)(*(_QWORD *)v55 + 6126LL), 8u) )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v14->ApcState.Process) != 332
    || *(_BYTE *)(v11 + 43) == 2
    || *(_WORD *)(v11 + 368) != 35
    || (++v45,
        LODWORD(v41) = *(_DWORD *)(v11 + 384),
        !(unsigned __int8)RtlpWalkWowStack(a1, (int)v11 + 360, v17, (int)&v45, a2, a4, *(_DWORD *)(v11 + 344), v41)) )
  {
    v19 = *(_QWORD **)(v11 + 384);
    v56 = v19;
    v20 = *(_QWORD *)(v17 + 8);
    v57 = v20;
    if ( v20 <= (unsigned __int64)v19 )
      return 0LL;
    ProbeForRead(v19, v20 - (_QWORD)v19, 1u);
    InitialStack = v14->InitialStack;
    v60 = InitialStack;
    while ( (InitialStack[1] & 1) != 0 )
    {
      InitialStack = (_QWORD *)InitialStack[5];
      v60 = InitialStack;
    }
    v8 = (_QWORD *)InitialStack[4];
    v71 = v8;
    SameThreadTransientFlags = v14->SameThreadTransientFlags;
    v9 = (SameThreadTransientFlags & 4) != 0;
    v44 = v9;
    v14->SameThreadTransientFlags = SameThreadTransientFlags | 4;
LABEL_21:
    v62 = xmmword_141200030;
    v63 = qword_141200040;
    while ( (unsigned __int8)RtlpIsFrameInBoundsEx(&v49, v65, &v50, v80) )
    {
      v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupFunctionEntryForStackWalks(v64, &v62);
      v73 = v22;
      if ( !v22 && !*((_QWORD *)&v62 + 1) )
        break;
      if ( v46 == 1 )
      {
        v53 = 1;
        v23 = 1;
      }
      else
      {
        v53 = 0;
        v23 = 0;
      }
      v24 = v64;
      v74[2] = 0LL;
      v59 = 0LL;
      v74[0] = &v49;
      v74[1] = &v50;
      if ( v23 )
      {
        v31 = CUmaFnEnt::CUmaFnEnt((CUmaFnEnt *)Address, v22);
        v75 = *(_OWORD *)v31;
        v76 = *((_QWORD *)v31 + 2);
        v25 = RtlpxVirtualUnwind<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
                v47,
                DWORD2(v62),
                v24,
                (unsigned int)&v75,
                (__int64)&v64,
                (__int64)&v43,
                (__int64)&v59,
                (__int64)&v58,
                0,
                (__int64)v74);
      }
      else
      {
        v74[3] = v22;
        v25 = RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
                v47,
                DWORD2(v62),
                v64,
                (_DWORD)v22,
                (__int64)&v64,
                (__int64)&v43,
                (__int64)&v59,
                (__int64)&v58,
                0LL,
                (__int64)v74,
                0,
                0);
      }
      if ( v25 < 0 )
        break;
      v26 = v84;
      if ( v43 )
        v26 = 0;
      v84 = v26;
      v48 = v26;
      if ( v46 == 1 && v45 && v52 )
      {
        v27 = v64;
        if ( v64 == v52 )
        {
          v27 = *(_QWORD *)(v68 - 8);
          v64 = v27;
        }
      }
      else
      {
        v27 = v64;
      }
      if ( !v27 )
      {
        if ( v13 )
        {
          if ( (unsigned __int16)PsWow64GetProcessMachine(KeGetCurrentThread()->ApcState.Process) == 332
            && *(_BYTE *)(v11 + 43) == 2 )
          {
            *(_OWORD *)Address = 0LL;
            v78 = 0LL;
            v79 = 0LL;
            v35 = v55[0];
            if ( (int)RtlWow64GetCpuAreaInfo(*(_QWORD *)(*(_QWORD *)v55 + 5256LL), v32, Address) >= 0 )
            {
              v69 = 1LL;
              v36 = Address[0];
              ProbeForRead(Address[0], 1uLL, 4u);
              LODWORD(v42) = v36[49] - 4;
              RtlpWalkWowStack(a1, 0, v35, (int)&v45, a2, a4, v36[45], v42);
            }
          }
        }
        break;
      }
      if ( v46 )
      {
        if ( v46 != 1 )
        {
          if ( v46 != 2 )
            break;
          if ( v27 <= 0x7FFFFFFEFFFFLL )
          {
            if ( v27 != *(_QWORD *)(v11 + 360) )
              break;
            v37 = *(_QWORD **)(v11 + 384);
            v70 = 1LL;
            ProbeForRead(v37, 1uLL, 4u);
            v46 = 1;
            v51 = 1;
            v65 = (_QWORD *)v37[9];
            v49 = v56;
            v50 = v57;
            if ( v8 )
            {
              v11 = v8[26];
              v61 = v11;
            }
            v27 = v64;
          }
          goto LABEL_49;
        }
        if ( v27 >= 0x7FFFFFFF0000LL )
          break;
        if ( v8 && v27 == *(_QWORD *)(v11 + 360) )
        {
          v46 = 2;
          v51 = 2;
          v27 = v8[39];
          v64 = v27;
          v65 = v8 + 40;
          v66 = v8[31];
          v33 = v67;
          if ( v52 )
            v33 = 0LL;
          v67 = v33;
          v8 = (_QWORD *)InitialStack[4];
          v71 = v8;
          v34 = (_QWORD *)InitialStack[5];
          InitialStack = v34;
          if ( !v34 )
            break;
          v60 = v34;
          v49 = v65;
          v29 = *v34;
          goto LABEL_45;
        }
LABEL_49:
        if ( v45 >= a4 )
        {
          v30 = v45 - a4;
          *(_QWORD *)(a1 + 8 * v30) = v27;
          if ( a5 )
          {
            v38 = (unsigned int)(2 * v30);
            *(_QWORD *)(a5 + 8 * v38) = *((_QWORD *)&v62 + 1);
            *(_QWORD *)(a5 + 8LL * (unsigned int)(v38 + 1)) = v73;
          }
        }
        if ( ++v45 >= a2 )
          break;
      }
      else if ( v13 )
      {
        if ( v27 < 0xFFFF800000000000uLL )
        {
          if ( v27 >= 0x7FFFFFFF0000LL )
            break;
          if ( v27 != *(_QWORD *)(v11 + 360) )
            break;
          v46 = 1;
          v51 = 1;
          if ( v8 )
          {
            v11 = v8[26];
            v61 = v11;
            if ( v11 < 0xFFFF800000000000uLL )
              break;
          }
          if ( v52 )
          {
            v67 = 1LL;
            v28 = __readmsr(0x6A7u);
            v72 = v28;
            if ( KiUserCetPl3SspCanonicalizeMask )
            {
              v28 &= KiUserCetPl3SspCanonicalizeMask;
              v72 = v28;
            }
            v68 = v28;
          }
          v49 = v56;
          v29 = v57;
LABEL_45:
          v50 = v29;
          goto LABEL_49;
        }
        if ( !v45 )
          goto LABEL_49;
      }
      else
      {
        if ( v27 < 0xFFFF800000000000uLL )
          break;
        if ( !v26 )
          goto LABEL_49;
      }
    }
  }
  if ( v13 )
  {
    if ( !v9 )
    {
      v40 = KeGetCurrentThread();
      v40->SameThreadTransientFlags &= ~4u;
    }
  }
  return (unsigned int)v45;
}
