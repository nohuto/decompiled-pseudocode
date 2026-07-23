/*
 * XREFs of KsepStringDuplicate @ 0x1409D73AC
 * Callers:
 *     KsepDbGetSdbString @ 0x1407BFA68 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x1407C189C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407C1AEC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1407C1D58 (KsepRegistryCreateKey.c)
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringTransform @ 0x1409D7270 (KsepStringTransform.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     memmove @ 0x140742080 (memmove.c)
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
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 197196;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
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
