/*
 * XREFs of EtwpFreeLbrData @ 0x140836364
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLbrData(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx

  if ( (*(_DWORD *)(a1 + 816) & 0x8000) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E285C0.PriorityFloorCounts[8]);
  v3 = *(unsigned int **)(a1 + 1072);
  if ( v3 )
  {
    v4 = *v3;
    if ( (_DWORD)v4 )
      guard_dispatch_icall_no_overrides(v4, a2);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1072), 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
}
