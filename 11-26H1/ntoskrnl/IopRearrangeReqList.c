/*
 * XREFs of IopRearrangeReqList @ 0x140B4DA94
 * Callers:
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 */

unsigned __int64 __fastcall IopRearrangeReqList(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned __int64 *v5; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdx

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 32) <= 1u )
  {
    v5 = (unsigned __int64 *)(a1 + 40);
  }
  else
  {
    v3 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v3 + 40) + 4LL) = v3;
      ++v3;
      v4 = *(_DWORD *)(a1 + 32);
    }
    while ( v3 < v4 );
    v5 = (unsigned __int64 *)(a1 + 40);
    qsort((void *)(a1 + 40), v4, 8uLL, (int (__cdecl *)(const void *, const void *))IopCompareReqAlternativePriority);
  }
  result = *(unsigned int *)(a1 + 32);
  v7 = v5;
  v8 = (unsigned __int64)&v5[result];
  if ( (unsigned __int64)v5 < v8 )
  {
    do
    {
      result = *v7;
      if ( *(_DWORD *)*v7 > 0x7FFFu )
        break;
      ++v7;
    }
    while ( (unsigned __int64)v7 < v8 );
  }
  if ( v7 != v5 )
    v1 = v7;
  *(_QWORD *)(a1 + 24) = v1;
  return result;
}
