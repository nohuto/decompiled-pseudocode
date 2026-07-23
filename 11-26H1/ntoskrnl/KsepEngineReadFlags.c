/*
 * XREFs of KsepEngineReadFlags @ 0x140D0E4EC
 * Callers:
 *     KsepEngineInitialize @ 0x140CD2F34 (KsepEngineInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     KsepRegistryQueryDWORD @ 0x1407C2098 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KsepRegistryCloseKey @ 0x1409D8784 (KsepRegistryCloseKey.c)
 */

__int64 __fastcall KsepEngineReadFlags(unsigned int *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  int v4; // eax
  HANDLE v5; // rdi
  unsigned int v6; // edi
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+60h] [rbp+38h] BYREF
  int v13; // [rsp+68h] [rbp+40h] BYREF
  int v14; // [rsp+70h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+50h] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  v14 = 0;
  if ( !a1 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v3) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v3) = 262242;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x62u, 0LL);
  }
  *a1 = 0;
  v4 = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v4 )
  {
    if ( v4 == -1073741772 )
      a1[2] |= 2u;
  }
  else
  {
    v5 = KeyHandle;
    v12 = 0;
    v13 = 0;
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDeviceFlags", &v12) && v12 == 1 )
    {
      v1 = 2;
      a1[2] |= 4u;
    }
    if ( !KsepRegistryQueryDWORD(v5, L"DisableDriverShims", &v13) && v13 == 1 )
    {
      v1 |= 1u;
      a1[2] |= 8u;
    }
    *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                      * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                             &KsepHistoryMessagesIndex,
                                                                             1u)
                                                        + 1) & 0x3F)] = 262273LL;
    if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Engine has group policy flags: %08x\n", v1);
    KsepLogInfo(0LL, (__int64)"KSE: Engine has group policy flags: %08x\n", v1);
    KsepRegistryCloseKey(v5);
    KeyHandle = 0LL;
  }
  v6 = KsepRegistryOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility", 0LL, &KeyHandle);
  if ( v6 == -1073741772 )
  {
    a1[2] |= 1u;
LABEL_18:
    v6 = 0;
    goto LABEL_35;
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    v8 = KsepRegistryQueryDWORD(KeyHandle, L"DisableFlags", &v14);
    v6 = v8;
    if ( v8 == -1073741772 )
      goto LABEL_18;
    if ( v8 >= 0 )
    {
      v10 = v14 & 3;
      *a1 = v10;
      if ( (v10 & 1) != 0 )
        a1[2] |= 0x20u;
      if ( (v10 & 2) != 0 )
        a1[2] |= 0x10u;
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 262341LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: Engine initialized with registry flags: %08x\n", *a1);
      KsepLogInfo(0LL, (__int64)"KSE: Engine initialized with registry flags: %08x\n", *a1);
    }
    else
    {
      v9 = ((unsigned __int8)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                               1u)
          + 1) & 0x3F;
      *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = v6;
      *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 262324;
      if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v6);
      KsepLogError(0LL, (__int64)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v6);
    }
  }
  else
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v7) = v6;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v7) = 262302;
    if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Error reading compatibility key: status: %08x\n", v6);
    KsepLogError(0LL, (__int64)"KSE: Error reading compatibility key: status: %08x\n", v6);
  }
LABEL_35:
  *a1 |= v1;
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 262352LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(0LL, (int)"KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepLogInfo(0LL, (__int64)"KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepRegistryCloseKey(KeyHandle);
  return v6;
}
