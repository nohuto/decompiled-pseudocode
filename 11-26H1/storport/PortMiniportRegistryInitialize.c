/*
 * XREFs of PortMiniportRegistryInitialize @ 0x14005BF18
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortMiniportRegistryInitialize(__int64 a1)
{
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 24));
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 56) = 1;
  return result;
}
