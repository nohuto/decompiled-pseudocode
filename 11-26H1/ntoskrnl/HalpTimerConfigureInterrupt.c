/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x140583F1C
 * Callers:
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140583C90 (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x1405869C8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptLineToGsi @ 0x140435864 (HalpInterruptLineToGsi.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     HalpInterruptIsMsiSupported @ 0x14050FAA4 (HalpInterruptIsMsiSupported.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpTimerUnmapInterrupt @ 0x1405854D0 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpTimerConfigureInterrupt(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  int v12; // r8d
  int v13; // r9d
  int v14; // edi
  int v15; // eax
  __int64 InternalData; // rax
  int v17; // r8d
  int v18; // r9d
  unsigned int *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  unsigned __int8 v33; // di
  __int64 v35; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v36[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v37; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v39; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v40; // [rsp+60h] [rbp-89h]
  __int128 v41; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v42[2]; // [rsp+80h] [rbp-69h] BYREF
  char v43; // [rsp+88h] [rbp-61h]
  int v44; // [rsp+8Ch] [rbp-5Dh] BYREF
  int v45; // [rsp+90h] [rbp-59h] BYREF
  __int128 v46; // [rsp+98h] [rbp-51h]
  unsigned int v47; // [rsp+A8h] [rbp-41h]
  int v48; // [rsp+ACh] [rbp-3Dh]
  int v49; // [rsp+B0h] [rbp-39h]
  unsigned int v50; // [rsp+B4h] [rbp-35h]
  _DWORD v51[10]; // [rsp+B8h] [rbp-31h] BYREF

  v37 = 6LL;
  v39 = 0;
  v35 = 0LL;
  v41 = 0LL;
  memset_0(v42, 0, 0x58uLL);
  v11 = *(_OWORD *)a7;
  v42[1] = a2;
  v43 = a3;
  v47 = a6 & 0x3FFFFFFF | v47 & 0xC0000000 | 0x40000000;
  v46 = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(a7);
  v40 = &v41;
  v14 = -1073741637;
  LODWORD(v41) = a6 & 0x3FFFFFFF;
  v15 = *(_DWORD *)(a1 + 224);
  if ( (v15 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    guard_dispatch_icall_no_overrides(InternalData, a2);
    LOBYTE(v17) = a3;
    HalpInterruptSetIdtEntry(a2, a8, v17, v18, a5);
    return 0;
  }
  if ( (v15 & 0x400) == 0 || !HalpInterruptIsMsiSupported(1) || (*(_DWORD *)(a1 + 184) & 0x50) == 0x40 )
    goto LABEL_11;
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    goto LABEL_9;
  v19 = *(unsigned int **)(a1 + 288);
  v42[0] = 3;
  v45 = 1;
  v44 = 0;
  v14 = HalpInterruptRemap(*v19, v19[1], (__int64)(v19 + 2), 0, v42, 1u);
  if ( v14 >= 0 )
  {
    v20 = v48;
    *(_DWORD *)(a1 + 184) |= 0x40u;
    *(_DWORD *)(a1 + 236) = v20;
    *(_DWORD *)(a1 + 232) = v49;
    *(_QWORD *)(a1 + 240) = v50;
LABEL_9:
    v21 = HalpTimerGetInternalData(a1);
    LOBYTE(v22) = 1;
    v23 = guard_dispatch_icall_no_overrides(v21, v22);
    v14 = v23;
    if ( v23 >= 0 )
    {
      *(_DWORD *)(a1 + 184) |= 0x10u;
      return 0;
    }
    HalpTimerSetProblemEx(a1, 24, v23, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x901u);
    LOBYTE(v24) = 1;
    HalpTimerUnmapInterrupt(v25, a2, a6, v24);
  }
LABEL_11:
  v26 = *(_DWORD *)(a1 + 224);
  if ( (v26 & 0x200) != 0 )
  {
    v27 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v35);
    v28 = v27;
    if ( v27 < 0 )
    {
      HalpTimerSetProblemEx(a1, 16, v27, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x180u);
      return (unsigned int)v28;
    }
    v29 = (int *)(a1 + 92);
  }
  else
  {
    if ( (v26 & 0x100) == 0 )
    {
      HalpTimerSetProblemEx(a1, 17, v14, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x18Fu);
      return (unsigned int)-1073741811;
    }
    v30 = *(_DWORD *)(a1 + 84);
    if ( v30 >= 8 )
    {
      LODWORD(v35) = 45057;
      v30 -= 8;
    }
    else
    {
      LODWORD(v35) = 45056;
    }
    v29 = (int *)(a1 + 92);
    HIDWORD(v35) = v30;
    if ( !*(_DWORD *)(a1 + 92) )
    {
      *v29 = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v31 = HalpTimerGetInternalData(a1);
  v32 = guard_dispatch_icall_no_overrides(v31, 0LL);
  v28 = v32;
  if ( v32 < 0 )
  {
    HalpTimerSetProblemEx(a1, 24, v32, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x1AAu);
    return (unsigned int)v28;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource[0] = v35;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v45 = *(_DWORD *)(a1 + 96);
  v44 = *v29;
  v42[0] = 0;
  HalpInterruptApplyOverrides((int *)&v35, &v44, &v45);
  v28 = HalpInterruptLineToGsi((int *)&v35, v51);
  if ( v28 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v28 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              v42,
              1u);
      if ( v28 < 0 )
        return (unsigned int)v28;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v36[0] = -1;
    v36[1] = 1;
    v33 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
    v28 = HalpInterruptSetLineState(&v35, a2, a3, v45, v44, (__int64)&v37, (__int64)v36);
    HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v33);
    if ( v28 >= 0 )
      return 0;
  }
  return (unsigned int)v28;
}
