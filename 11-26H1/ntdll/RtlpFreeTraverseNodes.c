/*
 * XREFs of RtlpFreeTraverseNodes @ 0x180003660
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180001E20 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
