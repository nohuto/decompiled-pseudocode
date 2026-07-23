/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x1407B6398
 * Callers:
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     IopFreeReqList @ 0x1407A57BC (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD **v2; // rdi
  unsigned __int64 v3; // rbx
  bool v4; // zf
  void *v5; // rcx

  if ( a1 < a2 )
  {
    v2 = (_QWORD **)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(*v2);
      v4 = (*(_DWORD *)(v2 - 3) & 0x200) == 0;
      *v2 = 0LL;
      if ( !v4 )
      {
        v5 = *(v2 - 1);
        if ( v5 )
        {
          ExFreePoolWithTag(v5, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
