/*
 * XREFs of KsepStringTransform @ 0x1409D7270
 * Callers:
 *     KseSetDeviceFlags @ 0x1407BF720 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 * Callees:
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepStringTransform(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  unsigned __int16 i; // ax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v8) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v8) = 197399;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("TargetString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x317u, 0LL);
  }
  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 197400;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x318u, 0LL);
  }
  result = KsepStringDuplicate(a1, a2);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1 & 0xFFFE; v2 < i; i = *(_WORD *)a1 >> 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v7 + 2LL * v2) == 92 )
        *(_WORD *)(v7 + 2LL * v2) = 33;
      ++v2;
    }
    return 0LL;
  }
  return result;
}
