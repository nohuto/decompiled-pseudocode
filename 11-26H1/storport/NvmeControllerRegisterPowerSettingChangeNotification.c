/*
 * XREFs of NvmeControllerRegisterPowerSettingChangeNotification @ 0x140127410
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeControllerRegisterPowerSettingChangeNotification(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 Pool; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi

  v2 = (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2 | 8u) >> 1;
  Pool = RaidAllocatePool(64LL, 24 * (v2 + 1LL), 1330667858LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  v4 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = v2;
    *(_QWORD *)(Pool + 8) = Pool + 24;
    *(_QWORD *)(Pool + 16) = Pool + 16LL * v2 + 24;
    *(GUID *)(Pool + 24) = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    *(GUID *)(Pool + 40) = GUID_NVME_POWER_IDLE_TIMEOUT1;
    *(GUID *)(*(_QWORD *)(Pool + 8) + 32LL) = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    *(GUID *)(*(_QWORD *)(Pool + 8) + 48LL) = GUID_NVME_POWER_IDLE_TIMEOUT2;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2) != 0 )
      *(GUID *)(*(_QWORD *)(Pool + 8) + 64LL) = GUID_NVME_POWER_NOPPME;
    v5 = 0LL;
    do
    {
      PoRegisterPowerSettingCallback(
        *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL),
        (LPCGUID)(*(_QWORD *)(v4 + 8) + 16LL * (unsigned int)v5),
        NvmePowerSettingCallback,
        *(PVOID *)(a1 + 128),
        (PVOID *)(*(_QWORD *)(v4 + 16) + 8 * v5));
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v2 );
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 312LL) = v4;
  }
  return 0LL;
}
