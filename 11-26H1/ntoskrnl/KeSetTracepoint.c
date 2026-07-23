/*
 * XREFs of KeSetTracepoint @ 0x1407BEB70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     KiTpWriteBreakpoint @ 0x1405FF148 (KiTpWriteBreakpoint.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BF4E4 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiTpCompletionContextSize @ 0x1407BF5B8 (KiTpCompletionContextSize.c)
 *     KiTpSetupCompletion @ 0x1407BF6C0 (KiTpSetupCompletion.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeSetTracepoint(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rsi
  unsigned __int64 v13; // rbp
  int v16; // edi
  int v17; // edi
  __int64 v18; // rcx
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  AutoBoost *v30; // rax
  char *Pool2; // rdx
  AutoBoost *v32; // rdi
  char *SparePtr; // rdi
  int v34; // ebp
  __int64 v35; // r15
  __int64 *v36; // rcx
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rbp
  __int64 *v40; // r15
  _BYTE *v41; // rcx
  _BYTE *v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  int v45; // r13d
  _BYTE *v46; // r14
  int v47; // ecx
  signed __int32 v48[8]; // [rsp+0h] [rbp-D8h] BYREF
  int v49; // [rsp+30h] [rbp-A8h]
  int v50; // [rsp+34h] [rbp-A4h]
  unsigned int v51; // [rsp+38h] [rbp-A0h]
  int v52; // [rsp+3Ch] [rbp-9Ch]
  __int64 v53; // [rsp+40h] [rbp-98h]
  unsigned __int64 v54; // [rsp+48h] [rbp-90h]
  __int64 v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h]
  char v57[48]; // [rsp+60h] [rbp-78h] BYREF

  v55 = a9;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v54 = a3;
  v13 = a3;
  v56 = a1;
  v53 = 0LL;
  --CurrentThread->KernelApcDisable;
  v16 = KiDynamicTraceEnabled & 2;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a2 || (KiDynamicTraceEnabled & 1) == 0) )
    goto LABEL_4;
  if ( !a1 && a2 || !MmIsUserAddress(a3) && a2 == 1 || (LOBYTE(v18) = MmIsKernelAddress(v13), !(_BYTE)v18) && !a2 )
  {
LABEL_30:
    v17 = -1073741811;
    goto LABEL_31;
  }
  v20 = 1LL;
  if ( a1 )
  {
    v21 = *(_QWORD *)(a1 + 368);
    if ( ((v21 & 1) != 0 || (v21 & 0xFFFFFFFFFFFFFFFCuLL) != 0) && (a2 || !v16) )
      goto LABEL_4;
  }
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v52 = 1;
    v22 = 1;
    if ( a4 == 2 )
      goto LABEL_21;
  }
  else
  {
    v22 = 0;
    v52 = 0;
  }
  if ( a4 != 3 )
  {
    v23 = 0LL;
    goto LABEL_22;
  }
LABEL_21:
  v23 = 1LL;
LABEL_22:
  v51 = v23;
  if ( (unsigned int)(a4 - 4) > 1 )
  {
    v49 = 0;
    goto LABEL_25;
  }
  v49 = 1;
  if ( a4 != 5 )
  {
LABEL_25:
    v50 = 0;
    if ( a4 != 6 )
      goto LABEL_27;
  }
  v50 = 1;
LABEL_27:
  if ( !(_DWORD)v23 )
  {
    if ( a5 || a7 )
      goto LABEL_30;
    goto LABEL_42;
  }
  v19 = (struct _KLOCK_ENTRIES *)&stru_140FC11F0.PriorityFloorCounts[24];
  if ( !a5 )
  {
    v23 = a7;
    if ( !a7 )
      goto LABEL_30;
    goto LABEL_36;
  }
  v25 = 32LL;
  v20 = 48LL;
  if ( a2 )
    v25 = 48LL;
  if ( a5 != *(_QWORD *)&stru_140FC11F0.PriorityFloorCounts[v25 + 24] )
    goto LABEL_4;
  v23 = a7;
  if ( a7 )
  {
LABEL_36:
    v26 = 40LL;
    v20 = 56LL;
    if ( a2 )
      v26 = 56LL;
    if ( v23 != *(_QWORD *)&stru_140FC11F0.PriorityFloorCounts[v26 + 24] )
      goto LABEL_4;
  }
LABEL_42:
  if ( (_BYTE)v18 )
  {
    v27 = MmLockLoadedDataTableEntry(v13);
    v53 = v27;
    if ( !v27 )
    {
LABEL_4:
      v17 = -1073741790;
      goto LABEL_31;
    }
    v11 = *(void **)(v27 + 48);
  }
  if ( !v22 && a4 )
    goto LABEL_54;
  if ( v11 && !(unsigned int)KiTpIsSupportedKernelTracepointLocation(v11) )
  {
    v17 = -1073741637;
    goto LABEL_126;
  }
  if ( !v22 )
  {
LABEL_54:
    v29 = v9;
    v30 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock.WaitBlock[1].Thread, 0LL, 0LL, v19);
    v32 = v30;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[72], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
        v30,
        (__int64)&KsepShimDbLock.WaitBlock[1].Thread);
    if ( v32 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v32, Pool2);
      else
        *((_BYTE *)v32 + 10) = 1;
    }
    SparePtr = (char *)KsepShimDbLock.WaitBlock[1].SparePtr;
    if ( !KsepShimDbLock.WaitBlock[1].SparePtr )
    {
      SparePtr = (char *)ExAllocatePool2(0x40uLL);
      if ( !SparePtr )
      {
LABEL_62:
        v17 = -1073741670;
        goto LABEL_118;
      }
      v34 = KeNumberProcessors_0;
      v35 = (unsigned int)KeNumberProcessors_0;
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
      {
        ExFreePoolWithTag(SparePtr, 0);
        goto LABEL_62;
      }
      if ( v34 )
      {
        v36 = KiProcessorBlock;
        do
        {
          v37 = *v36++;
          *(_QWORD *)(v37 + 152) = Pool2;
          Pool2 += 8200;
          --v35;
        }
        while ( v35 );
      }
      v13 = v54;
      KsepShimDbLock.WaitBlock[1].SparePtr = SparePtr;
    }
    v38 = 0LL;
    v39 = (v13 >> 4) & 0x3FFF;
    v40 = (__int64 *)&SparePtr[8 * v39];
    v17 = 0;
    while ( 1 )
    {
      v41 = (_BYTE *)*v40;
      if ( !*v40 )
        break;
      if ( *((_QWORD *)v41 + 1) == v54 && *((_QWORD *)v41 + 2) == v56 )
      {
        v38 = (_BYTE *)*v40;
        if ( v41[50] != a2 )
        {
          v17 = -1073741811;
          goto LABEL_118;
        }
        break;
      }
      v40 = (__int64 *)*v40;
    }
    if ( !a4 )
    {
      if ( !v38 )
      {
        LOBYTE(Pool2) = a2;
        v17 = KiTpSetupCompletion(v56, (_DWORD)Pool2, v54, 0, 0, (__int64)v57);
        goto LABEL_118;
      }
      v42 = (_BYTE *)v55;
      if ( !v55 )
      {
LABEL_118:
        if ( v9 )
        {
          while ( *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[80] )
            _mm_pause();
          ExFreePoolWithTag((PVOID)v9, 0x70727446u);
        }
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread);
        KeAbPostRelease((unsigned __int64)&KsepShimDbLock.WaitBlock[1].Thread);
        goto LABEL_126;
      }
      v43 = v38[51];
LABEL_117:
      *v42 = v43;
      goto LABEL_118;
    }
    if ( v52 )
    {
      if ( !v38 )
      {
        LOBYTE(Pool2) = a2;
        v17 = KiTpSetupCompletion(v56, (_DWORD)Pool2, *(_QWORD *)(v9 + 8), (int)v9 + 51, 1, v9 + 52);
        if ( v17 < 0 )
          goto LABEL_118;
        ++*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[40];
        v17 = 0;
        v40 = (__int64 *)((char *)KsepShimDbLock.WaitBlock[1].SparePtr + 8 * v39);
        *(_QWORD *)v9 = *v40;
        *v40 = v9;
        _InterlockedOr(v48, 0);
        v44 = v51;
        v45 = v49;
        v9 &= -(__int64)(v51 != 0);
        goto LABEL_92;
      }
      if ( v38[24] || v38[25] )
      {
        v17 = -1073740008;
        goto LABEL_118;
      }
      v45 = v49;
    }
    else
    {
      v45 = v49;
      if ( !v38 )
      {
        v17 = -1073741275;
        goto LABEL_118;
      }
    }
    v44 = v51;
    v29 = (__int64)v38;
LABEL_92:
    v46 = (_BYTE *)(v29 + 48);
    if ( (_DWORD)v44 )
    {
      if ( !*v46 )
      {
        if ( ++*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[44] == 1 )
          _InterlockedOr(&KiDynamicTraceMask, 2u);
        LOBYTE(v44) = 1;
        v17 = KiTpWriteBreakpoint(v29, v44);
        if ( v17 < 0 )
        {
          if ( v29 == v9 )
          {
            *v40 = *(_QWORD *)v29;
            _InterlockedOr(v48, 0);
            --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[40];
          }
          --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[44];
          goto LABEL_118;
        }
        *v46 = 1;
        v17 = 0;
      }
      *(_QWORD *)(v29 + 32) = a6;
      *(_QWORD *)(v29 + 40) = a8;
      _InterlockedOr(v48, 0);
      v9 = 0LL;
      *(_BYTE *)(v29 + 24) = a5 != 0;
      *(_BYTE *)(v29 + 25) = a7 != 0;
    }
    v47 = v50;
    if ( v50 && *v46 )
      goto LABEL_106;
    if ( !v45 )
    {
LABEL_113:
      if ( v47 )
      {
        *v40 = *(_QWORD *)v29;
        _InterlockedOr(v48, 0);
        --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[40];
        v9 = v29;
      }
      v42 = (_BYTE *)v55;
      if ( !v55 )
        goto LABEL_118;
      v43 = *(_BYTE *)(v29 + 51);
      goto LABEL_117;
    }
    if ( *v46 )
    {
LABEL_106:
      if ( (int)KiTpWriteBreakpoint(v29, 0LL) >= 0 )
      {
        --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[44];
        v47 = v50;
        *v46 = 0;
      }
      else
      {
        v47 = 0;
      }
    }
    *(_WORD *)(v29 + 24) = 0;
    _InterlockedOr(v48, 0);
    while ( *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[80] )
      _mm_pause();
    *(_QWORD *)(v29 + 32) = 0LL;
    *(_QWORD *)(v29 + 40) = 0LL;
    goto LABEL_113;
  }
  KiTpCompletionContextSize(v18, v23, v20, v19);
  v28 = ExAllocatePool2(0x40uLL);
  v9 = v28;
  if ( v28 )
  {
    *(_QWORD *)(v28 + 16) = a1;
    *(_BYTE *)(v28 + 50) = a2;
    *(_QWORD *)(v28 + 8) = v13;
    goto LABEL_54;
  }
  v17 = -1073741670;
LABEL_126:
  if ( v53 )
    MmUnlockLoadedDataTableEntry(v53);
LABEL_31:
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
