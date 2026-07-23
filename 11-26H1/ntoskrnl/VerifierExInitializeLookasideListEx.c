/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x140C449E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, a2);
  if ( (int)result >= 0
    && (VfRuleClasses & 1) != 0
    && *(PVOID (__fastcall **)(int, SIZE_T, ULONG))(a1 + 48) == ExAllocatePoolZero
    && *(void (__stdcall **)(PPRIVILEGE_SET))(a1 + 56) == CmSiFreeMemory )
  {
    *(_QWORD *)(a1 + 48) = VerifierExAllocatePoolEx;
    *(_QWORD *)(a1 + 56) = VerifierExFreePoolEx;
  }
  return result;
}
