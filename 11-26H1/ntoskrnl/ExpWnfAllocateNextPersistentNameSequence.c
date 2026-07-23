/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1409CB178
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1409CB070 (ExpWnfGenerateStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1409C907C (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  HANDLE v2; // r12
  unsigned __int64 *v3; // r15
  int v4; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v6; // r13
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  NTSTATUS v13; // eax
  unsigned __int64 v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 *v23; // [rsp+48h] [rbp-28h]
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-20h] BYREF

  v23 = a2;
  ResultLength = 0;
  v2 = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  KeyHandle = 0LL;
  v3 = a2;
  v4 = 0;
  NameStoreRegistryRoot = 0;
  v6 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Data = (unsigned __int64)CurrentServerSiloGlobals[57].Blink;
  if ( Data )
    goto LABEL_15;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_39;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[57], 0LL, 0LL, v9);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[57], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CurrentServerSiloGlobals[57],
      v10,
      (__int64)&CurrentServerSiloGlobals[57]);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v4 = 1;
  v2 = KeyHandle;
  if ( CurrentServerSiloGlobals[57].Blink )
    goto LABEL_15;
  v13 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v13;
  if ( v13 < 0 )
  {
    if ( v13 != -1073741772 )
      goto LABEL_36;
    goto LABEL_15;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64(
      (volatile __int64 *)&CurrentServerSiloGlobals[56].Blink,
      *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)&CurrentServerSiloGlobals[57].Blink, Data);
    do
LABEL_15:
      v14 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentServerSiloGlobals[56].Blink);
    while ( !v14 );
    Data = (unsigned __int64)CurrentServerSiloGlobals[57].Blink;
    if ( v14 > Data )
    {
      if ( !v2 )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_35;
        v2 = KeyHandle;
      }
      if ( !v4 )
      {
        v15 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[57], 0LL, 0LL, v8);
        v17 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[57], 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CurrentServerSiloGlobals[57],
            v15,
            (__int64)&CurrentServerSiloGlobals[57]);
        if ( v17 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v17, v16);
          else
            *((_BYTE *)v17 + 10) = 1;
        }
        v3 = v23;
        v4 = 1;
      }
      if ( (struct _LIST_ENTRY *)v14 > CurrentServerSiloGlobals[57].Blink )
      {
        v18 = (unsigned __int64)&CurrentServerSiloGlobals[57].Blink[6].Flink + 4;
        Data = v18;
        if ( v18 < v14 )
        {
          do
            v18 += 100LL;
          while ( v18 < v14 );
          Data = v18;
        }
        NameStoreRegistryRoot = ZwSetValueKey(
                                  v2,
                                  (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                  0,
                                  3u,
                                  &Data,
                                  8u);
        if ( NameStoreRegistryRoot < 0 )
        {
LABEL_35:
          if ( !v4 )
            goto LABEL_39;
          goto LABEL_36;
        }
        _InterlockedExchange64((volatile __int64 *)&CurrentServerSiloGlobals[57].Blink, Data);
      }
    }
    *v3 = v14;
    goto LABEL_35;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_36:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CurrentServerSiloGlobals[57], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CurrentServerSiloGlobals[57]);
  KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[57]);
LABEL_39:
  PsDetachSiloFromCurrentThread(v6);
  return (unsigned int)NameStoreRegistryRoot;
}
