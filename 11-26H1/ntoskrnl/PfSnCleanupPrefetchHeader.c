/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x14098976C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedDeref @ 0x14098804C (PfpPrefetchSharedDeref.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int i; // edi
  __int64 v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // rax

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
      {
        v6 = *(_QWORD *)(a1 + 56) + 56LL * i;
        v7 = *(void **)(v6 + 32);
        if ( v7 )
          ObfDereferenceObject(v7);
        v8 = *(void **)(v6 + 40);
        if ( v8 )
          ObfDereferenceObject(v8);
        if ( _bittest64((const signed __int64 *)(v6 + 24), 0x22u) )
          PfpOpenHandleClose(v6, *(_QWORD *)(a1 + 8));
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v9 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v16 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v16;
    v16[1] = v9;
    PfpOpenHandleClose(v10 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v10 + 4, *(_QWORD *)(a1 + 8));
  }
  v11 = *(void **)(a1 + 16);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(void **)(a1 + 80);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(void **)(a1 + 88);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 )
  {
    PfpPrefetchSharedCleanup(v14, a2, a3, a4);
    PfpPrefetchSharedDeref(*(volatile signed __int64 **)(a1 + 8));
  }
  v15 = *(void **)(a1 + 112);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
