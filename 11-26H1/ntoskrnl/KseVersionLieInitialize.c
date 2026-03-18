/*
 * XREFs of KseVersionLieInitialize @ 0x140CCDC54
 * Callers:
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407BCFC0 (KseRegisterShim.c)
 */

__int64 KseVersionLieInitialize()
{
  int v0; // eax
  __int64 v1; // rcx
  char StackBase; // al
  int v3; // eax
  __int64 v4; // rcx
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rdx
  char v8; // al

  v0 = KseRegisterShim((__int64)&Win7VersionLieShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v1 + 4] = v0;
    StackBase = (char)stru_140E66B30.StackBase;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v1) = 786673;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(12LL, (int)"Built-in Win7 version lie shims: failed to register.\n");
    KsepLogError(12LL, (__int64)"Built-in Win7 version lie shims: failed to register.\n");
  }
  v3 = KseRegisterShim((__int64)&Win8VersionLieShim, 0LL, 0LL);
  if ( v3 < 0 )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v4 + 4] = v3;
    v5 = (char)stru_140E66B30.StackBase;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v4) = 786681;
    if ( (v5 & 2) != 0 )
      KsepDebugPrint(12LL, (int)"Built-in Win8 version lie shims: failed to register.\n");
    KsepLogError(12LL, (__int64)"Built-in Win8 version lie shims: failed to register.\n");
  }
  result = KseRegisterShim((__int64)&Win81VersionLieShim, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v7 + 4] = result;
    v8 = (char)stru_140E66B30.StackBase;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v7) = 786689;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(12LL, (int)"Built-in Win8.1 version lie shims: failed to register.\n");
    return KsepLogError(12LL, (__int64)"Built-in Win8.1 version lie shims: failed to register.\n");
  }
  return result;
}
