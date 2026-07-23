/*
 * XREFs of HalpInterruptSetLineState @ 0x140435168
 * Callers:
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140501D24 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptFindBestRouting @ 0x1404357AC (HalpInterruptFindBestRouting.c)
 *     HalpInterruptGetPriority @ 0x140436214 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetLineState(
        __int64 *a1,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  ULONG_PTR BugCheckParameter4; // r13
  char v8; // r14
  __int64 v9; // r8
  ULONG_PTR *v10; // rax
  int v11; // r8d
  __int64 v12; // rbx
  ULONG_PTR *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // r15
  int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // r8
  __int128 v20; // xmm10
  __int64 v21; // rdi
  __int128 v22; // xmm6
  __int128 v23; // xmm7
  __int128 v24; // xmm8
  __int64 v25; // xmm9_8
  _DWORD *v26; // r12
  int v27; // r8d
  int v29; // r8d
  int BestRouting; // eax
  int Priority; // eax
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rcx
  signed __int32 v35[8]; // [rsp+8h] [rbp-C9h] BYREF
  __int64 v36; // [rsp+118h] [rbp+47h] BYREF
  char v37; // [rsp+128h] [rbp+57h]
  int v38; // [rsp+130h] [rbp+5Fh] BYREF

  v38 = a4;
  v37 = a3;
  BugCheckParameter4 = a2;
  if ( a5 == 3 )
  {
    v8 = 1;
    a5 = 2;
  }
  else if ( a5 == 4 )
  {
    v8 = 1;
    a5 = 1;
  }
  else
  {
    v8 = 0;
  }
  v36 = *a1;
  HalpInterruptApplyOverrides((int *)&v36, &a5, &v38);
  LODWORD(v9) = v36;
  while ( 1 )
  {
    v10 = HalpInterruptLookupController(v9);
    v12 = (__int64)v10;
    if ( !v10 )
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 17;
      HalpInterruptLastProblemStatus = 0;
      HalpInterruptLastProblemLine = 2216;
      return (unsigned int)-1073741275;
    }
    if ( (v10[31] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v10, 0x7931847uLL);
    v13 = HalpInterruptLookupController(v11);
    if ( !v13 )
    {
LABEL_23:
      HalpInterruptLastProblemController = v12;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 18;
      HalpInterruptLastProblemLine = 2240;
      HalpInterruptLastProblemStatus = 0;
      *(_QWORD *)(v12 + 316) = 18LL;
      *(_QWORD *)(v12 + 328) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v12 + 336) = 2240;
      return (unsigned int)-1073741275;
    }
    v14 = (__int64)(v13 + 33);
    v15 = (_QWORD *)v13[33];
    do
    {
      if ( v15 == (_QWORD *)v14 )
        goto LABEL_23;
      v16 = v15;
      v15 = (_QWORD *)*v15;
      v17 = *((_DWORD *)v16 + 5);
    }
    while ( v17 > SHIDWORD(v36) || *((_DWORD *)v16 + 6) <= SHIDWORD(v36) );
    v18 = HIDWORD(v36) - v17;
    if ( !v16 )
      goto LABEL_23;
    v19 = v16[6];
    if ( *(_BYTE *)(v19 + 16LL * v18) )
      break;
    v20 = *(_OWORD *)(v19 + 16LL * v18);
    v21 = v16[5] + 56LL * v18;
    v22 = *(_OWORD *)v21;
    v23 = *(_OWORD *)(v21 + 16);
    v24 = *(_OWORD *)(v21 + 32);
    v25 = *(_QWORD *)(v21 + 48);
    if ( *(_BYTE *)(v19 + 16LL * v18 + 12) )
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v21 + 48) != (_DWORD)BugCheckParameter4
         || *(_DWORD *)(v21 + 8) != v38
         || *(_DWORD *)v21 != a5
         || *(_BYTE *)(v21 + 4) != v8) )
      {
        HalpInterruptSetProblemEx(v12, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2295);
        KeBugCheckEx(0x5Cu, 0x202uLL, v21, *(unsigned int *)(v21 + 48), BugCheckParameter4);
      }
      *(_DWORD *)(v21 + 12) |= 0x10u;
      v26 = (_DWORD *)(v21 + 16);
    }
    else
    {
      v29 = HalpInterruptDestinationToTarget(v14, a6, (_DWORD *)(v21 + 24));
      if ( v29 < 0 )
      {
        HalpInterruptSetProblemEx(
          v12,
          22,
          v29,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          2330);
LABEL_37:
        v33 = v16[5];
        v34 = 56LL * v18;
        *(_OWORD *)(v34 + v33) = v22;
        *(_OWORD *)(v34 + v33 + 16) = v23;
        *(_OWORD *)(v34 + v33 + 32) = v24;
        *(_QWORD *)(v34 + v33 + 48) = v25;
        *(_OWORD *)(v16[6] + 16LL * v18) = v20;
        return (unsigned int)v27;
      }
      v26 = (_DWORD *)(v21 + 16);
      BestRouting = HalpInterruptFindBestRouting(&v36, *(_QWORD *)a7, v21 + 16);
      v27 = BestRouting;
      if ( BestRouting < 0 )
        goto LABEL_37;
      *(_DWORD *)v21 = a5;
      *(_DWORD *)(v21 + 8) = v38;
      *(_BYTE *)(v21 + 4) = v8;
      *(_DWORD *)(v21 + 12) = 16;
      *(_DWORD *)(v21 + 48) = BugCheckParameter4;
      Priority = HalpInterruptGetPriority(v12, (unsigned int)BugCheckParameter4, (unsigned int)BestRouting);
      v32 = v37;
      *(_DWORD *)(v21 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)(unsigned __int8)BugCheckParameter4 >> 4)) = v32;
    }
    _InterlockedOr(v35, 0);
    v27 = HalpInterruptSetLineStateInternal(v12, (__int64)&v36, v21);
    if ( v27 < 0 )
      goto LABEL_37;
    if ( *(_DWORD *)(v21 + 20) == *(_DWORD *)(a7 + 4) && *v26 == *(_DWORD *)a7 )
      return 0;
    v9 = *(_QWORD *)v26;
    v36 = *(_QWORD *)v26;
  }
  HalpInterruptSetProblemEx(v12, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2253);
  return (unsigned int)-1073741811;
}
