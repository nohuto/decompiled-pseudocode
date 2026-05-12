/*
 * XREFs of StorInitializeMFND @ 0x1400CA970
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14000FACC (RaCallMiniportAdapterControlSafe.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400CD7C8 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorInitMFNDAsyncEventHandling @ 0x140191F6C (StorInitMFNDAsyncEventHandling.c)
 */

__int64 __fastcall StorInitializeMFND(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 Pool; // rax
  int updated; // eax
  char v6; // cl
  char v7; // dl
  char v8; // cl
  bool v9; // sf
  __int64 v10; // rcx
  __int64 v11; // rbx

  v1 = (__int64 *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 6224) )
  {
    Pool = RaidAllocatePool(64LL, 184LL, 1179476306LL, *v1);
    *(_QWORD *)(a1 + 6224) = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  updated = StorQueryAndUpdateCachedMFNDOperationInfo(a1);
  v6 = *(_BYTE *)(a1 + 111);
  v7 = v6 | 2;
  v8 = v6 & 0xFD;
  if ( updated < 0 )
    v7 = v8;
  v9 = *(char *)(a1 + 110) < 0;
  *(_BYTE *)(a1 + 111) = v7;
  if ( !v9 )
  {
    **(_WORD **)(a1 + 6224) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 4LL) = 184;
    StorInitMFNDAsyncEventHandling(a1);
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(a1 + 6224) + 80LL), SynchronizationEvent, 0);
    v10 = *(_QWORD *)(a1 + 6224);
    *(_DWORD *)(v10 + 128) = 1;
    *(_QWORD *)(v10 + 136) = 0LL;
    *(_DWORD *)(v10 + 144) = 0;
    KeInitializeEvent((PRKEVENT)(v10 + 152), SynchronizationEvent, 0);
  }
  RaCallMiniportAdapterControlSafe(a1 + 376, 23LL);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 6224) + 112LL) )
  {
    v11 = *(_QWORD *)(a1 + 6224);
    *(_QWORD *)(v11 + 112) = RaidAllocatePool(64LL, 28LL, 1179476306LL, *v1);
  }
  return 0LL;
}
