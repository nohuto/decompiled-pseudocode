/*
 * XREFs of NvmeAdapterStartMiniport @ 0x1400DE784
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaCallMiniportFindAdapter @ 0x140042B00 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x140049CE4 (RaCallMiniportHwInitialize.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x140078794 (NvmeCallMiniportAdapterControlSafe.c)
 *     NvmeAdapterAcquireInterruptLock @ 0x1400D295C (NvmeAdapterAcquireInterruptLock.c)
 *     NvmeAdapterConnectInterrupt @ 0x1400D3FE4 (NvmeAdapterConnectInterrupt.c)
 *     NvmeAdapterReleaseInterruptLock @ 0x1400DBE58 (NvmeAdapterReleaseInterruptLock.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400DEAB0 (NvmeAdapterStartRegistryWatch.c)
 *     NvmePreInitializePerfOpts @ 0x1400E2E20 (NvmePreInitializePerfOpts.c)
 *     NvmeControllerAdvancedInitialize @ 0x1400F057C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaInitializeMiniport @ 0x1401835AC (RaInitializeMiniport.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 */

__int64 __fastcall NvmeAdapterStartMiniport(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdi
  char v8; // r14
  __int64 v9; // r8
  char v10; // cl
  unsigned __int64 v11; // rdx
  KIRQL v12; // bp
  int v13; // eax
  __int64 v14; // rcx
  KIRQL v15; // al
  signed int v16; // esi
  char v17; // al

  v2 = (_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(a1 + 144) & 0x200LL;
  if ( !a2 )
    return 3221225486LL;
  result = RaInitializeMiniport(
             a1 + 168,
             a2,
             a1,
             (*(_QWORD *)(a1 + 600) + 88LL) & -(__int64)(*(_QWORD *)(a1 + 600) != 0LL));
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1028) = 6;
    return result;
  }
  v7 = v2;
  if ( EnableRegistryWatch && !*(_QWORD *)(a1 + 1008) )
  {
    NvmeAdapterStartRegistryWatch(a1);
    v7 = (_QWORD *)(a1 + 144);
  }
  *v2 |= 0x1000uLL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v8 = 1;
    if ( !v4 )
    {
      LOBYTE(v6) = 1;
      result = NvmeAdapterCreateNvmeController(a1, 0, v6, 0, a1 + 1152);
      if ( (int)result < 0 )
        return result;
    }
    result = NvmeControllerEssentialInitialize(*(PVOID *)(a1 + 1152));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 376) |= 2u;
    v7 = (_QWORD *)(a1 + 144);
  }
  else
  {
    v8 = 0;
  }
  result = RaCallMiniportFindAdapter(a1 + 168, *(void **)(a1 + 912), v6);
  v9 = *(_QWORD *)(a1 + 144) | 0x40LL;
  *v7 = v9;
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1028) = 7;
    return result;
  }
  v10 = *(_BYTE *)(a1 + 372);
  v11 = v9 & 0xFFFFFFFFFFFFEFFFuLL | -(__int64)(v10 == 0) & 0x1000;
  *v7 = v11;
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x200) == 0 )
    {
      v13 = *(_DWORD *)(a1 + 336);
      v14 = *(_QWORD *)(a1 + 600);
      *v7 = v11 & 0xFFFFFFFFFFFFFF7FuLL;
      *(_DWORD *)(v14 + 104) = v13;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 600) + 104LL) )
      {
        *v7 |= 0x400uLL;
        v7 = (_QWORD *)(a1 + 144);
      }
      result = NvmeAdapterConnectInterrupt(a1);
      if ( (int)result < 0 )
      {
        *(_DWORD *)(a1 + 1028) = 8;
        return result;
      }
      result = NvmePreInitializePerfOpts(a1);
      if ( (int)result < 0 )
      {
        *(_DWORD *)(a1 + 1028) = 9;
        return result;
      }
      v15 = NvmeAdapterAcquireInterruptLock(a1);
      *v7 |= 0x80uLL;
      v12 = v15;
      goto LABEL_27;
    }
    v7 = (_QWORD *)(a1 + 144);
  }
  v12 = 0;
LABEL_27:
  if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    *(_WORD *)(a1 + 500) = 1;
    *(_DWORD *)(a1 + 496) = 48;
    *(_QWORD *)(a1 + 512) = NvmeControllerStorMQCompletionNotifyWithCallback;
    result = NvmeCallMiniportAdapterControlSafe(a1 + 168);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1028) = 15;
      return result;
    }
  }
  *v7 |= 0x20uLL;
  v16 = RaCallMiniportHwInitialize(a1 + 168);
  if ( v16 >= 0 )
    *v7 |= 2uLL;
  if ( (*(_DWORD *)v7 & 0x1000LL) != 0 )
    NvmeAdapterReleaseInterruptLock(a1, v12);
  if ( v16 < 0 )
  {
    *(_DWORD *)(a1 + 1028) = 10;
    return (unsigned int)v16;
  }
  if ( !*(_QWORD *)(a1 + 984) )
  {
LABEL_41:
    *(_QWORD *)(a1 + 144) &= ~0x20uLL;
    NvmeCallMiniportAdapterControlSafe(a1 + 168);
    return (unsigned int)v16;
  }
  if ( !v8 || (result = NvmeControllerAdvancedInitialize(*(PVOID *)(a1 + 1152)), (int)result >= 0) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(a1 + 984))(*(_QWORD *)(a1 + 408) + 16LL);
    v16 = v17 == 0 ? 0xC0000001 : 0;
    if ( !v17 )
    {
      *(_DWORD *)(a1 + 1028) = 11;
      return (unsigned int)v16;
    }
    goto LABEL_41;
  }
  return result;
}
