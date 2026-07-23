/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x1409BE87C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // si
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY **v6; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    p_Blink = (struct _LIST_ENTRY **)&stru_140F03830.SchedulerApc.Reserved[1];
    if ( !v3 )
      p_Blink = &stru_140F03830.MutantListHead.Blink;
    ExAcquireFastMutex((PKGUARDED_MUTEX)p_Blink);
    if ( (*(_DWORD *)(v1 + 24))-- == 1 )
    {
      v6 = &stru_140F03830.SuspendEvent.Header.WaitListHead.Blink;
      if ( !v3 )
        v6 = (struct _LIST_ENTRY **)&stru_140F03830.PriorityFloorCounts[24];
      RtlRbRemoveNode((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)p_Blink);
    if ( v1 )
      ExFreePoolWithTag((PVOID)v1, 0);
  }
  return 0LL;
}
