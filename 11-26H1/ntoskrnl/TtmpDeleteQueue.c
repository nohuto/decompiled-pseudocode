/*
 * XREFs of TtmpDeleteQueue @ 0x1407ED2A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407E6ED0 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogQueueDestroyed @ 0x1407E9EF0 (TtmiLogQueueDestroyed.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpDeleteQueue(__int64 *a1)
{
  __int64 *v2; // rdx
  volatile signed __int32 *v3; // rdi
  __int64 **v4; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  TtmpAcquireSessionLock();
  v2 = (__int64 *)*a1;
  v3 = (volatile signed __int32 *)a1[2];
  if ( *(__int64 **)(*a1 + 8) != a1 || (v4 = (__int64 **)a1[1], *v4 != a1) )
LABEL_9:
    __fastfail(3u);
  *v4 = v2;
  v2[1] = (__int64)v4;
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast(v3);
  ExDeleteResourceLite((PERESOURCE)(a1 + 3));
  v5 = (_QWORD **)(a1 + 19);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 )
      goto LABEL_9;
    v7 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_9;
    *v5 = v7;
    v7[1] = v5;
    ExFreePoolWithTag(v6, 0x716D7454u);
  }
  TtmiLogQueueDestroyed();
}
