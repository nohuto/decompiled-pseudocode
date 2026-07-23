/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x140870810
 * Callers:
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v12; // rdx
  volatile unsigned __int8 *v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned int BadPageResources; // eax
  bool v19; // zf
  int ContiguousPages; // eax
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  int ExplicitScope; // [rsp+20h] [rbp-69h]
  __int128 v24; // [rsp+70h] [rbp-19h] BYREF
  __int128 v25; // [rsp+80h] [rbp-9h]
  __int128 v26; // [rsp+90h] [rbp+7h]
  PVOID P; // [rsp+A0h] [rbp+17h]
  __int64 v28; // [rsp+F0h] [rbp+67h] BYREF
  unsigned __int64 v29; // [rsp+100h] [rbp+77h]

  v2 = *a1;
  P = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (v2 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x40000000) == 0 )
    return 3221225474LL;
  v5 = *(_QWORD *)a1 >> 12;
  v6 = *(_QWORD *)a2 >> 12;
  v7 = v6 + v5;
  v29 = v6 + v5;
  if ( v5 >= v6 + v5 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v11 = 739246080;
  v12 = 1007681536LL;
  if ( (v2 & 1) == 0 )
    v11 = 1007681536;
  --CurrentThread->SpecialApcDisable;
  LODWORD(v26) = v11;
  while ( v5 < v7 )
  {
    *(_QWORD *)&v24 = v5;
    if ( MiIsPageInHugePfn(v5) )
    {
      if ( BYTE12(v24) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E37F48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E37F48.Header.Lock);
        KeAbPostRelease((unsigned __int64)&stru_140E37F48);
        BYTE12(v24) = 0;
      }
      v16 = MiMarkHugePfnBad(v5, v26, v14, v15);
      v17 = v5 - 1;
      v9 = v16;
      if ( v16 != -1073740748 )
        v17 = v5;
      v5 = v17;
    }
    else
    {
      BadPageResources = MiGetBadPageResources((__int64)&v24, v13, v14, v15);
      if ( DWORD2(v24) == 2 )
      {
        if ( *((_QWORD *)&v26 + 1) )
        {
          MiReleaseNonPagedResources(v25, *((__int64 *)&v26 + 1));
          *((_QWORD *)&v26 + 1) = 0LL;
        }
        PsDereferencePartition(*((__int64 *)&v25 + 1));
        v25 = 0uLL;
LABEL_23:
        --v5;
        goto LABEL_46;
      }
      v9 = BadPageResources;
      if ( DWORD2(v24) == 1 )
      {
        if ( BYTE14(v24) )
          goto LABEL_26;
      }
      else
      {
        ContiguousPages = MiFindContiguousPagesEx(
                            v25,
                            v5,
                            v5,
                            0LL,
                            ExplicitScope,
                            1LL,
                            1,
                            0x80000000,
                            255,
                            (unsigned int)v26 | 0x10000000,
                            0,
                            0LL,
                            0LL,
                            &v28);
        BadPageResources = MiQuarantineBadPage((__int64)&v24, ContiguousPages, v21, v22);
        if ( DWORD2(v24) == 2 )
          goto LABEL_23;
        v9 = BadPageResources;
        if ( BadPageResources == -1073741523 || BadPageResources == -1073741670 )
        {
LABEL_26:
          v10 = BadPageResources;
          break;
        }
      }
    }
LABEL_46:
    v7 = v29;
    ++v5;
  }
  if ( BYTE12(v24) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E37F48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E37F48.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E37F48);
  }
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7, v12);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( BYTE13(v24) && stru_140E2EC68.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *(_QWORD *)a2 = (v6 + v5 - v29) << 12;
  if ( v6 == 1 )
    return v9;
  return v10;
}
