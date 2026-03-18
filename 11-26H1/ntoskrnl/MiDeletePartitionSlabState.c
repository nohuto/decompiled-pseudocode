/*
 * XREFs of MiDeletePartitionSlabState @ 0x14087BB64
 * Callers:
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 *     MiDeletePendingSlabIdentities @ 0x1404A0CF8 (MiDeletePendingSlabIdentities.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePartitionSlabState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  PVOID *v8; // rdi

  MiDeletePendingSlabIdentities(a1, 1, a3, a4);
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiDeleteSlabAllocator, 0LL, 0xFFFFFFFF, 9u);
  result = *(unsigned int *)(a1 + 22064);
  v6 = 0;
  if ( (_DWORD)result )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( KeNumberNodes )
    {
      v8 = (PVOID *)(v7 + 56112);
      do
      {
        ExFreePoolWithTag(*v8, 0);
        result = (unsigned __int16)KeNumberNodes;
        v8 += 7040;
        ++v6;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
    }
  }
  return result;
}
