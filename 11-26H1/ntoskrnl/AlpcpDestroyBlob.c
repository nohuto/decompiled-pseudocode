/*
 * XREFs of AlpcpDestroyBlob @ 0x1408EE980
 * Callers:
 *     AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rdx
  void *v6; // rcx

  v2 = a2;
  v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)];
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
    KeAbPostRelease(a1 - 16);
  }
  if ( (int)guard_dispatch_icall_no_overrides(a1, v5) >= 0 )
  {
    if ( (*(_BYTE *)(a1 - 32) & 2) != 0 )
    {
      ExFreeToNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v4 + 8), (PVOID)(a1 - 48));
    }
    else
    {
      v6 = (void *)(a1 - 48);
      if ( *(_QWORD *)(v4 + 48) )
        guard_dispatch_icall_no_overrides((__int64)v6, (__int64)&AlpcpLookasides);
      else
        ExFreePoolWithTag(v6, *(_DWORD *)(v4 + 4));
    }
  }
}
