/*
 * XREFs of VfAvlEnumerateNodes @ 0x140B73C44
 * Callers:
 *     VfTargetFreeContiguousMemory @ 0x140B7B6EC (VfTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140B7BC58 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B8A8B4 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403EB784 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 i; // rbx
  __int64 v6; // rdi
  BOOLEAN j; // dl
  PVOID v8; // rax

  result = ViAvlRaiseIrqlSafe(a2);
  v4 = dword_140F04178;
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    v6 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140F04170, a2);
    for ( j = 1; ; j = 0 )
    {
      v8 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v6 + qword_140F04170), j);
      if ( !v8 )
        break;
      result = guard_dispatch_icall_no_overrides(v8);
      if ( !(_DWORD)result )
        return result;
    }
    result = ViAvlReleaseTableLockFromDpcLevel(v6 + qword_140F04170, a2);
  }
  return result;
}
