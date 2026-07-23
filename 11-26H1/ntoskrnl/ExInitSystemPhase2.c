/*
 * XREFs of ExInitSystemPhase2 @ 0x140CEA3E4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExpGetOriginalImageVersionRegistryValue @ 0x14084C968 (ExpGetOriginalImageVersionRegistryValue.c)
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  ExpWatchProductTypeInitialization();
  *(_DWORD *)(MmWriteableSharedUserData + 736) = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  v1 = 0;
  *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[32] = 0;
  result = ExpGetOriginalImageVersionRegistryValue(&v1);
  if ( (int)result >= 0 )
  {
    result = v1;
    *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[32] = v1;
  }
  return result;
}
