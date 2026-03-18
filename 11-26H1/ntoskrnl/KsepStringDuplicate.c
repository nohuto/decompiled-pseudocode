/*
 * XREFs of KsepStringDuplicate @ 0x1409E5E2C
 * Callers:
 *     KsepDbGetSdbString @ 0x1407BCA08 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407BEA8C (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1407BECF8 (KsepRegistryCreateKey.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x1409E5254 (KsepRegistryOpenKey.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409E5B5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringTransform @ 0x1409E5CF0 (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x1409E6158 (KsepDbCacheReadDevice.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall KsepStringDuplicate(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  __int64 result; // rax
  void *Paged; // rax
  void *v8; // rsi
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v9 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v9) = 197196;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x24Cu, 0LL);
  }
  v4 = -1LL;
  *(_OWORD *)a1 = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  Paged = (void *)KsepPoolAllocatePaged();
  v8 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2, v5);
  *(_QWORD *)(a1 + 8) = v8;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
