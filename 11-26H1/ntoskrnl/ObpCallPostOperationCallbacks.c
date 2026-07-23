/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x1409BB9AC
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1408F5C04 (ObpCallPreOperationCallbacks.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = (struct _EX_RUNDOWN_REF *)v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    v7 = *(_QWORD *)(v6[3].Count + 8);
    KeCallbackValidationPrologue((__int64)&v9);
    guard_dispatch_icall_no_overrides(v7, a1);
    KeCallbackValidationEpilogue((__int64)&v9, v6[6].Count, 0x102u);
    ExReleaseRundownProtection_0(v6 + 7);
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
