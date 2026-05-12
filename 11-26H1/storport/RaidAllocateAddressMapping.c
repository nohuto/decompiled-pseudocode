/*
 * XREFs of RaidAllocateAddressMapping @ 0x140092974
 * Callers:
 *     NvmeGetDeviceBaseEx @ 0x140079BE8 (NvmeGetDeviceBaseEx.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     StorpGetDeviceBase2 @ 0x14007CD04 (StorpGetDeviceBase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateAddressMapping(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 Pool; // rax
  __int64 v11; // rdx
  __int64 result; // rax

  Pool = RaidAllocatePool(64LL, 40LL, 1296130386LL, a6);
  v11 = Pool;
  if ( !Pool )
    return 3221225495LL;
  *(_QWORD *)Pool = *a1;
  *a1 = Pool;
  *(_DWORD *)(Pool + 32) = a5;
  result = 0LL;
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 16) = a4;
  return result;
}
