/*
 * XREFs of ViTargetRemovingCheckContiguousMemory @ 0x140C297E4
 * Callers:
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 * Callees:
 *     VfUtilFreePoolDispatchLevel @ 0x1406407E0 (VfUtilFreePoolDispatchLevel.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

void __fastcall ViTargetRemovingCheckContiguousMemory(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  struct _SLIST_ENTRY **v2; // rbx
  struct _SLIST_ENTRY *v3; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v5; // rax

  v2 = (struct _SLIST_ENTRY **)(BugCheckParameter3 + 264);
  if ( (MmVerifierData & 0x800) != 0 && *v2 != (struct _SLIST_ENTRY *)v2 )
    CarReportRuleViolationFromNt(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      *(_QWORD *)(BugCheckParameter3 + 248),
      11,
      *(_QWORD *)(a2 + 48));
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _SLIST_ENTRY *)v2 )
      break;
    Next = v3->Next;
    if ( *(&v3->Next->Next + 1) != v3 || (v5 = (struct _SLIST_ENTRY **)*((_QWORD *)&v3->Next + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = Next;
    *((_QWORD *)&Next->Next + 1) = v5;
    VfUtilFreePoolDispatchLevel(v3);
  }
}
