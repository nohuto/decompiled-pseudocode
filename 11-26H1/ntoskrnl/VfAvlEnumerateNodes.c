/*
 * XREFs of VfAvlEnumerateNodes @ 0x140C22018
 * Callers:
 *     VfTargetDriversGetCounters @ 0x140C29044 (VfTargetDriversGetCounters.c)
 *     VfTargetFreeContiguousMemory @ 0x140C29374 (VfTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140C29968 (ViTargetWMIDeregister.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403B8438 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  result = ViAvlRaiseIrqlSafe(a2);
  v7 = dword_140F08D98;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140F08D90, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140F08D90), j);
      if ( !v11 )
        break;
      result = guard_dispatch_icall_no_overrides((__int64)v11, a4);
      if ( !(_DWORD)result )
        return result;
    }
    result = ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140F08D90, a2);
  }
  return result;
}
