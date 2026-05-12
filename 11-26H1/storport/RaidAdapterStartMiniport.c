/*
 * XREFs of RaidAdapterStartMiniport @ 0x140053D94
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 * Callees:
 *     InitializeBusesWithVmLunsBitmap @ 0x1400097CC (InitializeBusesWithVmLunsBitmap.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     StorEnableAdapterHealthEvents @ 0x14000F3D8 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14000F8DC (StorEnableAdapterDiagnosticEvents.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14000FACC (RaCallMiniportAdapterControlSafe.c)
 *     RaCallMiniportFindAdapter @ 0x140042B00 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x140049CE4 (RaCallMiniportHwInitialize.c)
 *     RaidInitializePerfOptsPassive @ 0x140054268 (RaidInitializePerfOptsPassive.c)
 *     StorEnableAdapterOperationalEvents @ 0x14005BE70 (StorEnableAdapterOperationalEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x14005C398 (StorEnableAdapterEtwTracing.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterConnectInterrupt @ 0x1400606E4 (RaidAdapterConnectInterrupt.c)
 *     RaidAdapterStartRegistryWatch @ 0x140069918 (RaidAdapterStartRegistryWatch.c)
 *     RaidPreInitializePerfOpts @ 0x14006DB08 (RaidPreInitializePerfOpts.c)
 *     StorLogMFNDCapability @ 0x14006E24C (StorLogMFNDCapability.c)
 *     StorValidateMFNDCapabilities @ 0x14006F314 (StorValidateMFNDCapabilities.c)
 *     StorCheckForNvmeTimeoutUpdates @ 0x140096B64 (StorCheckForNvmeTimeoutUpdates.c)
 *     StorInitializeMFND @ 0x1400CA970 (StorInitializeMFND.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaInitializeMiniport @ 0x1401835AC (RaInitializeMiniport.c)
 *     StorGetMFNDCapabilities @ 0x140191E14 (StorGetMFNDCapabilities.c)
 *     RaInitializeUniqueTagging @ 0x1401AF7F0 (RaInitializeUniqueTagging.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  signed int NVMeIdentifyInfo; // edi
  __int64 v6; // r8
  void *v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edx
  int v12; // eax
  KIRQL v13; // al
  KIRQL v14; // bp
  _BYTE *v15; // rsi
  __int64 (__fastcall *v16)(__int64); // rax
  char v17; // al
  char *v18; // rdi
  PVOID *v19; // rsi
  void *Pool; // rax
  char v21; // si
  _OWORD *v22; // rdi
  _OWORD *v23; // rdx
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF
  _OWORD *v27; // [rsp+B0h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225486LL;
  v4 = a1 + 376;
  NVMeIdentifyInfo = RaInitializeMiniport(a1 + 376, a2, a1, a1 + 360);
  if ( NVMeIdentifyInfo < 0 )
  {
    *(_DWORD *)(a1 + 6252) = 5;
    return (unsigned int)NVMeIdentifyInfo;
  }
  if ( EnableRegistryWatch && !*(_QWORD *)(a1 + 6112) )
    RaidAdapterStartRegistryWatch(a1);
  v7 = *(void **)(a1 + 2064);
  *(_BYTE *)(a1 + 4434) = 1;
  v8 = RaCallMiniportFindAdapter(v4, v7, v6);
  *(_BYTE *)(a1 + 108) |= 0x40u;
  NVMeIdentifyInfo = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(a1 + 6252) = 6;
    return (unsigned int)NVMeIdentifyInfo;
  }
  LOBYTE(v9) = StorEtwLoggingEnabled;
  StorEnableAdapterEtwTracing(a1, v9);
  StorEnableAdapterOperationalEvents(a1);
  StorEnableAdapterHealthEvents(a1);
  StorEnableAdapterDiagnosticEvents(a1);
  if ( !*(_DWORD *)(a1 + 944) )
  {
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      if ( *(_QWORD *)(a1 + 4352) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4352) = -1LL;
      *(_QWORD *)(a1 + 4368) = 0x100000000LL;
      goto LABEL_19;
    }
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 528) - 3 <= 1 )
    {
      if ( *(_QWORD *)(a1 + 4352) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4352) = -1LL;
      *(_QWORD *)(a1 + 4368) = 0LL;
LABEL_19:
      *(_QWORD *)(a1 + 4384) = -1LL;
    }
  }
  v10 = *(_BYTE *)(a1 + 580);
  v11 = *(_DWORD *)(a1 + 532);
  *(_DWORD *)(a1 + 888) = v11;
  *(_BYTE *)(a1 + 4434) = v10 == 0;
  if ( v10 )
  {
    v14 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 544);
    *(_BYTE *)(a1 + 107) &= ~1u;
    *(_DWORD *)(a1 + 4400) = v12;
    if ( v12 )
    {
      *(_BYTE *)(a1 + 4432) = 1;
      if ( !v11 )
        *(_DWORD *)(a1 + 4400) = 1;
    }
    NVMeIdentifyInfo = RaidAdapterConnectInterrupt(a1);
    if ( NVMeIdentifyInfo < 0 )
    {
      *(_DWORD *)(a1 + 6252) = 7;
      return (unsigned int)NVMeIdentifyInfo;
    }
    NVMeIdentifyInfo = RaidPreInitializePerfOpts(a1);
    if ( NVMeIdentifyInfo < 0 )
    {
      *(_DWORD *)(a1 + 6252) = 8;
      return (unsigned int)NVMeIdentifyInfo;
    }
    v13 = RaidAdapterAcquireInterruptLock(a1);
    *(_BYTE *)(a1 + 107) |= 1u;
    v14 = v13;
  }
  v15 = (_BYTE *)(a1 + 104);
  *(_BYTE *)(a1 + 104) |= 0x10u;
  NVMeIdentifyInfo = RaCallMiniportHwInitialize(v4);
  if ( NVMeIdentifyInfo >= 0 )
    *v15 |= 1u;
  if ( *(_BYTE *)(a1 + 4434) )
    RaidAdapterReleaseInterruptLock(a1, v14);
  if ( NVMeIdentifyInfo >= 0 )
  {
    v16 = *(__int64 (__fastcall **)(__int64))(a1 + 4392);
    if ( !v16 || (v17 = v16(*(_QWORD *)(a1 + 616) + 16LL), NVMeIdentifyInfo = v17 == 0 ? 0xC0000001 : 0, v17) )
    {
      *(_BYTE *)(a1 + 104) = *v15 & 0xEF;
      RaidInitializePerfOptsPassive(a1);
      RaCallMiniportAdapterControlSafe(a1 + 376, 23LL);
      v18 = (char *)(a1 + 110);
      if ( *(char *)(a1 + 110) >= 0
        && (*(_DWORD *)(a1 + 604) & 0x80u) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 188LL) & 2) != 0 )
      {
        RaInitializeUniqueTagging(a1);
        v18 = (char *)(a1 + 110);
      }
      if ( *(int *)(*(_QWORD *)(a1 + 608) + 184LL) < 0 )
      {
        if ( (unsigned int)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline() )
          StorCheckForNvmeTimeoutUpdates(a1);
        v19 = (PVOID *)(a1 + 6064);
        if ( *v18 < 0 && (Pool = *v19) != 0LL
          || (Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8)), (*v19 = Pool) != 0LL) )
        {
          NVMeIdentifyInfo = StorGetNVMeIdentifyInfo(a1, 0, 0, 1, v24, v25, 0, Pool);
          if ( NVMeIdentifyInfo < 0 )
          {
            *(_BYTE *)(a1 + 112) |= 8u;
            if ( *v19 )
            {
              ExFreePoolWithTag(*v19, 0x49436152u);
              *v19 = 0LL;
            }
            *(_DWORD *)(a1 + 6252) = 17;
            return (unsigned int)NVMeIdentifyInfo;
          }
        }
        if ( MFNDEnabled )
        {
          v27 = 0LL;
          v26 = 0;
          v21 = 0;
          if ( (int)StorGetMFNDCapabilities(a1, &v27, &v26) >= 0 )
          {
            v22 = v27;
            if ( v27 )
            {
              if ( (unsigned __int8)StorValidateMFNDCapabilities(v27, *(_QWORD *)(a1 + 6216)) )
              {
                if ( v23 )
                {
                  *v23 = *v22;
                  v23[1] = v22[1];
                  v23[2] = v22[2];
                  v23[3] = v22[3];
                  v23[4] = v22[4];
                  v23[5] = v22[5];
                  v23[6] = v22[6];
                  v23[7] = v22[7];
                }
                else
                {
                  *(_QWORD *)(a1 + 6216) = v22;
                  v22 = 0LL;
                }
                StorInitializeMFND(a1);
                *(_BYTE *)(a1 + 111) |= 1u;
              }
              else
              {
                v21 = 1;
                if ( v23 )
                {
                  *v23 = *v22;
                  v23[1] = v22[1];
                  v23[2] = v22[2];
                  v23[3] = v22[3];
                  v23[4] = v22[4];
                  v23[5] = v22[5];
                  v23[6] = v22[6];
                  v23[7] = v22[7];
                }
                else
                {
                  *(_QWORD *)(a1 + 6216) = v22;
                  v22 = 0LL;
                }
                *(_BYTE *)(a1 + 111) &= ~1u;
              }
              LOBYTE(v23) = v21;
              StorLogMFNDCapability(a1, v23, v26);
              if ( v22 )
                ExFreePoolWithTag(v22, 0x464D6152u);
            }
          }
        }
      }
      NVMeIdentifyInfo = InitializeBusesWithVmLunsBitmap(a1);
      if ( NVMeIdentifyInfo < 0 )
        *(_DWORD *)(a1 + 6252) = 11;
      return (unsigned int)NVMeIdentifyInfo;
    }
    *(_DWORD *)(a1 + 6252) = 10;
  }
  else
  {
    *(_DWORD *)(a1 + 6252) = 9;
  }
  return (unsigned int)NVMeIdentifyInfo;
}
