/*
 * XREFs of MmPrefetchPagesEx @ 0x140A5AD88
 * Callers:
 *     PfpPrefetchFiles @ 0x140A5819C (PfpPrefetchFiles.c)
 *     PfSnPrefetchSections @ 0x140A58EC4 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x140A59AEC (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x140A5AD70 (MmPrefetchPages.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiGetInPageAutoBoostLock @ 0x14039A2BC (MiGetInPageAutoBoostLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A1D7C (MiDereferenceInPageAutoBoostLock.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, unsigned __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 v8; // r14
  int CurrentProcessorColor; // eax
  PVOID *v10; // rsi
  struct _KTHREAD *v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  void *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  PVOID *v17; // r14
  PVOID *v18; // rbp
  __int64 v19; // r13
  int List; // eax
  int v21; // ecx
  __int64 v22; // rdx
  PVOID *v23; // rbx
  int v25; // eax
  __int64 PoolMm; // rax
  __int64 i; // rbp
  _DWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbp
  _SLIST_ENTRY **v32; // rax
  _SLIST_ENTRY *v33; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _KTHREAD *v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  AutoBoost *v37; // [rsp+30h] [rbp-68h]
  PVOID *P; // [rsp+38h] [rbp-60h]
  _QWORD v39[11]; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD *v42; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  LOBYTE(v5) = 0;
  v6 = a1;
  v35 = CurrentThread;
  if ( a1 > 0x1FFFFFFF )
    return (unsigned int)-1073741585;
  v8 = a1;
  v36 = a1;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  P = (PVOID *)ExAllocatePoolMm(64LL, 8 * v6, 1817341261, CurrentProcessorColor | 0x80000000);
  v10 = P;
  if ( !P )
    return (unsigned int)-1073741670;
  v11 = (struct _KTHREAD *)MiGetInPageAutoBoostLock();
  v42 = v11;
  if ( v11 )
  {
    v37 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, v12);
    if ( v37 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v37, v13);
      else
        *((_BYTE *)v37 + 10) = 1;
    }
    if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
    {
      v25 = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(66LL, 0x1008uLL, 1818782029, v25 | 0x80000000);
      v4 = (_DWORD *)PoolMm;
      if ( !PoolMm )
      {
        v16 = -1073741670;
LABEL_19:
        if ( v37 )
          KeAbPostReleaseEx(v42, (unsigned __int64)v37, v14, v15);
        MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v42->Header.Lock);
        v10 = P;
        if ( (v5 & 2) != 0 )
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22);
        if ( (v5 & 4) != 0 )
          --BYTE6(CurrentThread[1].Queue);
        goto LABEL_25;
      }
      MiInitializePageHeatList(PoolMm, 1, 1, 511);
    }
    --CurrentThread->KernelApcDisable;
    v16 = 0;
    v39[1] = a3;
    v39[3] = v42;
    v5 = 2;
    v39[0] = 0LL;
    v39[2] = v4;
    if ( (_DWORD)v6 )
    {
      v17 = P;
      v18 = P;
      v19 = a2 - (_QWORD)P;
      do
      {
        v39[0] = *(PVOID *)((char *)v17 + v19);
        List = MiPfPrepareReadList(v39, v18);
        if ( List < 0 )
        {
          v16 = List;
        }
        else
        {
          v21 = v5 | 1;
          if ( !*v17 )
            v21 = v5;
          v5 = v21;
        }
        ++v18;
        ++v17;
        --v6;
      }
      while ( v6 );
      LODWORD(v6) = a1;
      CurrentThread = v35;
      v8 = v36;
    }
    if ( v4 )
    {
      if ( v4[1] )
        MiIssuePageHeatList(v4, (unsigned __int64)v13);
      ExFreePoolWithTag(v4, 0);
    }
    if ( (v5 & 1) != 0 )
    {
      ++BYTE6(CurrentThread[1].Queue);
      LOBYTE(v5) = v5 & 0xFA | 4;
      v16 = 0;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
      {
        v28 = P[i];
        if ( v28 )
        {
          v28[52] = 0;
          v29 = MiPfPutPagesInTransition((__int64)P[i], a3, 0, (__int64)v42);
          if ( v29 < 0 )
          {
            v16 = v29;
            do
            {
              if ( P[i] )
              {
                while ( 1 )
                {
                  v32 = (_SLIST_ENTRY **)((char *)P[i] + 224);
                  v33 = *v32;
                  if ( *v32 == (_SLIST_ENTRY *)v32 )
                    break;
                  if ( *((_SLIST_ENTRY ***)&v33->Next + 1) != v32 || (Next = v33->Next, *(&v33->Next->Next + 1) != v33) )
                    __fastfail(3u);
                  *v32 = Next;
                  *((_QWORD *)&Next->Next + 1) = v32;
                  MiFreeInPageSupportBlock(v33);
                }
                MiReleaseReadListResources(P[i]);
                ExFreePoolWithTag(P[i], 0);
                P[i] = 0LL;
              }
              i = (unsigned int)(i + 1);
            }
            while ( (unsigned int)i < (unsigned int)v6 );
            break;
          }
          v30 = (__int64)P[i];
          if ( *(_QWORD *)(v30 + 224) == v30 + 224 )
          {
            MiReleaseReadListResources(v30);
            ExFreePoolWithTag(P[i], 0);
            P[i] = 0LL;
          }
          else
          {
            LOBYTE(v5) = v5 | 1;
            MiPfExecuteReadList(v30, 0, 0xFFFFFFFF, 0LL);
          }
        }
      }
      v8 = (unsigned int)v6;
      if ( (v5 & 1) != 0 )
      {
        v16 = 0;
        if ( (_DWORD)v6 )
        {
          v31 = (unsigned int)v6;
          do
          {
            if ( *v10 )
            {
              MiPfCompletePrefetchIos((ULONG_PTR *)*v10 + 28, 0LL, 0LL);
              MiReleaseReadListResources(*v10);
            }
            ++v10;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    CurrentThread = v35;
    goto LABEL_19;
  }
  v16 = -1073741670;
LABEL_25:
  if ( (_DWORD)v6 )
  {
    v23 = v10;
    do
    {
      if ( *v23 )
        ExFreePoolWithTag(*v23, 0);
      ++v23;
      --v8;
    }
    while ( v8 );
  }
  ExFreePoolWithTag(v10, 0);
  return v16;
}
