/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140A851FC
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140935AA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  _DWORD *v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  PVOID *p_NormalContext; // rcx

  v1 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &unk_140F03500;
    if ( !v3 )
      v4 = &unk_140F03540;
    ExAcquireFastMutex(v4);
    if ( v1[6]-- == 1 )
    {
      p_NormalContext = (PVOID *)&xmmword_140F03580;
      if ( !v3 )
        p_NormalContext = &EtwpSecurityLock.SchedulerApc.NormalContext;
      RtlRbRemoveNode((__int64)p_NormalContext, (__int64)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex(v4);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
