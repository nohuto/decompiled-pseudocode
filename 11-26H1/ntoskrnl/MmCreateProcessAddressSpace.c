/*
 * XREFs of MmCreateProcessAddressSpace @ 0x140ABF9A0
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiCheckWsLimits @ 0x1403C6670 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1403C7134 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1404C9084 (MiCreateNewProcessTopLevelMappings.c)
 *     MiSetProcessPartitionId @ 0x1404DC178 (MiSetProcessPartitionId.c)
 *     PsGetDefaultWsMaximum @ 0x1404DE908 (PsGetDefaultWsMaximum.c)
 *     MiCreateSlabIdentity @ 0x14070AD4C (MiCreateSlabIdentity.c)
 *     MiDereferenceSlabIdentity @ 0x14070B6A4 (MiDereferenceSlabIdentity.c)
 *     PsJoinSession @ 0x140ABFD18 (PsJoinSession.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 *     PsReserveSessionMembership @ 0x140AC0050 (PsReserveSessionMembership.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  struct _LIST_ENTRY *Flink; // r14
  _QWORD *PoolMm; // rbp
  __int64 v8; // rbx
  char v9; // di
  unsigned __int64 v11; // r15
  __int16 *v12; // rsi
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rdx
  __int64 *SharedVm; // r13
  int CurrentProcessorColor; // eax
  __int64 v18; // rdx
  __int64 TopLevelPage; // rax
  int v21; // eax
  __int64 v22; // rax
  void *v23; // rcx
  unsigned __int8 v24; // dl
  struct _LIST_ENTRY *v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+18h] BYREF

  v27 = a3;
  Flink = PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink;
  PoolMm = 0LL;
  v8 = a6;
  v9 = 0;
  v25 = PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink;
  v26 = 0LL;
  v11 = a3;
  if ( a1 )
    v12 = **(__int16 ***)(a6 + 1880);
  else
    v12 = (__int16 *)&MiSystemPartition;
  if ( (unsigned int)MiMakePartitionActive((__int64)v12) )
  {
    MiSetProcessPartitionId(v8, *v12);
    *(_DWORD *)(v8 + 1956) = 1;
    *(_BYTE *)(v8 + 1774) = -1;
    if ( (a4 & 0x10) == 0 )
      goto LABEL_5;
    if ( (int)MiCreateSlabIdentity((__int64)v12, (_BYTE *)(v8 + 1774), v13, v14) >= 0 )
    {
      v9 = 1;
LABEL_5:
      if ( (unsigned int)MiChargeCommit((ULONG *)v12, 0x19uLL, 0) )
      {
        v9 |= 2u;
        if ( (unsigned int)MiChargeResident((ULONG *)v12, 0x19uLL, 0LL) )
        {
          v9 |= 0x10u;
          SharedVm = MiGetSharedVm(v8 + 1024);
          *(_DWORD *)(v8 + 1024) = (unsigned __int16)(__rdtsc() >> 4);
          *(_QWORD *)(v8 + 1728) = v8 + 1720;
          *(_QWORD *)(v8 + 1720) = v8 + 1720;
          *(_QWORD *)(v8 + 1712) = 0LL;
          if ( v11 != PsGetDefaultWsMaximum() )
          {
            MiCheckWsLimits(v8 + 1024, (__int64 *)&v25, &v27, a4, 1);
            v11 = v27;
            Flink = v25;
          }
          *(_QWORD *)(v8 + 1144) = Flink;
          *(_QWORD *)(v8 + 1152) = v11;
          CurrentProcessorColor = MmGetCurrentProcessorColor();
          PoolMm = (_QWORD *)ExAllocatePoolMm(72LL, 0x680uLL, 844130637, CurrentProcessorColor | 0x80000000);
          if ( PoolMm )
          {
            v9 |= 4u;
            if ( (a4 & 1) == 0 )
            {
LABEL_11:
              *SharedVm = (__int64)(PoolMm + 40);
              if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v8, v15, (__int64)Flink) >= 0 )
              {
                v9 |= 8u;
                if ( (int)MiAllocateProcessShadow(v8, a5) >= 0 )
                {
                  v9 |= 0x40u;
                  if ( (unsigned int)PsReserveSessionMembership(&v26) )
                  {
                    v18 = a5;
                    *(_QWORD *)(v8 + 984) = 25LL;
                    TopLevelPage = MiAllocateTopLevelPage(v8, v18);
                    MiCreateNewProcessTopLevelMappings(v8, TopLevelPage);
                    *(_QWORD *)(v8 + 1040) = PoolMm;
                    PoolMm[104] = 0LL;
                    PoolMm[107] = 0LL;
                    PoolMm[108] = 0LL;
                    PoolMm[106] = PoolMm + 105;
                    PoolMm[105] = PoolMm + 105;
                    PsJoinSession(v8, v26);
                    return 1;
                  }
                }
              }
              goto LABEL_15;
            }
            v21 = MmGetCurrentProcessorColor();
            v22 = ExAllocatePoolMm(64LL, 0x68uLL, 1682467149, v21 | 0x80000000);
            if ( v22 )
            {
              PoolMm[5] = v22;
              goto LABEL_11;
            }
          }
        }
      }
LABEL_15:
      if ( (v9 & 0x40) != 0 )
        MiDeleteProcessShadow(v8, 0LL);
      if ( (v9 & 8) != 0 )
        PsReturnProcessQuota((struct _KPROCESS *)v8, v15, (__int64)Flink);
      if ( (v9 & 4) != 0 )
      {
        v23 = (void *)PoolMm[5];
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        ExFreePoolWithTag(PoolMm, 0);
      }
      if ( (v9 & 0x10) != 0 )
        MiReturnResident((__int64)v12, 0x19uLL);
      if ( (v9 & 2) != 0 )
        MiReturnCommit((__int64)v12, 25LL, 0);
      if ( (v9 & 1) != 0 )
      {
        v24 = *(_BYTE *)(v8 + 1774);
        if ( v24 != 0xFF )
        {
          MiDereferenceSlabIdentity((__int64)v12, v24);
          *(_BYTE *)(v8 + 1774) = -1;
        }
      }
    }
  }
  return 0;
}
