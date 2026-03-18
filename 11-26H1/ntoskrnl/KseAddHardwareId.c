/*
 * XREFs of KseAddHardwareId @ 0x1409E4D00
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x1409E3518 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x1409E4F4C (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409E5030 (KsepCacheUnlock.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  unsigned __int64 *QuantumTarget; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  char *v6; // rdi
  int v7; // ebx
  __int64 Paged; // rax
  __int64 v10; // rax
  UNICODE_STRING v11[2]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-18h]

  QuantumTarget = (unsigned __int64 *)stru_140E66B30.QuantumTarget;
  v13 = 0;
  memset(v11, 0, sizeof(v11));
  DestinationString = 0LL;
  if ( dword_140E66B04 != 2 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v10 + 4] = -1073741823;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v10) = 656069;
    if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(QuantumTarget, v3, v4, v5);
  v6 = (char *)KsepCacheLookup(QuantumTarget, v11);
  if ( !v6 )
  {
    Paged = KsepPoolAllocatePaged();
    v6 = (char *)Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_5;
    }
    KsepCacheInsert((__int64)QuantumTarget, (__int64)v6);
  }
  v7 = 0;
LABEL_5:
  KsepCacheUnlock((struct _KTHREAD *)QuantumTarget);
  if ( v7 < 0 )
  {
    if ( v6 )
    {
      KsepStringFree(v6 + 40);
      KsepPoolFreePaged(v6);
    }
  }
  return (unsigned int)v7;
}
