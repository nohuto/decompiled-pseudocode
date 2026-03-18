/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x1408AFB20
 * Callers:
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x14085EBD8 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x1408AF75C (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408AF8E8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408AF9AC (CmpPrepareForSubtreeInvalidation.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // rsi
  __int64 i; // rax
  ULONG_PTR v8; // rdi
  __int64 *v9; // rax
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE v11; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 1656);
  v2 = *(_QWORD *)(a1 + 1648);
  memset(&v11, 0, sizeof(v11));
  v10 = 0LL;
  CmpAttachToRegistryProcess(&v11);
  CmpInitializeDelayDerefContext(&v10);
  if ( v1 )
  {
    v3 = (__int64 *)(v2 + 16);
    v4 = v1;
    v5 = v3;
    do
    {
      for ( i = *v3; i; i = *v9 )
      {
        v8 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v9 = (__int64 *)(v8 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v8);
          CmpDecommisssionKcb(v8);
          CmpDrainDelayDerefContext((_QWORD **)&v10);
          v9 = v5;
        }
      }
      v5 += 3;
      v3 += 3;
      --v4;
    }
    while ( v4 );
  }
  return CmpDetachFromRegistryProcess(&v11);
}
