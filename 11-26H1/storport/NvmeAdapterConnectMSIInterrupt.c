/*
 * XREFs of NvmeAdapterConnectMSIInterrupt @ 0x140198930
 * Callers:
 *     NvmeAdapterConnectInterrupt @ 0x1400D3FE4 (NvmeAdapterConnectInterrupt.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterConnectMSIInterrupt(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  KSERVICE_ROUTINE *v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  PKINTERRUPT *InterruptObject; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 i; // rbx
  __int64 v16; // rsi
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = 0LL;
  memset_0(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v19;
  v4 = *(_QWORD *)(a1 + 400);
  Parameters.Version = 3;
  if ( (*(_DWORD *)(v4 + 184) & 0x40000000) != 0 )
  {
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)PCIeNvmeAdapterMSIInterruptRoutine;
    v5 = (KSERVICE_ROUTINE *)PCIeNvmeAdapterInterruptRoutine;
  }
  else
  {
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)NvmeAdapterMSIInterruptRoutine;
    v5 = (KSERVICE_ROUTINE *)NvmeAdapterInterruptRoutine;
  }
  v6 = *(_QWORD *)(a1 + 600);
  Parameters.MessageBased.FallBackServiceRoutine = v5;
  Parameters.FullySpecified.ServiceContext = (PVOID)a1;
  if ( *(_DWORD *)(v6 + 104) == 2 )
  {
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 112));
    Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(*(_QWORD *)(a1 + 600) + 112LL);
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a2;
  v7 = IoConnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 144) &= ~0x800uLL;
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 600);
  if ( v7 < 0 )
  {
    *(_QWORD *)v9 = 0LL;
  }
  else
  {
    *(_DWORD *)(v9 + 12) = Parameters.Version;
    v10 = *(_QWORD **)(a1 + 600);
    if ( Parameters.Version == 3 )
    {
      InterruptObject = Parameters.FullySpecified.InterruptObject;
      *(_QWORD *)(a1 + 144) |= 0x800uLL;
      v10[15] = *InterruptObject;
      v12 = *(_QWORD *)(a1 + 600);
      if ( (*(_DWORD *)(a1 + 144) & 0x200LL) == 0 || !*(_QWORD *)(v12 + 128) )
      {
        v13 = *(_QWORD *)(a1 + 600);
        *(_QWORD *)(v13 + 128) = RaidAllocatePool(
                                   64LL,
                                   16LL * *(unsigned int *)(*(_QWORD *)(v12 + 120) + 4LL),
                                   1917083986LL,
                                   *(_QWORD *)(a1 + 8));
      }
      v14 = *(_QWORD *)(a1 + 600);
      if ( *(_QWORD *)(v14 + 128) )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v14 + 120) + 4LL); i = (unsigned int)(i + 1) )
        {
          v16 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(
                 *(PKINTERRUPT *)(*(_QWORD *)(v14 + 120) + 48 * i + 24),
                 (PGROUP_AFFINITY)(v16 + *(_QWORD *)(v14 + 128))) < 0 )
          {
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 128LL) + v16 + 8) = -1;
            *(_QWORD *)(v16 + *(_QWORD *)(*(_QWORD *)(a1 + 600) + 128LL)) = 0LL;
          }
          v14 = *(_QWORD *)(a1 + 600);
        }
      }
    }
    else
    {
      *v10 = v19;
    }
  }
  return v8;
}
