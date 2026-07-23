/*
 * XREFs of KseAddHardwareId @ 0x1409D80D0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 *     KsepCacheLookup @ 0x1409D7F70 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409D8054 (KsepCacheUnlock.c)
 *     KsepCacheInsert @ 0x140B2B9F0 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  unsigned __int64 *QuantumTarget; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  _QWORD *v6; // rdi
  int v7; // ebx
  __int64 Paged; // rax
  __int64 v10; // rax
  UNICODE_STRING v11[2]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-18h]

  QuantumTarget = (unsigned __int64 *)stru_140E66D40.QuantumTarget;
  v13 = 0;
  memset(v11, 0, sizeof(v11));
  DestinationString = 0LL;
  if ( dword_140E66D14 != 2 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v10) = -1073741823;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v10) = 656061;
    if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(QuantumTarget, v3, v4, v5);
  v6 = KsepCacheLookup((__int64)QuantumTarget, (__int64)v11);
  if ( !v6 )
  {
    Paged = KsepPoolAllocatePaged();
    v6 = (_QWORD *)Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_5;
    }
    KsepCacheInsert(QuantumTarget, v6);
  }
  v7 = 0;
LABEL_5:
  KsepCacheUnlock((struct _KTHREAD *)QuantumTarget);
  if ( v7 < 0 )
  {
    if ( v6 )
    {
      KsepStringFree((__int64)(v6 + 5));
      KsepPoolFreePaged(v6);
    }
  }
  return (unsigned int)v7;
}
