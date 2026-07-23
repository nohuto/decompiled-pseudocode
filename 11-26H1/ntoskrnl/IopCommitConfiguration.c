/*
 * XREFs of IopCommitConfiguration @ 0x140B51038
 * Callers:
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // esi
  _QWORD *v4; // rbx
  int v5; // eax

  v1 = *a1;
  for ( i = 0; v1 != a1; *(v4 - 4) = v4 - 4 )
  {
    v4 = v1;
    v1 = (_QWORD *)*v1;
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(v4 - 8) + 8LL), 2LL);
    *((_WORD *)v4 + 8) = 0;
    v4[1] = v4;
    *v4 = v4;
    *(v4 - 1) = v4 - 2;
    if ( v5 < 0 )
      i = v5;
    *(v4 - 2) = v4 - 2;
    *(v4 - 5) = v4 - 6;
    *(v4 - 6) = v4 - 6;
    *(v4 - 3) = v4 - 4;
  }
  return i;
}
