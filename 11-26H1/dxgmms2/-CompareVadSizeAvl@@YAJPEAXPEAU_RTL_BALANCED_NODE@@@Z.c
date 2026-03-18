/*
 * XREFs of ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400C9940
 * Callers:
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400C9610 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadSizeAvl(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned __int64 v2; // rax
  bool v3; // cf
  __int64 result; // rax

  v2 = (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
  v3 = *a1 < v2;
  if ( *a1 == v2 )
    return 0LL;
  result = 1LL;
  if ( v3 )
    return 0xFFFFFFFFLL;
  return result;
}
