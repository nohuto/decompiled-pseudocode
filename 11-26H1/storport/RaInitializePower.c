/*
 * XREFs of RaInitializePower @ 0x14005872C
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x140011518 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_BYTE *)(a1 + 4624) = 0;
  v3 = 316LL;
  if ( *(_DWORD *)a1 != 1314275652 )
    v3 = 524LL;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(v3 + a1) + 7) & 0xFFFFFFF8) + 1200, a2, (_QWORD *)a1);
  *(_QWORD *)(a1 + 4616) = result;
  return result;
}
