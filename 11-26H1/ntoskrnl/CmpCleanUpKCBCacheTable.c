/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x1408B6020
 * Callers:
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140864EC8 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x1408B5C5C (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408B5DE8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408CC900 (CmpDecommisssionKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 i; // rax
  ULONG_PTR v7; // rdi
  __int64 *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 1656);
  v2 = *(_QWORD *)(a1 + 1648);
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  CmpInitializeDelayDerefContext(&v9);
  if ( v1 )
  {
    v3 = (__int64 *)(v2 + 16);
    v4 = v1;
    do
    {
      for ( i = *v3; i; i = *v8 )
      {
        v7 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v8 = (__int64 *)(v7 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v7);
          CmpDecommisssionKcb(v7);
          CmpDrainDelayDerefContext((_QWORD **)&v9);
          v8 = v3;
        }
      }
      v3 += 3;
      --v4;
    }
    while ( v4 );
  }
  return CmpDetachFromRegistryProcess(&ApcState);
}
