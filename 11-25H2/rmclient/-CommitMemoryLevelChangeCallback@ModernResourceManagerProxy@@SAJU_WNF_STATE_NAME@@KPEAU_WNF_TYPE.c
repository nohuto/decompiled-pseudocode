/*
 * XREFs of ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180002C10
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLevelChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5)
{
  char *v7; // rbx
  void (__fastcall *v8)(const void *); // rsi

  if ( a5 )
  {
    v7 = (char *)(a4 + 12);
    CempLockAcquireExclusive(a4 + 12);
    v8 = (void (__fastcall *)(const void *))a4[3];
    *((_DWORD *)v7 + 2) = 0;
    RtlReleaseSRWLockExclusive(v7);
    if ( v8 )
      v8(a5);
  }
  return 0LL;
}
