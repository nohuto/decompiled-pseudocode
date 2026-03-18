/*
 * XREFs of KsepEngineInitialize @ 0x140CCCDD4
 * Callers:
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 * Callees:
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 *     KsepCacheInitialize @ 0x1407BEB6C (KsepCacheInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 */

__int64 __fastcall KsepEngineInitialize(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rax

  if ( !a1 )
  {
    v2 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v2 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v2) = 131862;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x316u, 0LL);
  }
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[5] = a1 + 4;
  a1[4] = a1 + 4;
  a1[6] = 0LL;
  v3 = KsepCacheInitialize(
         (__int64)a1,
         (__int64)KsepCacheDeviceEqual,
         (__int64)KsepCacheDeviceHash,
         (__int64)KsepCacheDeviceFree);
  a1[9] = v3;
  if ( !v3 )
    return 3221225495LL;
  v6 = KsepCacheInitialize(v4, (__int64)KsepCacheHwIdEqual, (__int64)KsepCacheHwIdHash, (__int64)KsepCacheHwIdFree);
  a1[10] = v6;
  if ( !v6 )
    return 3221225495LL;
  a1[7] = KseGetIoCallbacks;
  a1[8] = KseSetCompletionHook;
  result = KsepEngineReadFlags(&KseEngine);
  if ( (int)result >= 0 && (KseEngine & 3) == 3 )
    return 3221225659LL;
  return result;
}
