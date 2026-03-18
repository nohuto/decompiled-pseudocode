/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x1407B3338
 * Callers:
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407B359C (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA534C (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     IopFreeReqList @ 0x1407A2C7C (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
