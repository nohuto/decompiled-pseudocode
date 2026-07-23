/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x1409E53DC
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x1404B855C (PspWow64SetupUserProcessAddressSpace.c)
 *     KeCopyXfdMaskToPeb @ 0x1404E1928 (KeCopyXfdMaskToPeb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     MmMapApiSetView @ 0x14086A2B4 (MmMapApiSetView.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409E5658 (PspPrepareSystemDllInitBlock.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     PspCopyAndFixupParameters @ 0x1409E5AE8 (PspCopyAndFixupParameters.c)
 *     PspLocateInPEManifest @ 0x1409E5E24 (PspLocateInPEManifest.c)
 *     PspMapSiloSharedDataView @ 0x1409E6308 (PspMapSiloSharedDataView.c)
 *     PspGetStandardHandleList @ 0x1409E661C (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // r15
  unsigned int *v8; // rbp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  int VirtualMemory; // ebx
  ULONG_PTR v16; // rdx
  __int64 result; // rax
  unsigned __int64 ReadyTime; // rcx
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  __int128 v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+58h] [rbp-60h]

  v22 = 0LL;
  v5 = 0LL;
  RegionSize[0] = 0LL;
  v8 = *(unsigned int **)(a4 + 216);
  v10 = (*(unsigned __int8 *)(a4 + 17) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = (__int128 *)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 88) == *(_DWORD *)(a4 + 288) )
  {
    v5 = &v21;
    result = PspGetStandardHandleList(a1, &v21);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v8[2];
  v13 = v12 & 0x1000060;
  if ( (PspSiloMonitorLock.CycleTime & 0x100000000LL) != 0 )
  {
    v12 |= 0x8000u;
    v8[2] = v12;
  }
  if ( !v8[259] )
    v8[259] = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[64];
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1016) )
    v8[2] = v12 | 0x20000000;
  KiStackAttachProcess(a2, 0, a3);
  if ( (*(_BYTE *)(a4 + 16) & 0x10) == 0 || (VirtualMemory = PspLocateInPEManifest(a2, a4), VirtualMemory >= 0) )
  {
    v16 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize[0] = v16;
    if ( !v13 && v16 < 0x20000 )
      RegionSize[0] = 0x20000LL;
    *(_QWORD *)(a4 + 224) = 0LL;
    VirtualMemory = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a4 + 224),
                      0LL,
                      RegionSize,
                      0x3000u,
                      4u);
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = PspCopyAndFixupParameters(a1, v5, a4);
      if ( VirtualMemory >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 1) != 0
          || (VirtualMemory = PspPrepareSystemDllInitBlock(0LL, a4), VirtualMemory >= 0) )
        {
          VirtualMemory = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( VirtualMemory >= 0 )
          {
            ReadyTime = a2[1].ReadyTime;
            if ( !ReadyTime
              || (VirtualMemory = PspPrepareSystemDllInitBlock(*(unsigned int *)(ReadyTime + 8), a4), VirtualMemory >= 0) )
            {
              KeCopyXfdMaskToPeb(a2);
              PspUpdatePebForAffinityChange(CurrentThread, a2);
              if ( (KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 1) == 0 )
              {
                VirtualMemory = MmMapApiSetView((__int64)a2);
                if ( VirtualMemory >= 0 )
                  VirtualMemory = PspMapSiloSharedDataView(a2);
              }
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0);
  return (unsigned int)VirtualMemory;
}
